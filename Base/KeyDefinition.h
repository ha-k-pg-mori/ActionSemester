#ifndef KEY_DEFINITION_H
#define KEY_DEFINITION_H

#include "DxLib.h"

enum KeyType
{
	KeyType_Jump,
	KeyType_Left,
	KeyType_Right,

	KeyType_Max,
};

const int Key_Assign[KeyType_Max] =
{
	KEY_INPUT_UP,
	KEY_INPUT_LEFT,
	KEY_INPUT_RIGHT,
};



#endif // !KEY_DEFINITION_H

