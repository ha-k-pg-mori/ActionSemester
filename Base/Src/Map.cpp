#include "Map.h"
#include "DxLib.h"

const int MapChipHeight = 10;
const int MapChipWidth = 10;

// マップチップID配列
int MapChipIds[MapChipHeight][MapChipWidth] =
{
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
};

Map::Map()
{

}

Map::~Map()
{

}

bool Map::OnCollisionRectAndMapChip(Vec2 obj_pos, Vec2 obj_size)
{
	
	Vec2 vertices[] =
	{
		// 左上
		obj_pos,
		// 右上
		Vec2(obj_pos.X + obj_size.X, obj_pos.Y),
		// 右下
		Vec2(obj_pos.X + obj_size.X, obj_pos.Y + obj_size.Y),
		// 左下
		Vec2(obj_pos.X, obj_pos.Y + obj_size.Y),
	};

	// 1-2 座標を配列の要素番号に変換
	int vertex_mapchip_ids_w[4];
	int vertex_mapchip_ids_h[4];

	for (int i = 0; i < 4; i++)
	{
		vertex_mapchip_ids_w[i] = vertices[i].X / 64.0f;
		vertex_mapchip_ids_h[i] = vertices[i].Y / 64.0f;
	}

	// 矩形の各頂点の位置にあるチップが有効かどうかを判定する
	for (int i = 0; i < 4; i++)
	{
		int w = vertex_mapchip_ids_w[i];
		int h = vertex_mapchip_ids_h[i];

		// 配列の番号が有効な値かどうかをチェック
		if ((w < 0 || w >= MapChipWidth) &&
			(h < 0 || h >= MapChipHeight))
		{
			continue;
		}

		// 0以外は有効番号 => 有効番号 == マップチップが配置されている
		if (MapChipIds[h][w] != 0)
		{
			// 当たり
			return true;
		}
	}

	// 当たっていない
	return false;
}

void Map::Update()
{

}

void Map::Draw()
{
	Vec2 pos = Vec2(0, 0);
	Vec2 tex_pos = Vec2(0, 0);
	Vec2 chip_size = Vec2(64.0f, 64.0f);

	// Yサイズ(配列)
	for (int i = 0; i < MapChipHeight; i++)
	{
		// Xサイズ(配列)
		for (int j = 0; j < MapChipWidth; j++)
		{
			// 0だったら描画をしない
			if (MapChipIds[j][i] == 0)
			{
				continue;
			}

			// テクスチャ座標割り出し
			tex_pos.X = MapChipIds[j][i] % 4 * chip_size.X;
			tex_pos.Y = MapChipIds[j][i] / 4 * chip_size.Y;

			// 描画座標割り出し
			pos = Vec2(i * chip_size.X, j * chip_size.X);

			LoadDivGraph("image/MapChip.png", 24, tex_pos.X, tex_pos.Y, chip_size.X, chip_size.Y, MapChip);

		}
	}
}