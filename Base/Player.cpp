#include "Player.h"
#include "Src/Jump.h"

#include "../Src/InputManager.h"
#include"../Src/Jump.h"

Player::Player()
{
	Player:: Pos = Vec2(300, 200);
	Player::g_CanJamp[4];
	Player::g_GroundPos = 300.0f;

	InputManager::CreateInstance();
	UpdateJump(Pos, g_CanJamp[0], g_GroundPos);
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
}

void Player::Update()
{
	InputManager* pInputMng = InputManager::GetInstance();
	if (pInputMng->IsOn(KeyType_Jump))
	{
		if (CanJump() == true)
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

}

void Player::Draw()
{
	LoadGraphScreen(Pos.X,Pos.Y, "image/ばっちもん.png", TRUE);
}