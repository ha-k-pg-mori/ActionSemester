#include "DxLib/DxLib.h"
#include"../Player.h"
#include "../Src/InputManager.h"
#include "../Src/Definition.h"


// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//�E�C���h�E���[�h�ɕύX
	SetOutApplicationLogValidFlag(FALSE);	// ログ出力
	ChangeWindowMode(TRUE);					// ウィンドウモード
	SetGraphMode(640, 480, 32);				// 画面モード変更
	SetBackgroundColor(0, 0, 0);		// 背景色
	SetMainWindowText("ActionGame");			// メニューバーのタイトル
	if (DxLib_Init() == -1) { return -1; }
	
	

	if (DxLib_Init() == -1) {return -1;}

	SetDrawScreen(DX_SCREEN_BACK);
	
	Player::CreateInstance();
	InputManager::CreateInstance();

	while (true)
	{
		if (ProcessMessage() != 0) { break; }
		
		ClearDrawScreen();
		clsDx();
		
		InputManager* pInputMng = InputManager::GetInstance();
		Player* pPlayer = Player::GetInstance();

		pInputMng->Update();
		pPlayer->Update();

		pPlayer->Draw();
		//LoadGraphScreen(0, 0, "image/MapChip.png", TRUE);

		ScreenFlip();
	}

	InputManager::DestroyInstance();
	Player::DestroyInstance();
	
	WaitKey();    // �L�[���͑҂�

	DxLib_End();    // �c�w���C�u�����g�p�̏I������

	return 0;    // �\�t�g�̏I�� 
}