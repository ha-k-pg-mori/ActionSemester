#include "Player.h"
#include "Jump.h"
#include "Engine/Engine.h"
#include "Map.h"

Map map;

Player::Player()
{
	Player:: Pos = Vec2(200, 200);
	Player::g_CanJump[1];
	Player::g_GroundPos = 300.0f;
	Player::vector = Vec2(0.0f, 0.0f);
	Player::Speed = 2.0f;
}

Player::~Player()
{
	
}

bool Player::CanJump()
{
	for (int i = 0; i < 4; i++)
	{
		if (g_CanJump[i] == false)
		{
			return false;
		}
	}

	return true;
}

void Player::Update()
{
	vector.Y = +1.9f;

	if (Engine::IsKeyboardKeyPushed(DIK_A))
	{
		StartJump(g_CanJump[0]);
	}

	if(Engine::IsKeyboardKeyHeld(DIK_LEFTARROW))
	{
		vector.X -= Speed;
	}
	if (Engine::IsKeyboardKeyHeld(DIK_RIGHTARROW))
	{
		vector.X += Speed;
	}

	/*for (int i = 0; i < 4; i++)
	{
		g_CanJump[i] = true;
	}*/

	if (Pos.Y > 400.0f)
	{
		Pos.Y = 400.0f;
	}


	Texture* tex = Engine::GetTexture("Dango");
	Vec2 size = Vec2(tex->Width, tex->Height);

	// マップチップと矩形の当たり判定
	if (map.OnCollisionRectAndMapChip(
		// 現在値に移動量を加算した座標
		Vec2(Pos.X + vector.X, Pos.Y + vector.Y),
		// 矩形のサイズ
		size) == false)
	{
		Pos.X += vector.X;
		Pos.Y += vector.Y;
	}

	UpdateJump(Pos, g_CanJump[0], g_GroundPos);

}

void Player::Draw()
{
	map.Draw();

	Engine::DrawTexture(Pos.X, Pos.Y, "Dango");
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

//void AdjustToMapchipEdgePosition(map.EdgeType contact_edge, float contact_pos)
//{
//	Vec2 offset = Vec2(PlayerWidth, PlayerHeight);
//
//	switch (contact_edge)
//	{
//	case EdgeTypeLeft:
//		g_Player.Position.X = contact_pos - offset.X;
//		break;
//	case EdgeTypeRight:
//		g_Player.Position.X = contact_pos;
//		break;
//	case EdgeTypeTop:
//		g_Player.Position.Y = contact_pos - offset.Y;
//		g_Player.IsFloatingAir = false;
//		break;
//	case EdgeTypeBottom:
//		g_Player.Position.Y = contact_pos;
//		break;
//	}
//}