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

public:
	static void CreateInstance();
	
	static void DestroyInstance();
	
	static bool IsNull();

	static Player* GetInstance();

protected:
	Vec2 Pos;
	Vec2 vector;
	int Speed;

	int MapChip[24];

	bool g_CanJump[1];
	float g_GroundPos;

private:
	static Player* pPlayer;

	

};

#endif // !PLAYER_H

