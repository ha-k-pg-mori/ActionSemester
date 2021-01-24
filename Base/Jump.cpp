#include "../Src/Jump.h"


void Jump::StartJump(bool& can_jump)
{
	g_Velocity = 20.0f;
	can_jump = false;
}

void Jump::UpdateJump(Vec2& Pos, bool& can_jump, float ground_pos)
{
    if (can_jump == true)
    {
        return;
    }

    Pos.Y -= g_Velocity;
    g_Velocity -= g_Gravity;

    if (ground_pos <= Pos.Y)
    {
        can_jump = true;
        Pos.Y = ground_pos;
    }
}