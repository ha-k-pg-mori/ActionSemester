#ifndef PLAYER_H
#define PLAYER_H

#include "../Src/Common/Vec.h"

class Player
{
public:
	Player();
	~Player();

	void Update();
	void Draw();

	bool CanJump();

protected:
	Vec2 Pos;

	bool g_CanJamp[4];

	float g_GroundPos;



};

#endif // !PLAYER_H

