#include "Map.h"
#include"Engine/Engine.h"

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
	vector = Vec2(0.0f, 0.0f);
	Map::ChipSize = 64;
}

Map::~Map()
{

}

void Map::GetContactParameter(EdgeType rect_edge, int chip_id_x, int chip_id_y, EdgeType& contact_edge, float& contact_position)
{
	Vec2 chip_pos = Vec2((float)chip_id_x * ChipSize, (float)chip_id_y * ChipSize);

	switch (rect_edge)
	{
	case EdgeTypeLeft:
		contact_edge = EdgeType::EdgeTypeRight;
		contact_position = chip_pos.X + ChipSize;
		break;
	case EdgeTypeRight:
		contact_edge = EdgeType::EdgeTypeLeft;
		contact_position = chip_pos.X;
		break;
	case EdgeTypeTop:
		contact_edge = EdgeType::EdgeTypeBottom;
		contact_position = chip_pos.Y + ChipSize;
		break;
	case EdgeTypeBottom:
		contact_edge = EdgeType::EdgeTypeTop;
		contact_position = chip_pos.Y;
		break;
	}
}

bool Map::OnCollisionRectAndMapChip(Vec2 obj_pos, Vec2 obj_size, EdgeType& contact_edge, float& contact_edge_position)
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
		if (MapChipIds[h][w] == 1)
		{
			GetContactParameter((EdgeType)i, h, w, contact_edge, contact_edge_position);
			// ������
			return true;
		}

		/*if (MapChipIds[0][1] )
		{
			obj_pos.X++;
		}
		if (MapChipIds[1][0])
		{
			obj_pos.Y++;
		}*/
	}

	// �������Ă��Ȃ�
	return false;
}

void Map::Update(Vec2 g_Pos)
{
	
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

			Engine::DrawTextureUV(
				pos.X,
				pos.Y,
				"MapChip",
				tex_pos.X,
				tex_pos.Y,
				chip_size.X,
				chip_size.Y);

		}
	}
}