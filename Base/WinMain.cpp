#include "DxLib/DxLib.h"
#include"../Player.h"

Player player;

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//�E�C���h�E���[�h�ɕύX
	ChangeWindowMode(TRUE);
	SetWindowSizeExtendRate(0.5);
	SetGraphMode(1920, 1080, 32);
	
	if (DxLib_Init() == -1) {return -1;}

	while (true)
	{
		if (ProcessMessage() != 0) { break; }
		
		ClearDrawScreen();
		clsDx();

		player.Update();

		player.Draw();


		ScreenFlip();
	}

	WaitKey();    // �L�[���͑҂�

	DxLib_End();    // �c�w���C�u�����g�p�̏I������

	return 0;    // �\�t�g�̏I�� 
}