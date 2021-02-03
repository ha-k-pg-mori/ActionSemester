#include "Map.h"
#include "DxLib.h"

const int MapChipHeight = 10;
const int MapChipWidth = 10;

// �}�b�v�`�b�vID�z��
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
		// ����
		obj_pos,
		// �E��
		Vec2(obj_pos.X + obj_size.X, obj_pos.Y),
		// �E��
		Vec2(obj_pos.X + obj_size.X, obj_pos.Y + obj_size.Y),
		// ����
		Vec2(obj_pos.X, obj_pos.Y + obj_size.Y),
	};

	// 1-2 ���W��z��̗v�f�ԍ��ɕϊ�
	int vertex_mapchip_ids_w[4];
	int vertex_mapchip_ids_h[4];

	for (int i = 0; i < 4; i++)
	{
		vertex_mapchip_ids_w[i] = vertices[i].X / 64.0f;
		vertex_mapchip_ids_h[i] = vertices[i].Y / 64.0f;
	}

	// ��`�̊e���_�̈ʒu�ɂ���`�b�v���L�����ǂ����𔻒肷��
	for (int i = 0; i < 4; i++)
	{
		int w = vertex_mapchip_ids_w[i];
		int h = vertex_mapchip_ids_h[i];

		// �z��̔ԍ����L���Ȓl���ǂ�����`�F�b�N
		if ((w < 0 || w >= MapChipWidth) &&
			(h < 0 || h >= MapChipHeight))
		{
			continue;
		}

		// 0�ȊO�͗L���ԍ� => �L���ԍ� == �}�b�v�`�b�v���z�u����Ă���
		if (MapChipIds[h][w] != 0)
		{
			// ������
			return true;
		}
	}

	// �������Ă��Ȃ�
	return false;
}

void Map::Update()
{
	n 
	Vec2 size = Vec2(tex->Width, tex->Height);

	// マップチップと矩形の当たり判定
	if (OnCollisionRectAndMapChip(
		// 現在値に移動量を加算した座標
		Vec2(g_ObjPos.X + vector.X, g_ObjPos.Y + vector.Y),
		// 矩形のサイズ
		size) == false)
	{
		g_ObjPos.X += vector.X;
		g_ObjPos.Y += vector.Y;
	}
}

void Map::Draw()
{
	Vec2 pos = Vec2(0, 0);
	Vec2 tex_pos = Vec2(0, 0);
	Vec2 chip_size = Vec2(64.0f, 64.0f);

	// Y�T�C�Y(�z��)
	for (int i = 0; i < MapChipHeight; i++)
	{
		// X�T�C�Y(�z��)
		for (int j = 0; j < MapChipWidth; j++)
		{
			// 0��������`�����Ȃ�
			if (MapChipIds[j][i] == 0)
			{
				continue;
			}

			// �e�N�X�`�����W����o��
			tex_pos.X = MapChipIds[j][i] % 4 * chip_size.X;
			tex_pos.Y = MapChipIds[j][i] / 4 * chip_size.Y;

			// �`����W����o��
			pos = Vec2(i * chip_size.X, j * chip_size.X);

			LoadDivGraph("image/MapChip.png", 24, tex_pos.X, tex_pos.Y, chip_size.X, chip_size.Y, MapChip);
			DrawGraph(pos.X, pos.Y, MapChip[i], FALSE);
		}
	}
}