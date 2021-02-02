#include "Player.h"
#include "Jump.h"
#include "Engine/Engine.h"




Player::Player()
{
	Player:: Pos = Vec2(300, 200);
	Player::g_CanJamp[1];
	Player::g_GroundPos = 300.0f;
	Player::Speed = 2.0f;
}

Player::~Player()
{
	
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
	if (Engine::IsKeyboardKeyHeld(DIK_UPARROW))
	{
		StartJump(g_CanJamp[0]);
	}

	if(Engine::IsKeyboardKeyHeld(DIK_LEFTARROW))
	{
		Pos.X -= Speed;
	}
	if (Engine::IsKeyboardKeyHeld(DIK_RIGHTARROW))
	{
		Pos.Y -= Speed;
	}
	

	UpdateJump(Pos, g_CanJamp[0], g_GroundPos);

}

void Player::Draw()
{
	Engine::DrawTexture(Pos.X, Pos.Y, "Res/dango_03.png");
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