#ifndef DEFINITION_H
#define DEFINITION_H

// �V�[��ID
enum SceneID
{
	SceneID_Title,      // �^�C�g��
	SceneID_InGame,     // �C���Q�[��
	SceneID_Result,     // ���U���g

	SceneID_Max,
	SceneID_Invalid,    // �����l
};
// -------------------------------------
// �q�ɔԗp�̒�`
const int STAGE_WIDTH = 23;
const int STAGE_HEIGHT = 2;


const int CHIP_WIDTH = 64;
const int CHIP_HEIGHT = 64;





enum ObjectType
{
	Objecttype_Ground,       // 0
	Objecttype_Wall,		 // 1
	Objecttype_Goal,		
};

// �ړ�����
enum DirType
{
	DirType_Up, 
	DirType_Down,
	DirType_Left,
	DirType_Right,
	
	// �摜�ǂݍ��݂Ŏg�p����
	DirType_Max,
};

#endif // !DEFINITION_H

