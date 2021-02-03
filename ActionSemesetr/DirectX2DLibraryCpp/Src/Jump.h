#ifndef JUMP_H
#define JUMP_H

#include "Common/Vec.h"


	void StartJump(bool& can_jump);
	void UpdateJump(Vec2& Pos, bool& can_jump, float ground_pos);


#endif // !JUMP_H



