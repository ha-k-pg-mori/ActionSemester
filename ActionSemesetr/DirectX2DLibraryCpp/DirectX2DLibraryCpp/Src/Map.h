#ifndef MAP_H
#define MAP_H

#include "Common/Vec.h"
#include "Common/Size.h"

class Map
{
public:
	Map();
	~Map();

	bool OnCollisionRectAndMapChip(Vec2 obj_pos, Vec2 obj_size);
	
	void Update();
	
	void Draw();

protected:
	int MapChip[24];
};

#endif // !MAP_H

