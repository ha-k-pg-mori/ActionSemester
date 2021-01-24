#ifndef PLAYER_H
#define PLAYER_H

#include "../Src/Common/Vec.h"

class Player
{
public:
	Player();
	~Player();

	void StartJump(bool& can_jump);
	void UpdateJump(Vec2& Pos, bool& can_jump, float ground_pos);

protected:
	
	Vec2 Pos;



};

#endif // !PLAYER_H

