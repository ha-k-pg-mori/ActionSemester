#ifndef MAP_H
#define MAP_H

#include "Common/Vec.h"
#include "Common/Size.h"

class Map
{
public:
	Map();
	~Map();

	enum EdgeType
	{
		EdgeTypeNon = -1,
		EdgeTypeLeft,
		EdgeTypeRight,
		EdgeTypeTop,
		EdgeTypeBottom,
		EdgeTypeMax,
	};

	bool OnCollisionRectAndMapChip(Vec2 obj_pos, Vec2 obj_size,EdgeType& contact_edge, float& contact_edge_position);
	
	void Update(Vec2 g_Pos);
	
	void Draw();

	

	void GetContactParameter(EdgeType rect_edge, int chip_id_x, int chip_id_y, EdgeType& contact_edge, float& contact_position);

protected:
	int MapChip[24];

	int ChipSize;

	Vec2 vector;
};

#endif // !MAP_H

