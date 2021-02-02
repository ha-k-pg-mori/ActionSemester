#include "Player.h"
#include "Src/Jump.h"

#include "../Src/InputManager.h"
#include"../Src/Jump.h"
#include "../Src/Map.h"




Player::Player()
{
	Player:: Pos = Vec2(300, 200);
	Player::g_CanJamp[1];
	Player::g_GroundPos = 300.0f;

	InputManager::CreateInstance();
	LoadDivGraph("image/MapChip.png", 24, 4, 4, 64, 64, MapChip);
	
}

Player::~Player()
{
	InputManager::DestroyInstance();
}

bool Player::CanJump()
{
	for (int i = 0; i < 4; i++)
	{
		if (g_CanJamp[i] == false)
		{
			return false;
		}
	}

	return true;
}

void Player::Update()
{

	InputManager* pInputMng = InputManager::GetInstance();
	if (CanJump() == true)
	{
		if (pInputMng->IsOn(KeyType_Jump))
		{
			StartJump(g_CanJamp[0]);
		}
	}
	if (pInputMng->IsOn(KeyType_Right))
	{
		Pos.X += 1;
	}
	if (pInputMng->IsOn(KeyType_Left))
	{
		Pos.X -= 1;
	}

	for (int i = 0; i < 4; i++)
	{
		g_CanJamp[1] = true;
	}

	UpdateJump(Pos, g_CanJamp[0], g_GroundPos);

}

void Player::Draw()
{
	
	LoadGraphScreen(Pos.X, Pos.Y, "image/dango_03.png", TRUE);
	//DrawGraph(0, 0, MapChip[], FALSE);
}

Player* Player::pPlayer = nullptr;

// 実体を作る関数
void Player::CreateInstance()
{
	// nullチェックをすることで、２回目以降は作られない
	if (pPlayer == nullptr)
	{
		pPlayer = new Player();
	}
}
// 実体を破棄する関数
void Player::DestroyInstance()
{
	delete pPlayer;
	pPlayer = nullptr;
}
// 実体があるかを確認する関数
bool Player::IsNull()
{
	return (pPlayer == nullptr);
}
// 実体を取得する関数
Player* Player::GetInstance()
{
	return pPlayer;
}