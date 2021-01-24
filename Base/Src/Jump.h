#ifndef JUMP_H
#define JUMP_H

#include "Common/Vec.h"

class Jump
{
public:
	void StartJump(bool& can_jump);
	void UpdateJump(Vec2& Pos, bool& can_jump, float ground_pos);

protected:
	float g_Velocity = 10.0f;
	float g_Gravity = 1.0f;
};

#endif // !JUMP_H



