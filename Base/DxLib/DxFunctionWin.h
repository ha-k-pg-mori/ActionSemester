// -------------------------------------------------------------------------------
// 
// 		�c�w���C�u����		Windows��p�֐��v���g�^�C�v�錾�p�w�b�_�t�@�C��
// 
// 				Ver 3.22a
// 
// -------------------------------------------------------------------------------

#ifndef DX_FUNCTIONWIN_H
#define DX_FUNCTIONWIN_H

// �֐��v���g�^�C�v�錾------------------------------------------------------------------

#ifndef DX_NON_NAMESPACE

namespace DxLib
{

#endif // DX_NON_NAMESPACE

#define DX_FUNCTION_START


// DxWindow.cpp�֐��v���g�^�C�v�錾

// �֗��֐�
extern	int				GetResourceInfo(			const TCHAR *ResourceName,                            const TCHAR *ResourceType,                            void **DataPointerP , size_t *DataSizeP ) ;		// �w��̖��O�A�^�C�v�̃��\�[�X�̃A�h���X�ƃT�C�Y��擾����( �߂�l  -1:���s  0:���� )
extern	int				GetResourceInfoWithStrLen(	const TCHAR *ResourceName, size_t ResourceNameLength, const TCHAR *ResourceType, size_t ResourceTypeLength, void **DataPointerP , size_t *DataSizeP ) ;		// �w��̖��O�A�^�C�v�̃��\�[�X�̃A�h���X�ƃT�C�Y��擾����( �߂�l  -1:���s  0:���� )
extern	const TCHAR*	GetResourceIDString(		int ResourceID ) ;																																			// ���\�[�X�h�c�l���烊�\�[�X����擾����

// �E�C���h�E�֌W���擾�֐�
extern	int			GetWindowCRect(					RECT *RectBuf ) ;										// GetWindowClientRect �̋�����
extern	int			GetWindowClientRect(			RECT *RectBuf ) ;										// ���C���E�C���h�E�̃N���C�A���g�̈��擾����
extern	int			GetWindowFrameRect(				RECT *RectBuf ) ;										// ���C���E�C���h�E�̘g�̕�����܂߂��S�̗̂̈��擾����
extern	int			GetWindowActiveFlag(			void ) ;												// ���C���E�C���h�E���A�N�e�B�u���ǂ�����擾����( �߂�l  TRUE:�A�N�e�B�u  FALSE:��A�N�e�B�u )
extern	int			GetWindowMinSizeFlag(			void ) ;												// ���C���E�C���h�E���ŏ�������Ă��邩�ǂ�����擾����( �߂�l  TRUE:�ŏ�������Ă���  FALSE:�ŏ�������Ă��Ȃ� )
extern	int			GetWindowMaxSizeFlag(			void ) ;												// ���C���E�C���h�E���ő剻����Ă��邩�ǂ�����擾����( �߂�l  TRUE:�ő剻����Ă���  FALSE:�ő剻����Ă��Ȃ� )
extern	int			GetActiveFlag(					void ) ;												// GetWindowActiveFlag �̕ʖ��֐�
extern	HWND		GetMainWindowHandle(			void ) ;												// ���C���E�C���h�E�̃E�C���h�E�n���h����擾����
extern	int			GetWindowModeFlag(				void ) ;												// �E�C���h�E���[�h�ŋN�����Ă��邩�ǂ�����擾����( �߂�l  TRUE:�E�C���h�E���[�h  FALSE:�t���X�N���[�����[�h )
extern	int			GetDefaultState(				int *SizeX, int *SizeY, int *ColorBitDepth, int *RefreshRate = NULL , int *LeftTopX = NULL , int *LeftTopY = NULL , int *PixelSizeX = NULL , int *PixelSizeY = NULL , int *XDpi = NULL , int *YDpi = NULL ) ;		// �N�����̃f�X�N�g�b�v�̉�ʏ���擾����( SizeX:�f�X�N�g�b�v�̉��𑜓x��i�[����ϐ��̃|�C���^  SizeY:�c�𑜓x��i�[����ϐ��̃|�C���^  ColorBitDepth:��ʃJ���[�r�b�g����i�[����ϐ��̃|�C���^  RefreshRate:�f�X�N�g�b�v�̃��t���b�V�����[�g��i�[����ϐ��̃|�C���^  LeftTopX:�f�X�N�g�b�v�̍���w���W��i�[����ϐ��̃|�C���^  LeftTopY:�f�X�N�g�b�v�̍���x���W��i�[����ϐ��̃|�C���^  PixelSizeX:OS�̊g�嗦�ݒ�̉e����󂯂Ȃ��f�X�N�g�b�v�̉��𑜓x��i�[����ϐ��̃|�C���^  PixelSizeY:OS�̊g�嗦�ݒ�̉e����󂯂Ȃ��f�X�N�g�b�v�̏c�𑜓x��i�[����ϐ��̃|�C���^  XDpi:X����DPI  YDpi:Y����DPI )
extern	int			GetMonitorDpi(					int *XDpi, int *YDpi, int MonitorIndex = -1 ) ;			// ���j�^�[��DPI��擾����
extern	int			GetNoActiveState(				int ResetFlag = TRUE ) ;								// ���C���E�C���h�E����A�N�e�B�u�ɂȂ�A�������ꎞ��~���Ă������ǂ�����擾����(���� ResetFlag=TRUE:��Ԃ���Z�b�g FALSE:��Ԃ���Z�b�g���Ȃ�    �߂�l: 0=�ꎞ��~�͂��Ă��Ȃ�  1=�ꎞ��~���Ă��� )
extern	int			GetMouseDispFlag(				void ) ;												// �}�E�X�|�C���^��\�����邩�ǂ����̐ݒ��擾����( �߂�l  TRUE:�\������  FALSE:�\�����Ȃ� )
extern	int			GetAlwaysRunFlag(				void ) ;												// ���C���E�C���h�E����A�N�e�B�u�ɂȂ��Ă��������s�������邩�ǂ����̐ݒ��擾����( TRUE:���s����  FALSE:��~���� )
extern	int			_GetSystemInfo(					int *DxLibVer , int *DirectXVer , int *WindowsVer ) ;	// �c�w���C�u������ DirectX �̃o�[�W������ Windows �̃o�[�W�����ԍ���擾����
extern	int			GetPcInfo(						TCHAR *OSString , TCHAR *DirectXString , TCHAR *CPUString , int *CPUSpeed /* �P��MHz */ , double *FreeMemorySize /* �P��MByte */ , double *TotalMemorySize , TCHAR *VideoDriverFileName , TCHAR *VideoDriverString , double *FreeVideoMemorySize /* �P��MByte */ , double *TotalVideoMemorySize ) ;	// �o�b�̏���擾����
extern	int			GetUseMMXFlag(					void ) ;												// �l�l�w���g���邩�ǂ����̏��𓾂�
extern	int			GetUseSSEFlag(					void ) ;												// �r�r�d���g���邩�ǂ����̏��𓾂�
extern	int			GetUseSSE2Flag(					void ) ;												// �r�r�d�Q���g���邩�ǂ����̏��𓾂�
extern	int			GetWindowCloseFlag(				void ) ;												// �E�C���h�E����悤�Ƃ��Ă��邩�̏��𓾂�
extern	HINSTANCE	GetTaskInstance(				void ) ;												// �\�t�g�̃C���X�^���X��擾����
extern	int			GetUseWindowRgnFlag(			void ) ;												// ���[�W������g���Ă��邩�ǂ�����擾����
extern	int			GetWindowSizeChangeEnableFlag(	int *FitScreen = NULL ) ;								// �E�C���h�E�̃T�C�Y��ύX�ł���ݒ�ɂȂ��Ă��邩�ǂ�����擾����( �߂�l  TRUE:�ύX�ł���悤�ɂȂ��Ă���  FALSE:�ύX�ł��Ȃ��悤�ɂȂ��Ă��� )
extern	double		GetWindowSizeExtendRate(		double *ExRateX = NULL , double *ExRateY = NULL ) ;		// �`���ʂ̃T�C�Y�ɑ΂���E�C���h�E�T�C�Y�̔䗦��擾����( �߂�l�� ExRateX �ɑ�������l�Ɠ����ł� )
extern	int			GetWindowSize(					int *Width, int *Height ) ;								// ���C���E�C���h�E�̃N���C�A���g�̈�̃T�C�Y��擾����
extern	int			GetWindowEdgeWidth(				int *LeftWidth, int *RightWidth, int *TopWidth, int *BottomWidth ) ;	// �E�C���h�E�̏㉺���E�̉��̕���擾����
extern	int			GetWindowPosition(				int *x, int *y ) ;										// ���C���E�C���h�E�̃f�X�N�g�b�v��̍���[���W��擾����( �g��܂߂� )
extern	int			GetWindowUserCloseFlag(			int StateResetFlag = FALSE ) ;							// ���C���E�C���h�E�̕���{�^���������ꂽ���ǂ�����擾����
extern	int			CheckWindowMaximizeButtonInput(	int StateResetFlag = TRUE ) ;							// ���C���E�C���h�E�̍ő剻�{�^���������ꂽ���ǂ�����擾����ASetWindowMaximizeButtonBehavior( 1 ); �����s����Ă���ꍇ�̂ݗL���Ȋ֐�( StateResetFlag  TRUE = �����ꂽ��Ԃ���Z�b�g����   FALSE = �����ꂽ��Ԃ���Z�b�g���Ȃ� )
extern	int			GetNotDrawFlag(					void ) ;												// �c�w���C�u�����̕`��@�\��g�����ǂ����̐ݒ��擾����
extern	int			GetPaintMessageFlag(			void ) ;												// WM_PAINT ���b�Z�[�W���������ǂ�����擾����(�߂�l  TRUE:WM_PAINT���b�Z�[�W������(��x�擾����ƈȌ�A�Ă� WM_PAINT���b�Z�[�W������܂� FALSE ���Ԃ��Ă���悤�ɂȂ�)  FALSE:WM_PAINT ���b�Z�[�W�͗��Ă��Ȃ�)
extern	int			GetValidHiPerformanceCounter(	void ) ;												// �p�t�H�[�}���X�J�E���^���L�����ǂ�����擾����(�߂�l  TRUE:�L��  FALSE:����)
extern	TCHAR		GetInputSystemChar(				int DeleteFlag ) ;										// ���͂��ꂽ�V�X�e��������擾����

// �ݒ�n�֐�
extern	int			ChangeWindowMode(						int Flag ) ;																		// �E�C���h�E���[�h��ύX����
extern	int			SetUseCharSet(							int CharSet /* = DX_CHARSET_SHFTJIS �� */ ) ;										// �c�w���C�u�����̕����񏈗��őO��Ƃ��镶����Z�b�g��ݒ肷��
extern	int			LoadPauseGraph(							const TCHAR *FileName                        ) ;									// �A�N�e�B�u�E�C���h�E�����̃\�t�g�Ɉڂ��Ă���ۂɕ\������摜��t�@�C������ǂݍ���( FileName �� NULL ��n�����Ƃŉ��)
extern	int			LoadPauseGraphWithStrLen(				const TCHAR *FileName, size_t FileNameLength ) ;									// �A�N�e�B�u�E�C���h�E�����̃\�t�g�Ɉڂ��Ă���ۂɕ\������摜��t�@�C������ǂݍ���( FileName �� NULL ��n�����Ƃŉ��)
extern	int			LoadPauseGraphFromMem(					const void *MemImage , int MemImageSize ) ;											// �A�N�e�B�u�E�C���h�E�����̃\�t�g�Ɉڂ��Ă���ۂɕ\������摜�����������ǂݍ���( MemImage:�t�@�C���C���[�W�̐擪�A�h���X,NULL �ɂ��邱�ƂŐݒ���  MemImageSize:�t�@�C���C���[�W�̃T�C�Y( �P��:Byte ) )
extern	int			SetActiveStateChangeCallBackFunction(	int (* CallBackFunction )( int ActiveState , void *UserData ) , void *UserData ) ;	// ���C���E�C���h�E�̃A�N�e�B�u��Ԃɕω����������Ƃ��ɌĂ΂��R�[���o�b�N�֐���ݒ肷��( CallBackFunction:�Ă΂��R�[���o�b�N�֐��ANULL ��n���Ɛݒ���  UserData:CallBackFunction �̑�Q�����ɓn�����l )
extern	int			SetWindowText(							const TCHAR *WindowText                          ) ;								// ���C���E�C���h�E�̃E�C���h�E�e�L�X�g��ύX����
extern	int			SetWindowTextWithStrLen(				const TCHAR *WindowText, size_t WindowTextLength ) ;								// ���C���E�C���h�E�̃E�C���h�E�e�L�X�g��ύX����
extern	int			SetMainWindowText(						const TCHAR *WindowText                          ) ;								// SetWindowText �̕ʖ��֐�
extern	int			SetMainWindowTextWithStrLen(			const TCHAR *WindowText, size_t WindowTextLength ) ;								// SetWindowText �̕ʖ��֐�
extern	int			SetMainWindowClassName(					const TCHAR *ClassName                         ) ;									// ���C���E�C���h�E�̃N���X����ݒ肷��( DxLib_Init �̑O�ł̂ݎg�p�\ )
extern	int			SetMainWindowClassNameWithStrLen(		const TCHAR *ClassName, size_t ClassNameLength ) ;									// ���C���E�C���h�E�̃N���X����ݒ肷��( DxLib_Init �̑O�ł̂ݎg�p�\ )
extern	int			SetWindowIconID(						int ID ) ;																			// ���C���E�C���h�E�Ŏg�p����A�C�R���̂h�c��Z�b�g����
extern	int			SetWindowIconHandle(					HICON Icon ) ;																		// ���C���E�C���h�E�Ŏg�p����A�C�R���̃n���h����Z�b�g����
extern	int			SetUseASyncChangeWindowModeFunction(	int Flag , void (* CallBackFunction )( void * ) , void *Data ) ;					// �ő剻�{�^����ALT+ENTER�L�[�ɂ��񓯊��ȃE�C���h�E���[�h�̕ύX�̋@�\�̐ݒ��s��( Flag:�񓯊��E�C���h�E���[�h�ύX��L���ɂ��邩�ǂ����̃t���O( TRUE:�L���ɂ���  FALSE:�����ɂ���( �f�t�H���g ) )   CallBackFunction:�񓯊��E�C���h�E���[�h�ύX���s��ꂽ�ꍇ�ɌĂ΂��R�[���o�b�N�֐��̃A�h���X   Data:CallBackFunction �̈����ɓn����� void �^�̃|�C���^ )
extern	int			SetShutdownCallbackFunction(			void (* CallbackFunction )( void * ), void *Data, const TCHAR *Message ) ;			// �V���b�g�_�E���ɂ��\�t�g�̋����I���̍ۂɌĂ΂��R�[���o�b�N�֐���o�^����( Message �̓R�[���o�b�N�֐��̏I����҂ԕ\������郁�b�Z�[�W )
extern	int			SetWindowStyleMode(						int Mode ) ;																		// ���C���E�C���h�E�̃X�^�C����ύX����
extern	int			SetWindowZOrder(						int ZType /* = DX_WIN_ZTYPE_TOP �� */ , int WindowActivateFlag = TRUE ) ;			// ���C���E�C���h�E�̉��s���ʒu��ύX����
extern	int			SetWindowSizeChangeEnableFlag(			int Flag, int FitScreen = TRUE ) ;													// ���C���E�C���h�E�̒[��͂�ŃE�C���h�E�̃T�C�Y��ύX�ł���悤�ɂ��邩�ǂ����̐ݒ��s��( Flag:�ύX��\�ɂ��邩�ǂ���( TRUE:�\�ɂ���  FALSE:�s�\�ɂ���( �f�t�H���g ) )  FitScreen:�E�C���h�E�̃N���C�A���g�̈�ɉ�ʂ�t�B�b�g������(�g�傳����)���ǂ���  TRUE:�t�B�b�g������  FALSE:�t�B�b�g�����Ȃ� )
extern	int			SetWindowSizeExtendRate(				double ExRateX, double ExRateY = -1.0 ) ;											// �`���ʂ̃T�C�Y�ɑ΂��郁�C���E�C���h�E�T�C�Y�̔䗦��ݒ肷��( ExRateY ���}�C�i�X�̏ꍇ�� ExRateX �̒l�� ExRateY �ɂ�g�p����܂� )
extern	int			SetWindowSize(							int Width, int Height ) ;															// ���C���E�C���h�E�̃N���C�A���g�̈�̃T�C�Y��ݒ肷��
extern	int			SetWindowMaxSize(						int MaxWidth, int MaxHeight ) ;														// ���C���E�C���h�E�̃N���C�A���g�̈�̍ő�T�C�Y��ݒ肷��( SetWindowSizeChangeEnableFlag �̑������� TRUE �ŌĂяo���āA�E�C���h�E�̃T�C�Y���ύX�ł����Ԃł̂ݎg�p�����p�����[�^�ł� )
extern	int			SetWindowMinSize(						int MinWidth, int MinHeight ) ;														// ���C���E�C���h�E�̃N���C�A���g�̈�̍ŏ��T�C�Y��ݒ肷��( SetWindowSizeChangeEnableFlag �̑������� TRUE �ŌĂяo���āA�E�C���h�E�̃T�C�Y���ύX�ł����Ԃł̂ݎg�p�����p�����[�^�ł� )
extern	int			SetWindowPosition(						int x, int y ) ;																	// ���C���E�C���h�E�̈ʒu��ݒ肷��( �g��܂߂�������W )
extern	int			SetSysCommandOffFlag(					int Flag , const TCHAR *HookDllPath = NULL                                ) ;		// �^�X�N�X�C�b�`��L���ɂ��邩�ǂ�����ݒ肷��
extern	int			SetSysCommandOffFlagWithStrLen(			int Flag , const TCHAR *HookDllPath = NULL , size_t HookDllPathLength = 0 ) ;		// �^�X�N�X�C�b�`��L���ɂ��邩�ǂ�����ݒ肷��
extern	int			SetWindowMaximizeButtonBehavior(		int BehaviorType ) ;																// ���C���E�C���h�E�̍ő剻�{�^���������ꂽ�Ƃ��̋�����ݒ肷��( BehaviorType 0=�W������ 1=�W������͍s�킸�A�ő剻�{�^���������ꂽ���ǂ����� CheckWindowMaximizeButtonInput �Ŕ��肷�� )
extern	int			SetHookWinProc(							WNDPROC WinProc ) ;																	// ���C���E�C���h�E�ւ̃��b�Z�[�W��t�b�N����E�C���h�E�v���[�W����o�^����
extern	int			SetUseHookWinProcReturnValue(			int UseFlag ) ;																		// SetHookWinProc �Őݒ肵���E�C���h�E�v���[�W���̖߂�l��g�p���邩�ǂ�����ݒ肷��ASetHookWinProc �Őݒ肵���E�C���h�E�v���[�W���̒��ł̂ݎg�p�\( UseFlag TRUE:�߂�l��g�p���āA�c�w���C�u�����̃E�C���h�E�v���[�W���̏����͍s��Ȃ�  FALSE:�߂�l�͎g�p�����A�E�C���h�E�v���[�W������o����A�c�w���C�u�����̃E�C���h�E�v���[�W���̏�����s�� )
extern	int			SetDoubleStartValidFlag(				int Flag ) ;																		// �c�w���C�u������g�p�����\�t�g�̓�d�N����\�ɂ��邩�ǂ����̐ݒ��s��( TRUE:�\�ɂ���  FALSE:�s�\�ɂ���( �f�t�H���g ) )
extern	int			CheckDoubleStart(						void ) ;																			// �c�w���C�u������g�p�����\�t�g�����ɋN�����Ă��邩�ǂ�����擾����( TRUE:���ɋN�����Ă���  FALSE:�N�����Ă��Ȃ� )
extern	int			AddMessageTakeOverWindow(				HWND Window ) ;																		// ���b�Z�[�W������c�w���C�u�����Ɍ����肵�Ă�炤�E�C���h�E��ǉ�����
extern	int			SubMessageTakeOverWindow(				HWND Window ) ;																		// ���b�Z�[�W������c�w���C�u�����Ɍ����肵�Ă�炤�E�C���h�E����炷

extern	int			SetWindowInitPosition(					int x , int y ) ;																	// ���C���E�C���h�E�̏����ʒu��ݒ肷��
extern	int			SetNotWinFlag(							int Flag ) ;																		// �c�w���C�u�����̃E�C���h�E�֘A�̋@�\��g�p���Ȃ����ǂ�����ݒ肷��( TRUE:�g�p���Ȃ�  FALSE:�g�p����( �f�t�H���g ) )
extern	int			SetNotDrawFlag(							int Flag ) ;																		// �c�w���C�u�����̕`��@�\��g�����ǂ�����ݒ肷��( TRUE:�g�p���Ȃ�  FALSE:�g�p����( �f�t�H���g ) )
extern	int			SetNotSoundFlag(						int Flag ) ;																		// �c�w���C�u�����̃T�E���h�@�\��g�����ǂ�����ݒ肷��( TRUE:�g�p���Ȃ�  FALSE:�g�p����( �f�t�H���g ) )
extern	int			SetNotInputFlag(						int Flag ) ;																		// �c�w���C�u�����̓��͏�Ԃ̎擾�@�\��g�����ǂ�����ݒ肷��( TRUE:�g�p���Ȃ�  FALSE:�g�p����( �f�t�H���g ) )
extern	int			SetDialogBoxHandle(						HWND WindowHandle ) ;																// �c�w���C�u�����Ń��b�Z�[�W������s���_�C�A���O�{�b�N�X��o�^����
extern	int			SetWindowVisibleFlag(					int Flag ) ;																		// ���C���E�C���h�E��\�����邩�ǂ�����ݒ肷��( TRUE:�\������  FALSE:�\�����Ȃ� )
extern	int			SetWindowMinimizeFlag(					int Flag ) ;																		// ���C���E�C���h�E��ŏ������邩�ǂ�����ݒ肷��( TRUE:�ŏ�������  FALSE:�ŏ������� )
extern	int			SetWindowUserCloseEnableFlag(			int Flag ) ;																		// ���C���E�C���h�E�́~�{�^������������ɂc�w���C�u�����������I�ɃE�C���h�E����邩�ǂ�����ݒ肷��( TRUE:�����I�ɕ���( �f�t�H���g )  FALSE:���Ȃ� )
extern	int			SetDxLibEndPostQuitMessageFlag(			int Flag ) ;																		// �c�w���C�u�����I������ PostQuitMessage ��ĂԂ��ǂ�����ݒ肷��( TRUE:PostQuitMessage ��Ă�( �f�t�H���g )  FALSE:�Ă΂Ȃ� )
extern	int			SetUserWindow(							HWND WindowHandle ) ;																// �c�w���C�u�����Ŏg�p����E�C���h�E�̃n���h����Z�b�g����( DxLib_Init ����s����ȑO�ł̂ݗL�� )
extern	int			SetUserChildWindow(						HWND WindowHandle ) ;																// �c�w���C�u�����Ŏg�p����\���p�̎q�E�C���h�E�̃n���h����Z�b�g����( DxLib_Init ����s����ȑO�ł̂ݗL�� )
extern	int			SetUserWindowMessageProcessDXLibFlag(	int Flag ) ;																		// SetUseWindow �Őݒ肵���E�C���h�E�̃��b�Z�[�W���[�v������c�w���C�u�����ōs�����ǂ�����ݒ肷��( TRUE:�c�w���C�u�����ōs��( �f�t�H���g )  FALSE:�c�w���C�u�����ł͍s��Ȃ� )
extern	int			SetUseFPUPreserveFlag(					int Flag ) ;																		// FPU�̐��x�𗎂Ƃ��Ȃ��ݒ��g�p���邩�ǂ�����ݒ肷��ADxLib_Init ��Ăяo���O�̂ݗL��( TRUE:�g�p����(���x�������Ȃ�)  FALSE:�g�p���Ȃ�(���x�𗎂Ƃ�(�f�t�H���g) )
extern	int			SetValidMousePointerWindowOutClientAreaMoveFlag( int Flag ) ;																// �}�E�X�|�C���^���E�C���h�E�̃N���C�A���g�G���A�̊O�ɂ����邩�ǂ�����ݒ肷��( TRUE:������( �f�t�H���g�ݒ� )  FALSE:�����Ȃ� )
extern	int			SetUseBackBufferTransColorFlag(			int Flag ) ;																		// �o�b�N�o�b�t�@�̓��ߐF�̕����𓧉߂����邩�ǂ�����ݒ肷��( TRUE:���߂�����  FALSE:���߂����Ȃ�( �f�t�H���g ) )
extern	int			SetUseUpdateLayerdWindowFlag(			int Flag ) ;																		// UpdateLayerdWindowForBaseImage �� UpdateLayerdWindowForSoftImage ��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����  FALSE:�g�p���Ȃ� )
extern	int			SetResourceModule(						HMODULE ResourceModule ) ;															// ���\�[�X��ǂݍ��ލۂɎg�p���郂�W���[����ݒ肷��( NULL ��w�肷��Ə�����Ԃɖ߂�܂��A�f�t�H���g�ł� NULL )
extern	int			SetUseDxLibWM_PAINTProcess(				int Flag ) ;																		// WM_PAINT ���b�Z�[�W�������ۂɁw�c�w���C�u������ WM_PAINT���b�Z�[�W�������ۂ̏����x��s�����ǂ�����ݒ肷��( �ʃX���b�h�ŕ`�揈����s���ꍇ�ȂǂŎg�p )
extern	int			SetWindows10_WM_CHAR_CancelTime(		int MilliSecond ) ;																	// Windows10 �� WM_CHAR �ŒZ���ԂɘA�����ē������������͂��ꂽ�ꍇ�̖��������ɂ��鎞�Ԃ�ݒ肷��( MilliSecond �̃~���b�ȓ�ɘA�����ē������������͂��ꂽ�ꍇ�ɖ����ɂ���AMilliSecond �̒l��}�C�i�X�ɂ���ƃf�t�H���g�̐ݒ�ɖ߂� )

// �h���b�O���h���b�v���ꂽ�t�@�C���֌W
extern	int			SetDragFileValidFlag(		int Flag ) ;																	// �t�@�C���̃��C���E�C���h�E�ւ̃h���b�O���h���b�v�@�\��L���ɂ��邩�ǂ����̃t���O��Z�b�g����
extern	int			DragFileInfoClear(			void ) ;																		// ���C���E�C���h�E�փh���b�O���h���b�v���ꂽ�t�@�C���̏�����Z�b�g����
extern	int			GetDragFilePath(			TCHAR *FilePathBuffer ) ;														// ���C���E�C���h�E�փh���b�O���h���b�v���ꂽ�t�@�C������擾����( FilePathBuffer:�t�@�C������i�[����o�b�t�@�̐擪�A�h���X�@�@�߂�l�@-1:�擾�ł��Ȃ�����  0:�擾�ł��� )
extern	int			GetDragFileNum(				void ) ;																		// ���C���E�C���h�E�փh���b�O���h���b�v���ꂽ�t�@�C���̐���擾����

// �E�C���h�E�`��̈�ݒ�n�֐�
extern	HRGN		CreateRgnFromGraph(			int Width , int Height , const void *MaskData , int Pitch , int Byte ) ;		// �C�ӂ̉摜�C���[�W����RGN�n���h����쐬����( Width:���h�b�g��  Height:�c�h�b�g��  MaskData:�h�b�g���z��̐擪�A�h���X  Pitch:�P���C���������byte�T�C�Y  Byte:�P�h�b�g�ӂ��byte�T�C�Y( �Ή����Ă���̂� 1�`4 )�A�h�b�g�̐��l��0������ȊO���Ŕ��� )
extern	HRGN		CreateRgnFromBaseImage(		BASEIMAGE *BaseImage, int TransColorR, int TransColorG, int TransColorB ) ;		// �C�ӂ̊�{�C���[�W�f�[�^�Ɠ��ߐF����RGN�n���h����쐬����( BaseImage:��{�C���[�W�f�[�^�̃A�h���X  TransColorR,TransColorG,TransColorB:���ߐF( ���ꂼ��O�`�Q�T�T )
extern	int			SetWindowRgnGraph(			 const TCHAR *FileName                        ) ;								// �C�ӂ̉摜�t�@�C������q�f�m��Z�b�g����
extern	int			SetWindowRgnGraphWithStrLen( const TCHAR *FileName, size_t FileNameLength ) ;								// �C�ӂ̉摜�t�@�C������q�f�m��Z�b�g����
extern	int			UpdateTransColorWindowRgn(	void ) ;																		// �`���̉�ʂ̓��ߐF�̕����𓧉߂�����q�f�m��Z�b�g����( �g�p����铧�ߐF�͊֐� SetTransColor �Őݒ肵���F )

// �c�[���o�[�֌W
extern	int			SetupToolBar(				const TCHAR *BitmapName,                          int DivNum, int ResourceID = -1 ) ;									// �c�[���o�[�̏����ABitmapName �� NULL, ResourceID �� -1 ��n���ƃc�[���o�[����( BitmapName:�c�[���o�[�̃{�^���Ɏg�p����摜�t�@�C���p�X�AResourceID �� -1 �ȊO��n���ꍇ�� NULL �ɂ���  DivNum:�{�^���摜���̃{�^���̐�  ResourceID:�c�[���o�[�̃{�^���Ɏg�p����r�b�g�}�b�v���\�[�X�̂h�c�ABitmapName �� NULL ��n���Ƃ��̈������g�p����� )
extern	int			SetupToolBarWithStrLen(		const TCHAR *BitmapName, size_t BitmapNameLength, int DivNum, int ResourceID = -1 ) ;									// �c�[���o�[�̏����ABitmapName �� NULL, ResourceID �� -1 ��n���ƃc�[���o�[����( BitmapName:�c�[���o�[�̃{�^���Ɏg�p����摜�t�@�C���p�X�AResourceID �� -1 �ȊO��n���ꍇ�� NULL �ɂ���  DivNum:�{�^���摜���̃{�^���̐�  ResourceID:�c�[���o�[�̃{�^���Ɏg�p����r�b�g�}�b�v���\�[�X�̂h�c�ABitmapName �� NULL ��n���Ƃ��̈������g�p����� )
extern	int			AddToolBarButton(			int Type /* TOOLBUTTON_TYPE_NORMAL �� */ , int State /* TOOLBUTTON_STATE_ENABLE �� */ , int ImageIndex, int ID ) ;		// �c�[���o�[�Ƀ{�^����ǉ�����( Type:�{�^���^�C�v( TOOLBUTTON_TYPE_NORMAL ��( ���� #define �̒�`��Q�Ƃ��Ă������� ) )  State:�������( TOOLBUTTON_STATE_ENABLE ��( ���� #define �̒�`��Q�Ƃ��Ă������� ) )  ImageIndex:�g�p����{�^���̉摜�ԍ�  ID:�{�^���Ɋ��蓖�Ă鎯�ʔԍ�  )
extern	int			AddToolBarSep(				void ) ;																												// �c�[���o�[�Ɍ��Ԃ�ǉ�����
extern	int			GetToolBarButtonState(		int ID ) ;																												// �c�[���o�[�̃{�^���̏�Ԃ�擾����( ID:AddToolBarButton�Őݒ肵���{�^���̎��ʔԍ��@�@�߂�l�@TRUE:������Ă��� or �����ꂽ  FALSE:������Ă��Ȃ� )
extern	int			SetToolBarButtonState(		int ID , int State /* TOOLBUTTON_STATE_ENABLE �� */ ) ;																	// �c�[���o�[�̃{�^���̏�Ԃ�ݒ肷��( ID:AddToolBarButton�Őݒ肵���{�^���̎��ʔԍ��@State:�ݒ肷����( TOOLBUTTON_STATE_ENABLE ��( ���� #define �̒�`��Q�Ƃ��Ă������� ) )
extern	int			DeleteAllToolBarButton(		void ) ;																												// �c�[���o�[�̃{�^����S�č폜����

// ���j���[�֌W
extern	int			SetUseMenuFlag(						int Flag ) ;																										// ���j���[��L���ɂ��邩�ǂ�����ݒ肷��( TRUE:�g�p����  FALSE:�g�p���Ȃ� )
extern	int			SetUseKeyAccelFlag(					int Flag ) ;																										// �L�[�{�[�h�A�N�Z�����[�^�[��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����  FALSE:�g�p���Ȃ� )

extern	int			AddKeyAccel(						const TCHAR *ItemName,                        int ItemID , int KeyCode , int CtrlFlag , int AltFlag , int ShiftFlag ) ;	// �V���[�g�J�b�g�L�[��ǉ�����( ItemName:�V���[�g�J�b�g�L�[����蓖�Ă郁�j���[�̃A�C�e����( AddMenuItem �� NewItemName �ɓn�������O )�AItemID ��g�p����ꍇ�� NULL ��n��  ItemID:���j���[���ڂ̎��ʔԍ�( AddMenuItem �̈��� NewItemID �Ŏw�肵����� )�AItemName ��g�p����ꍇ�� -1 ��n��  KeyCode:�V���[�g�J�b�g�L�[�̃L�[( KEY_INPUT_L �� )  CtrlFlag:������CTRL�L�[������K�v������悤�ɂ��邩�ǂ���( TRUE:�����K�v������  FALSE:�����Ȃ��Ă�ǂ� )  AltFlag:������ALT�L�[������K�v������悤�ɂ��邩�ǂ���( TRUE:�����K�v������  FALSE:�����Ȃ��Ă�ǂ� )  ShiftFlag:������SHIFT�L�[������K�v������悤�ɂ��邩�ǂ���( TRUE:�����K�v������  FALSE:�����Ȃ��Ă�ǂ� )
extern	int			AddKeyAccelWithStrLen(				const TCHAR *ItemName, size_t ItemNameLength, int ItemID , int KeyCode , int CtrlFlag , int AltFlag , int ShiftFlag ) ;	// �V���[�g�J�b�g�L�[��ǉ�����( ItemName:�V���[�g�J�b�g�L�[����蓖�Ă郁�j���[�̃A�C�e����( AddMenuItem �� NewItemName �ɓn�������O )�AItemID ��g�p����ꍇ�� NULL ��n��  ItemID:���j���[���ڂ̎��ʔԍ�( AddMenuItem �̈��� NewItemID �Ŏw�肵����� )�AItemName ��g�p����ꍇ�� -1 ��n��  KeyCode:�V���[�g�J�b�g�L�[�̃L�[( KEY_INPUT_L �� )  CtrlFlag:������CTRL�L�[������K�v������悤�ɂ��邩�ǂ���( TRUE:�����K�v������  FALSE:�����Ȃ��Ă�ǂ� )  AltFlag:������ALT�L�[������K�v������悤�ɂ��邩�ǂ���( TRUE:�����K�v������  FALSE:�����Ȃ��Ă�ǂ� )  ShiftFlag:������SHIFT�L�[������K�v������悤�ɂ��邩�ǂ���( TRUE:�����K�v������  FALSE:�����Ȃ��Ă�ǂ� )
extern	int			AddKeyAccel_Name(					const TCHAR *ItemName,                        int KeyCode , int CtrlFlag , int AltFlag , int ShiftFlag ) ;				// �V���[�g�J�b�g�L�[��ǉ�����( �e�����̉��� AddKeyAccel �Ɠ����AItemID �������Ȃ������� )
extern	int			AddKeyAccel_NameWithStrLen(			const TCHAR *ItemName, size_t ItemNameLength, int KeyCode , int CtrlFlag , int AltFlag , int ShiftFlag ) ;				// �V���[�g�J�b�g�L�[��ǉ�����( �e�����̉��� AddKeyAccel �Ɠ����AItemID �������Ȃ������� )
extern	int			AddKeyAccel_ID(						int ItemID, int KeyCode, int CtrlFlag, int AltFlag, int ShiftFlag ) ;												// �V���[�g�J�b�g�L�[��ǉ�����( �e�����̉��� AddKeyAccel �Ɠ����AItemName �������Ȃ������� )
extern	int			ClearKeyAccel(						void ) ;																											// �V���[�g�J�b�g�L�[�̏�����Z�b�g����

extern	int			AddMenuItem(						int AddType /* MENUITEM_ADD_CHILD�� */ , const TCHAR *ItemName,                        int ItemID, int SeparatorFlag, const TCHAR *NewItemName = NULL ,                                int NewItemID = -1 ) ;	// ���j���[�ɍ��ڂ�ǉ�����( AddType:���ڃ^�C�v( MENUITEM_ADD_CHILD ��( ���� #define �̒�`��Q�Ƃ��Ă������� ) )    ItemName:AddType �� MENUITEM_ADD_CHILD�̏ꍇ�͐e�ƂȂ鍀�ڂ̖��O�AMENUITEM_ADD_INSERT�̏ꍇ�͑}���ʒu�ƂȂ鍀�ڂ̖��O�ANULL ��w�肷��� ItemID ���g�p�����   ItemID:ItemName �̑���Ɏ��ʔԍ��Ŏw�肷���́AAddType���̈Ⴂ�� ItemName �̉��̒ʂ�A-1��w�肷��� ItemName ���g�p�����@�@SeparatorFlag:��؂����ǉ����邩�ǂ���( TRUE:��؂����ǉ��A���̏ꍇ NewItemName �� NewItemID �͖��������  FALSE:�ǉ�����̂͋�؂���ł͂Ȃ� )�@�@NewItemName:�V�������ڂ̖��O  NewItemID:�V�������ڂ̎��ʔԍ��A-1��w�肷��Ɠ���œK���Ȕԍ������蓖�Ă��� )
extern	int			AddMenuItemWithStrLen(				int AddType /* MENUITEM_ADD_CHILD�� */ , const TCHAR *ItemName, size_t ItemNameLength, int ItemID, int SeparatorFlag, const TCHAR *NewItemName = NULL , size_t NewItemNameLength = 0 , int NewItemID = -1 ) ;	// ���j���[�ɍ��ڂ�ǉ�����( AddType:���ڃ^�C�v( MENUITEM_ADD_CHILD ��( ���� #define �̒�`��Q�Ƃ��Ă������� ) )    ItemName:AddType �� MENUITEM_ADD_CHILD�̏ꍇ�͐e�ƂȂ鍀�ڂ̖��O�AMENUITEM_ADD_INSERT�̏ꍇ�͑}���ʒu�ƂȂ鍀�ڂ̖��O�ANULL ��w�肷��� ItemID ���g�p�����   ItemID:ItemName �̑���Ɏ��ʔԍ��Ŏw�肷���́AAddType���̈Ⴂ�� ItemName �̉��̒ʂ�A-1��w�肷��� ItemName ���g�p�����@�@SeparatorFlag:��؂����ǉ����邩�ǂ���( TRUE:��؂����ǉ��A���̏ꍇ NewItemName �� NewItemID �͖��������  FALSE:�ǉ�����̂͋�؂���ł͂Ȃ� )�@�@NewItemName:�V�������ڂ̖��O  NewItemID:�V�������ڂ̎��ʔԍ��A-1��w�肷��Ɠ���œK���Ȕԍ������蓖�Ă��� )
extern	int			DeleteMenuItem(						const TCHAR *ItemName,                        int ItemID ) ;														// ���j���[����I����ڂ�폜����( ItemName:�폜���鍀�ڂ̖��O( AddMenuItem �� NewItemName �ɓn�������O )�ANULL ��w�肷��� ItemID ���g�p�����  ItemID:�폜���鍀�ڂ̎��ʔԍ�( AddMenuItem �� NewItemID �ɓn�����ԍ� )�A-1 ��w�肷��� ItemName ���g�p����� )
extern	int			DeleteMenuItemWithStrLen(			const TCHAR *ItemName, size_t ItemNameLength, int ItemID ) ;														// ���j���[����I����ڂ�폜����( ItemName:�폜���鍀�ڂ̖��O( AddMenuItem �� NewItemName �ɓn�������O )�ANULL ��w�肷��� ItemID ���g�p�����  ItemID:�폜���鍀�ڂ̎��ʔԍ�( AddMenuItem �� NewItemID �ɓn�����ԍ� )�A-1 ��w�肷��� ItemName ���g�p����� )
extern	int			CheckMenuItemSelect(				const TCHAR *ItemName,                        int ItemID ) ;														// ���j���[���I����ꂽ���ǂ�����擾����( �߂�l�@ 0:�I�����Ă��Ȃ�  1:�I����ꂽ   ItemName �� ItemID �ɂ��Ă͊֐� DeleteMenuItem �̒��߂�Q�Ƃ��Ă������� )
extern	int			CheckMenuItemSelectWithStrLen(		const TCHAR *ItemName, size_t ItemNameLength, int ItemID ) ;														// ���j���[���I����ꂽ���ǂ�����擾����( �߂�l�@ 0:�I�����Ă��Ȃ�  1:�I����ꂽ   ItemName �� ItemID �ɂ��Ă͊֐� DeleteMenuItem �̒��߂�Q�Ƃ��Ă������� )
extern	int			SetMenuItemEnable(					const TCHAR *ItemName,                        int ItemID, int EnableFlag ) ;										// ���j���[�̍��ڂ�I��o���邩�ǂ�����ݒ肷��( EnableFlag:���ڂ��I��ł��邩�ǂ���( TRUE:�I��ł���   FALSE:�I��ł��Ȃ� )   ItemName �� ItemID �ɂ��Ă͊֐� DeleteMenuItem �̒��߂�Q�Ƃ��Ă������� )
extern	int			SetMenuItemEnableWithStrLen(		const TCHAR *ItemName, size_t ItemNameLength, int ItemID, int EnableFlag ) ;										// ���j���[�̍��ڂ�I��o���邩�ǂ�����ݒ肷��( EnableFlag:���ڂ��I��ł��邩�ǂ���( TRUE:�I��ł���   FALSE:�I��ł��Ȃ� )   ItemName �� ItemID �ɂ��Ă͊֐� DeleteMenuItem �̒��߂�Q�Ƃ��Ă������� )
extern	int			SetMenuItemMark(					const TCHAR *ItemName,                        int ItemID, int Mark ) ;												// ���j���[�̍��ڂɃ`�F�b�N�}�[�N�⃉�W�I�{�^����\�����邩�ǂ�����ݒ肷��( Mark:�ݒ肷��}�[�N( MENUITEM_MARK_NONE ��( ���� #define �̒�`��Q�Ƃ��Ă������� )    ItemName �� ItemID �ɂ��Ă͊֐� DeleteMenuItem �̒��߂�Q�Ƃ��Ă������� ) )
extern	int			SetMenuItemMarkWithStrLen(			const TCHAR *ItemName, size_t ItemNameLength, int ItemID, int Mark ) ;												// ���j���[�̍��ڂɃ`�F�b�N�}�[�N�⃉�W�I�{�^����\�����邩�ǂ�����ݒ肷��( Mark:�ݒ肷��}�[�N( MENUITEM_MARK_NONE ��( ���� #define �̒�`��Q�Ƃ��Ă������� )    ItemName �� ItemID �ɂ��Ă͊֐� DeleteMenuItem �̒��߂�Q�Ƃ��Ă������� ) )
extern	int			CheckMenuItemSelectAll(				void ) ;																											// ���j���[�̍��ڂ��ǂꂩ�I����ꂽ���ǂ�����擾����( �߂�l  TRUE:�ǂꂩ�I����ꂽ  FALSE:�I�����Ă��Ȃ� )

extern	int			AddMenuItem_Name(					const TCHAR *ParentItemName,                              const TCHAR *NewItemName                           ) ;	// ���j���[�ɑI����ڂ�ǉ�����( ParentItemName:�e�ƂȂ鍀�ڂ̖��O�A�e�������X�g�̖��[�ɐV�������ڂ�ǉ����܂�  NewItemName:�V�������ڂ̖��O )
extern	int			AddMenuItem_NameWithStrLen(			const TCHAR *ParentItemName, size_t ParentItemNameLength, const TCHAR *NewItemName, size_t NewItemNameLength ) ;	// ���j���[�ɑI����ڂ�ǉ�����( ParentItemName:�e�ƂȂ鍀�ڂ̖��O�A�e�������X�g�̖��[�ɐV�������ڂ�ǉ����܂�  NewItemName:�V�������ڂ̖��O )
extern	int			AddMenuLine_Name(					const TCHAR *ParentItemName ) ;																						// ���j���[�̃��X�g�ɋ�؂����ǉ�����( ParentItemName:��؂����t���鍀�ڃ��X�g�̐e�̖��O�A���X�g�̖��[�ɋ�؂����ǉ����܂� )
extern	int			AddMenuLine_NameWithStrLen(			const TCHAR *ParentItemName, size_t ParentItemNameLength ) ;														// ���j���[�̃��X�g�ɋ�؂����ǉ�����( ParentItemName:��؂����t���鍀�ڃ��X�g�̐e�̖��O�A���X�g�̖��[�ɋ�؂����ǉ����܂� )
extern	int			InsertMenuItem_Name(				const TCHAR *ItemName,                        const TCHAR *NewItemName                           ) ;				// �w��̍��ڂƁA�w��̍��ڂ̈��̍��ڂƂ̊ԂɐV�������ڂ�ǉ�����
extern	int			InsertMenuItem_NameWithStrLen(		const TCHAR *ItemName, size_t ItemNameLength, const TCHAR *NewItemName, size_t NewItemNameLength ) ;				// �w��̍��ڂƁA�w��̍��ڂ̈��̍��ڂƂ̊ԂɐV�������ڂ�ǉ�����
extern	int			InsertMenuLine_Name(				const TCHAR *ItemName                        ) ;																	// �w��̍��ڂƁA�w��̍��ڂ̈��̍��ڂƂ̊Ԃɋ�؂����ǉ�����
extern	int			InsertMenuLine_NameWithStrLen(		const TCHAR *ItemName, size_t ItemNameLength ) ;																	// �w��̍��ڂƁA�w��̍��ڂ̈��̍��ڂƂ̊Ԃɋ�؂����ǉ�����
extern	int			DeleteMenuItem_Name(				const TCHAR *ItemName                        ) ;																	// ���j���[����I����ڂ�폜����
extern	int			DeleteMenuItem_NameWithStrLen(		const TCHAR *ItemName, size_t ItemNameLength ) ;																	// ���j���[����I����ڂ�폜����
extern	int			CheckMenuItemSelect_Name(			const TCHAR *ItemName                        ) ;																	// ���j���[���I����ꂽ���ǂ�����擾����( �߂�l�@0:�I�����Ă��Ȃ�  1:�I����ꂽ )
extern	int			CheckMenuItemSelect_NameWithStrLen(	const TCHAR *ItemName, size_t ItemNameLength ) ;																	// ���j���[���I����ꂽ���ǂ�����擾����( �߂�l�@0:�I�����Ă��Ȃ�  1:�I����ꂽ )
extern	int			SetMenuItemEnable_Name(				const TCHAR *ItemName,                        int EnableFlag ) ;													// ���j���[�̍��ڂ�I��o���邩�ǂ�����ݒ肷��( EnableFlag�@1:�I��ł���  0:�I��ł��Ȃ� )
extern	int			SetMenuItemEnable_NameWithStrLen(	const TCHAR *ItemName, size_t ItemNameLength, int EnableFlag ) ;													// ���j���[�̍��ڂ�I��o���邩�ǂ�����ݒ肷��( EnableFlag�@1:�I��ł���  0:�I��ł��Ȃ� )
extern	int			SetMenuItemMark_Name(				const TCHAR *ItemName,                        int Mark ) ;															// ���j���[�̍��ڂɃ`�F�b�N�}�[�N�⃉�W�I�{�^����\�����邩�ǂ�����ݒ肷��( Mark:�ݒ肷��}�[�N( MENUITEM_MARK_NONE �� ) )
extern	int			SetMenuItemMark_NameWithStrLen(		const TCHAR *ItemName, size_t ItemNameLength, int Mark ) ;															// ���j���[�̍��ڂɃ`�F�b�N�}�[�N�⃉�W�I�{�^����\�����邩�ǂ�����ݒ肷��( Mark:�ݒ肷��}�[�N( MENUITEM_MARK_NONE �� ) )

extern	int			AddMenuItem_ID(						int ParentItemID, const TCHAR *NewItemName,                           int NewItemID = -1 ) ;						// ���j���[�ɑI����ڂ�ǉ�����
extern	int			AddMenuItem_IDWithStrLen(			int ParentItemID, const TCHAR *NewItemName, size_t NewItemNameLength, int NewItemID = -1 ) ;						// ���j���[�ɑI����ڂ�ǉ�����
extern	int			AddMenuLine_ID(						int ParentItemID ) ;																								// ���j���[�̃��X�g�ɋ�؂����ǉ�����
extern	int			InsertMenuItem_ID(					int ItemID, int NewItemID ) ;																						// �w��̍��ڂƁA�w��̍��ڂ̈��̍��ڂƂ̊ԂɐV�������ڂ�ǉ�����
extern	int			InsertMenuLine_ID(					int ItemID, int NewItemID ) ;																						// �w��̍��ڂƁA�w��̍��ڂ̈��̍��ڂƂ̊Ԃɋ�؂����ǉ�����
extern	int			DeleteMenuItem_ID(					int ItemID ) ;																										// ���j���[����I����ڂ�폜����
extern	int			CheckMenuItemSelect_ID(				int ItemID ) ;																										// ���j���[���I����ꂽ���ǂ�����擾����( �߂�l�@�@0:�I�����Ă��Ȃ�  1:�I����ꂽ )
extern	int			SetMenuItemEnable_ID(				int ItemID, int EnableFlag ) ;																						// ���j���[�̍��ڂ�I��o���邩�ǂ�����ݒ肷��( EnableFlag�@1:�I��ł���  0:�I��ł��Ȃ� )
extern	int			SetMenuItemMark_ID(					int ItemID, int Mark ) ;																							// ���j���[�̍��ڂɃ`�F�b�N�}�[�N�⃉�W�I�{�^����\�����邩�ǂ�����ݒ肷��( Mark:�ݒ肷��}�[�N( MENUITEM_MARK_NONE �� ) )

extern	int			DeleteMenuItemAll(					void ) ;																											// ���j���[�̑S�Ă̑I����ڂ�폜����
extern	int			ClearMenuItemSelect(				void ) ;																											// ���j���[���I����ꂽ���ǂ����̏�����Z�b�g
extern	int			GetMenuItemID(						const TCHAR *ItemName                        ) ;																	// ���j���[�̍��ږ����獀�ڎ��ʔԍ���擾����
extern	int			GetMenuItemIDWithStrLen(			const TCHAR *ItemName, size_t ItemNameLength ) ;																	// ���j���[�̍��ږ����獀�ڎ��ʔԍ���擾����
extern	int			GetMenuItemName(					int ItemID, TCHAR *NameBuffer ) ;																					// ���j���[�̍��ڎ��ʔԍ����獀�ږ���擾����
extern	int 		LoadMenuResource(					int MenuResourceID ) ;																								// ���j���[����\�[�X����ǂݍ���
extern	int			SetMenuItemSelectCallBackFunction(	void (* CallBackFunction )( const TCHAR *ItemName, int ItemID ) ) ;													// ���j���[�̑I����ڂ��I����ꂽ�Ƃ��ɌĂ΂��R�[���o�b�N�֐���ݒ肷��( CallBackFunction:���ڂ��I����ꂽ�Ƃ��ɌĂ΂��R�[���o�b�N�֐��A�����ɍ��ږ��ƍ��ڂ̎��ʔԍ���n����ČĂ΂�� )

extern	int			SetWindowMenu(						int MenuID, int (* MenuProc )( WORD ID ) ) ;																		// (�Â��֐�)�E�C���h�E�Ƀ��j���[��ݒ肷��
extern	int			SetDisplayMenuFlag(					int Flag ) ;																										// (�Â��֐�)���j���[��\�����邩�ǂ�����Z�b�g����
extern	int			GetDisplayMenuFlag(					void ) ;																											// (�Â��֐�)���j���[��\�����Ă��邩�ǂ�����擾����
extern	int			GetUseMenuFlag(						void ) ;																											// ���j���[��g�p���Ă��邩�ǂ����𓾂�
extern	int			SetAutoMenuDisplayFlag(				int Flag ) ;																										// �t���X�N���[�����Ƀ��j���[������ŕ\���������\���ɂ����肷�邩�ǂ����̃t���O��Z�b�g����












// DxNetwork.cpp�֐��v���g�^�C�v�錾

#ifndef DX_NON_NETWORK
extern	int			GetWinSockLastError( void ) ;				// WinSock �ōŌ�ɔ��������G���[�̃R�[�h��擾����
#endif // DX_NON_NETWORK













// DxInputString.cpp�֐��v���g�^�C�v�錾

#ifndef DX_NON_KEYEX

extern	int			SetUseTSFFlag( int UseFlag ) ;											// �h�l�d�̊����ϊ����\���̏����� TSF ��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����( �f�t�H���g )  FALSE:�g�p���Ȃ� )

#endif // DX_NON_KEYEX














// DxInput.cpp�֐��v���g�^�C�v�錾

#ifndef DX_NON_INPUT

extern	int			SetKeyExclusiveCooperativeLevelFlag(	int Flag ) ;															// DirectInput �̃L�[�{�[�h�̋������x����r�����x���ɂ��邩�ǂ�����ݒ肷��( TRUE:�r�����x���ɂ���  FALSE:�W�����x���ɂ���( �f�t�H���g ) )�ADxLib_Init �̌Ăяo���O�ł̂ݎ��s�\�@
extern	int			SetKeyboardNotDirectInputFlag(			int Flag ) ;															// �L�[�{�[�h�̓��͏����� DirectInput ��g��Ȃ����ǂ�����ݒ肷��( TRUE:DirectInput ��g�킸�AWindows�W���@�\��g�p����@�@FALSE:DirectInput ��g�p���� )
extern	int			SetUseDirectInputFlag(					int UseFlag ) ;															// ���͏����� DirectInput ��g�p���邩�ǂ�����ݒ肷��( TRUE:DirectInput ��g�p����@�@FALSE:DirectInput ��g�킸�AWindows�W���@�\��g�p���� )
extern	int			SetDirectInputMouseMode(				int Mode ) ;															// �}�E�X�̓��͏����� DirectInput ��g�p����ꍇ�̓��샂�[�h��ݒ肷��( 0:�E�B���h�E���A�N�e�B�u�ȏꍇ�̂� DirectInput ��g�p����  1:�E�B���h�E�̃A�N�e�B�u��ԂɊ֌W�Ȃ� DirectInput ��g�p���� )
extern	int			SetUseXInputFlag(						int Flag ) ;															// Xbox360�R���g���[���̓��͏����� XInput ��g�p���邩�ǂ�����ݒ肷��( TRUE:XInput ��g�p����( �f�t�H���g )�@�@FALSE:XInput ��g�p���Ȃ� )
extern	int			SetUseXboxControllerDirectInputFlag(	int Flag ) ;															// Xbox360�R���g���[���� Xbox One�R���g���[���� DirectInput�R���g���[���Ƃ��Ă���o���邩�ǂ�����ݒ肷��( TRUE:DirectInput�R���g���[���Ƃ��Ă���o����  FALSE:DirectInput�R���g���[���Ƃ��Ă͌��o���Ȃ�(�f�t�H���g) )�ADxLib_Init �̌Ăяo���O�ł̂ݎ��s�\
extern	int			GetJoypadGUID(							int PadIndex, GUID *GuidInstanceBuffer, GUID *GuidProductBuffer = NULL ) ;	// �W���C�p�b�h�̂f�tI�c�𓾂�
extern	int			GetJoypadName(							int InputType, TCHAR *InstanceNameBuffer, TCHAR *ProductNameBuffer ) ;	// �W���C�p�b�h�̃f�o�C�X�o�^���Ɛ��i�o�^����擾����( InstanceNameBuffer, ProductNameBuffer ���� 260 �ȏ�̃o�b�t�@�T�C�Y���K�v )
extern	int			ConvertKeyCodeToVirtualKey(				int KeyCode ) ;															// �c�w���C�u�����̃L�[�R�[�h( KEY_INPUT_A �Ȃ� )�ɑΉ����� Windows �̉��z�L�[�R�[�h( VK_LEFT �Ȃ� ) ��擾����( KeyCode:�ϊ��������c�w���C�u�����̃L�[�R�[�h�@�߂�l�FWindows�̉��z�L�[�R�[�h )
extern	int			ConvertVirtualKeyToKeyCode(				int VirtualKey ) ;														//  Windows �̉��z�L�[�R�[�h( VK_LEFT �Ȃ� ) �ɑΉ�����c�w���C�u�����̃L�[�R�[�h( KEY_INPUT_A �Ȃ� )��擾����( VirtualKey:�ϊ�������Windows�̉��z�L�[�R�[�h�@�߂�l�F�c�w���C�u�����̃L�[�R�[�h )

#endif // DX_NON_INPUT











#ifndef DX_NOTUSE_DRAWFUNCTION

// �摜����O���t�B�b�N�n���h����쐬����֐�
extern	int			LoadGraphToResource(				int ResourceID ) ;																														// �摜���\�[�X����O���t�B�b�N�n���h����쐬����
extern	int			LoadDivGraphToResource(				int ResourceID, int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray ) ;											// �摜���\�[�X�𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadDivGraphFToResource(			int ResourceID, int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray ) ;											// �摜���\�[�X�𕪊����ăO���t�B�b�N�n���h����쐬����( float�^ )
extern	int			LoadGraphToResource(				const TCHAR *ResourceName,                            const TCHAR *ResourceType                            ) ;																				// �摜���\�[�X����O���t�B�b�N�n���h����쐬����
extern	int			LoadGraphToResourceWithStrLen(		const TCHAR *ResourceName, size_t ResourceNameLength, const TCHAR *ResourceType, size_t ResourceTypeLength ) ;																				// �摜���\�[�X����O���t�B�b�N�n���h����쐬����
extern	int			LoadDivGraphToResource(				const TCHAR *ResourceName,                            const TCHAR *ResourceType,                            int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray ) ;	// �摜���\�[�X�𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadDivGraphToResourceWithStrLen(	const TCHAR *ResourceName, size_t ResourceNameLength, const TCHAR *ResourceType, size_t ResourceTypeLength, int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray ) ;	// �摜���\�[�X�𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadDivGraphFToResource(			const TCHAR *ResourceName,                            const TCHAR *ResourceType,                            int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray ) ;	// �摜���\�[�X�𕪊����ăO���t�B�b�N�n���h����쐬����( float�^ )
extern	int			LoadDivGraphFToResourceWithStrLen(	const TCHAR *ResourceName, size_t ResourceNameLength, const TCHAR *ResourceType, size_t ResourceTypeLength, int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray ) ;	// �摜���\�[�X�𕪊����ăO���t�B�b�N�n���h����쐬����( float�^ )
#ifndef DX_NON_DIRECT3D11
extern	int			CreateGraphFromID3D11Texture2D(     const void *pID3D11Texture2D ) ;							// ID3D11Texture2D ����O���t�B�b�N�n���h����쐬����
#endif // DX_NON_DIRECT3D11

// �摜���֌W�֐�
extern	const void*	GetGraphID3D11Texture2D(		int GrHandle ) ;												// �O���t�B�b�N�n���h�������� ID3D11Texture2D ��擾����( Direct3D11 ��g�p���Ă���ꍇ�̂ݗL�� )( �߂�l�� ID3D11Texture2D * �ɃL���X�g���Ă������� )
extern	const void*	GetGraphID3D11RenderTargetView(	int GrHandle ) ;												// �O���t�B�b�N�n���h�������� ID3D11RenderTargetView ��擾����( Direct3D11 ��g�p���Ă��āA���� MakeScreen �ō쐬�����O���t�B�b�N�n���h���ł̂ݗL�� )( �߂�l�� ID3D11RenderTargetView * �ɃL���X�g���Ă������� )
extern	const void*	GetGraphID3D11DepthStencilView(	int GrHandle ) ;												// �O���t�B�b�N�n���h�������� ID3D11DepthStencilView ��擾����( Direct3D11 ��g�p���Ă��āA���� MakeScreen �ō쐬�����O���t�B�b�N�n���h���ł̂ݗL�� )( �߂�l�� ID3D11DepthStencilView * �ɃL���X�g���Ă������� )

// ��ʊ֌W�֐�
extern	int			BltBackScreenToWindow(			HWND Window, int ClientX, int ClientY ) ;										// ����ʂ̓�e��w��̃E�C���h�E�ɓ]������
extern	int			BltRectBackScreenToWindow(		HWND Window, RECT BackScreenRect, RECT WindowClientRect ) ;						// ����ʂ̎w��̗̈��E�C���h�E�̃N���C�A���g�̈�̎w��̗̈�ɓ]������
extern	int			SetScreenFlipTargetWindow(		HWND TargetWindow, double ScaleX = 1.0 , double ScaleY = 1.0 ) ;				// ScreenFlip �ŉ摜��]�������̃E�C���h�E��ݒ肷��( NULL ��w�肷��Ɛݒ��� )
extern	int			GetDesktopScreenGraph(			int x1, int y1, int x2, int y2, int GrHandle, int DestX = 0 , int DestY = 0 ) ;	// �f�X�N�g�b�v��ʂ���w��̈�̉摜����O���t�B�b�N�n���h���ɓ]������
extern	void *		GetDesktopScreenGraphMemImage(	int x1, int y1, int x2, int y2, int *Width, int *Height, int *Stride, int ColorBitDepth = 32 ) ;	// �f�X�N�g�b�v��ʂ���w��̈�̉摜�̃������C���[�W�̐擪�A�h���X�ƃC���[�W�̕��E�����E�X�g���C�h��擾����( �C���[�W�̃t�H�[�}�b�g�� ColorBitDepth = 32( �o�C�g���� B8G8R8X8 �� 32bit�J���[ ) ColorBitDepth = 24( �o�C�g���� B8G8R8 �� 24bit�J���[ ) )

// ���̑��ݒ�֌W�֐�
extern	int			SetMultiThreadFlag(								int Flag ) ;									// DirectDraw �� Direct3D �̋������x����}���`�X���b�h�Ή��ɂ��邩�ǂ�����Z�b�g����( TRUE:�}���`�X���b�h�Ή��ɂ���  FALSE:�}���`�X���b�h�Ή��ɂ��Ȃ�( �f�t�H���g ) )
extern	int			SetUseDirectDrawDeviceIndex(					int Index ) ;									// �g�p���� DirectDraw �f�o�C�X�̃C���f�b�N�X��ݒ肷��
extern	int			SetAeroDisableFlag(								int Flag ) ;									// Vista,7 �� Windows Aero �𖳌��ɂ��邩�ǂ�����ݒ肷��( TRUE:�����ɂ���( �f�t�H���g )  FALSE:�L���ɂ��� )( DxLib_Init �̑O�ɌĂԕK�v������܂� )
extern	int			SetUseDirect3D9Ex(								int Flag ) ;									// Vista�ȍ~�̊��� Direct3D9Ex ��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����( �f�t�H���g )  FALSE:�g�p���Ȃ� )( DxLib_Init �̑O�ɌĂԕK�v������܂� )
extern	int			SetUseDirect3D11(								int Flag ) ;									// Direct3D11 ��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����  FALSE:�g�p���Ȃ� )
extern	int			SetUseDirect3D11MinFeatureLevel(				int Level /* DX_DIRECT3D_11_FEATURE_LEVEL_10_0 �Ȃ� */ ) ;		// Direct3D11 �Ŏg�p����Œ�@�\���x����w�肷��֐��ł��A���ADX_DIRECT3D_11_FEATURE_LEVEL_11_0 ���Ⴂ�@�\���x���ł̐���ȓ���͕ۏ؂��܂���( �f�t�H���g�� DX_DIRECT3D_11_FEATURE_LEVEL_11_0 )
extern	int			SetUseDirect3D11WARPDriver(						int Flag ) ;									// D3D_DRIVER_TYPE_WARP �^�C�v�� Direct3D 11 �h���C�o��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����  FALSE:�g�p���Ȃ�( �f�t�H���g ) )
extern	int			SetUseDirect3DVersion(							int Version /* DX_DIRECT3D_9 �Ȃ� */ ) ;		// �g�p���� Direct3D �̃o�[�W������ݒ肷��ADxLib_Init �Ăяo���̑O�ł̂ݎg�p�\�@
extern	int			GetUseDirect3DVersion(							void ) ;										// �g�p���Ă��� Direct3D �̃o�[�W������擾����( DX_DIRECT3D_9 �Ȃ� )
extern	int			GetUseDirect3D11FeatureLevel(					void ) ;										// �g�p���Ă��� Direct3D11 �� FeatureLevel ( DX_DIRECT3D_11_FEATURE_LEVEL_9_1 �� )��擾����( �߂�l�@-1�F�G���[�@-1�ȊO�FFeature Level )
extern	int			SetUseDirect3D11AdapterIndex(					int Index ) ;									// �g�p����O���t�B�b�N�X�f�o�C�X�̃A�_�v�^�[�̃C���f�b�N�X��ݒ肷��
extern	int			SetUseDirectDrawFlag(							int Flag ) ;									// ( �����ʂ�SetUseSoftwareRenderModeFlag ��g�p���ĉ����� )DirectDraw��g�p���邩�ǂ�����ݒ肷��
extern	int			SetUseGDIFlag(									int Flag ) ;									// GDI�`���g�p���邩�ǂ�����ݒ肷��
extern	int			GetUseGDIFlag(									void ) ;										// GDI�`���g�p���邩�ǂ�����擾����
extern	int			SetDDrawUseGuid(								const GUID *Guid ) ;							// DirectDraw���g�p����GUID��ݒ肷��
extern	const void*	GetUseDDrawObj(									void ) ;										// ���ݎg�p���Ă���DirectDraw�I�u�W�F�N�g�̃A�h���X��擾����( �߂�l�� IDirectDraw7 * �ɃL���X�g���ĉ����� )
extern	const GUID*	GetDirectDrawDeviceGUID(						int Number ) ;									// �L���� DirectDraw �f�o�C�X�� GUID ��擾����
extern	int			GetDirectDrawDeviceDescription(					int Number, char *StringBuffer ) ;				// �L���� DirectDraw �f�o�C�X�̖��O��擾����
extern	int			GetDirectDrawDeviceNum(							void ) ;										// �L���� DirectDraw �f�o�C�X�̐���擾����
extern	const void*	GetUseDirect3DDevice9(							void ) ;										// �g�p����Direct3DDevice9�I�u�W�F�N�g��擾����( �߂�l�� IDirect3DDevice9 * �ɃL���X�g���ĉ����� )
extern	const void*	GetUseDirect3D9BackBufferSurface(				void ) ;										// �g�p���̃o�b�N�o�b�t�@��Direct3DSurface9�I�u�W�F�N�g��擾����( �߂�l�� D_IDirect3DSurface9 * �ɃL���X�g���Ă������� )
extern	const void*	GetUseDirect3D11Device(							void ) ;										// �g�p����ID3D11Device�I�u�W�F�N�g��擾����( �߂�l�� ID3D11Device * �ɃL���X�g���ĉ����� )
extern	const void*	GetUseDirect3D11DeviceContext(					void ) ;										// �g�p����ID3D11DeviceContext�I�u�W�F�N�g��擾����( �߂�l�� ID3D11DeviceContext * �ɃL���X�g���ĉ����� )
extern	const void*	GetUseDirect3D11BackBufferTexture2D(			void ) ;										// �g�p���̃o�b�N�o�b�t�@��ID3D11Texture2D�I�u�W�F�N�g��擾����( �߂�l�� ID3D11Texture2D * �ɃL���X�g���Ă������� )
extern	const void*	GetUseDirect3D11BackBufferRenderTargetView(		void ) ;										// �g�p���̃o�b�N�o�b�t�@��ID3D11RenderTargetView�I�u�W�F�N�g��擾����( �߂�l�� ID3D11RenderTargetView * �ɃL���X�g���Ă������� )
extern	const void*	GetUseDirect3D11DepthStencilTexture2D(			void ) ;										// �g�p���̐[�x�X�e���V���o�b�t�@��ID3D11Texture2D�I�u�W�F�N�g��擾����( �߂�l�� ID3D11Texture2D * �ɃL���X�g���Ă������� )
extern	int			SetDrawScreen_ID3D11RenderTargetView(			const void *pID3D11RenderTargetView, const void *pID3D11DepthStencilView = NULL ) ;		// �w��� ID3D11RenderTargetView ��`��Ώۂɂ���( pID3D11DepthStencilView �� NULL �̏ꍇ�̓f�t�H���g�̐[�x�X�e���V���o�b�t�@��g�p���� )
extern	int			RefreshDxLibDirect3DSetting(					void ) ;										// �c�w���C�u�������s����Direct3D�̐ݒ��ēx�s��( ����p�r )

#ifndef DX_NON_MEDIA_FOUNDATION
extern	int			SetUseMediaFoundationFlag(						int Flag ) ;									// Media Foundation ��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����( �f�t�H���g )  FALSE:�g�p���Ȃ� )
#endif // DX_NON_MEDIA_FOUNDATION

// �F���擾�p�֐�
extern	int			ColorKaiseki(				const void *PixelData, COLORDATA* ColorData ) ;																				// �F�r�b�g�����










// DxMask.cpp �֐��v���g�^�C�v�錾
#ifndef DX_NON_MASK

extern	int			BmpBltToMask(					HBITMAP Bmp, int BmpPointX, int BmpPointY, int MaskHandle ) ;									// �}�X�N�n���h���ɂa�l�o�f�[�^��]������

#endif // DX_NON_MASK

#endif // DX_NOTUSE_DRAWFUNCTION









// DxFont.cpp �֐��v���g�^�C�v�錾

#ifndef DX_NON_FONT

extern	HANDLE		AddFontFile(					const TCHAR *FontFilePath                            ) ;										// �w��̃t�H���g�t�@�C����V�X�e���ɒǉ�����( �߂�l  NULL:���s  NULL�ȊO:�t�H���g�n���h��( WindowsOS �̂�̂Ȃ̂ŁA�c�w���C�u�����̃t�H���g�n���h���Ƃ͕ʕ��ł� ) )
extern	HANDLE		AddFontFileWithStrLen(			const TCHAR *FontFilePath, size_t FontFilePathLength ) ;										// �w��̃t�H���g�t�@�C����V�X�e���ɒǉ�����( �߂�l  NULL:���s  NULL�ȊO:�t�H���g�n���h��( WindowsOS �̂�̂Ȃ̂ŁA�c�w���C�u�����̃t�H���g�n���h���Ƃ͕ʕ��ł� ) )
extern	HANDLE		AddFontFileFromMem(				const void *FontFileImage, int FontFileImageSize ) ;											// �w��̃������A�h���X�ɓW�J�����t�H���g�t�@�C���C���[�W��V�X�e���ɒǉ�����( �߂�l  NULL:���s  NULL�ȊO:�t�H���g�n���h��( WindowsOS �̂�̂Ȃ̂ŁA�c�w���C�u�����̃t�H���g�n���h���Ƃ͕ʕ��ł� ) )
extern	int			RemoveFontFile(					HANDLE FontHandle ) ;																			// �w��̃t�H���g�n���h����V�X�e������폜����( ������ AddFontFile �� AddFontFileFromMem �̖߂�l )

#ifndef DX_NON_SAVEFUNCTION

extern	int			CreateFontDataFile(				const TCHAR *SaveFilePath,                            const TCHAR *FontName,                        int Size, int BitDepth /* DX_FONTIMAGE_BIT_1�� */ , int Thick, int Italic = FALSE , int CharSet = -1 , const TCHAR *SaveCharaList = NULL                                  ) ;				// �t�H���g�f�[�^�t�@�C����쐬����
extern	int			CreateFontDataFileWithStrLen(	const TCHAR *SaveFilePath, size_t SaveFilePathLength, const TCHAR *FontName, size_t FontNameLength, int Size, int BitDepth /* DX_FONTIMAGE_BIT_1�� */ , int Thick, int Italic = FALSE , int CharSet = -1 , const TCHAR *SaveCharaList = NULL , size_t SaveCharaListLength = 0 ) ;				// �t�H���g�f�[�^�t�@�C����쐬����

#endif // DX_NON_SAVEFUNCTION
#endif // DX_NON_FONT









// ��{�C���[�W�f�[�^�̃��[�h�{�c�h�a�֌W
extern	HBITMAP		CreateDIBGraph(								const TCHAR *FileName,                                                                                                                                                               int ReverseFlag,          COLORDATA *SrcColor ) ;					// �摜�t�@�C������c�h�a�f�[�^��쐬����
extern	HBITMAP		CreateDIBGraphWithStrLen(					const TCHAR *FileName, size_t FileNameLength,                                                                                                                                        int ReverseFlag,          COLORDATA *SrcColor ) ;					// �摜�t�@�C������c�h�a�f�[�^��쐬����
extern	HBITMAP		CreateDIBGraphToMem(						const BITMAPINFO *BmpInfo, const void *GraphData,                                                                                                                                    int ReverseFlag,          COLORDATA *SrcColor ) ;					// �a�l�o�f�[�^����c�h�a�f�[�^�N��쐬����
extern	int			CreateDIBGraph_plus_Alpha(					const TCHAR *FileName,                        HBITMAP *RGBBmp, HBITMAP *AlphaBmp,                                                                                                    int ReverseFlag = FALSE , COLORDATA *SrcColor = NULL ) ;			// �摜�t�@�C������c�h�a�f�[�^�ƃ}�X�N�p�c�h�a�f�[�^��쐬����
extern	int			CreateDIBGraph_plus_AlphaWithStrLen(		const TCHAR *FileName, size_t FileNameLength, HBITMAP *RGBBmp, HBITMAP *AlphaBmp,                                                                                                    int ReverseFlag = FALSE , COLORDATA *SrcColor = NULL ) ;			// �摜�t�@�C������c�h�a�f�[�^�ƃ}�X�N�p�c�h�a�f�[�^��쐬����
extern	HBITMAP		CreateDIBGraphVer2(							const TCHAR *FileName,                        const void *MemImage, int MemImageSize,                                             int ImageType,                                     int ReverseFlag,          COLORDATA *SrcColor ) ;					// �摜�t�@�C���Ⴕ���̓�������ɓW�J���ꂽ�摜�t�@�C���C���[�W����c�h�a�f�[�^��쐬����
extern	HBITMAP		CreateDIBGraphVer2WithStrLen(				const TCHAR *FileName, size_t FileNameLength, const void *MemImage, int MemImageSize,                                             int ImageType,                                     int ReverseFlag,          COLORDATA *SrcColor ) ;					// �摜�t�@�C���Ⴕ���̓�������ɓW�J���ꂽ�摜�t�@�C���C���[�W����c�h�a�f�[�^��쐬����
extern	int			CreateDIBGraphVer2_plus_Alpha(				const TCHAR *FileName,                        const void *MemImage, int MemImageSize, const void *AlphaImage, int AlphaImageSize, int ImageType, HBITMAP *RGBBmp, HBITMAP *AlphaBmp, int ReverseFlag,          COLORDATA *SrcColor ) ;					// �摜�t�@�C���Ⴕ���̓�������ɓW�J���ꂽ�摜�t�@�C���C���[�W����c�h�a�f�[�^�ƃ}�X�N�p�c�h�a�f�[�^��쐬����
extern	int			CreateDIBGraphVer2_plus_AlphaWithStrLen(	const TCHAR *FileName, size_t FileNameLength, const void *MemImage, int MemImageSize, const void *AlphaImage, int AlphaImageSize, int ImageType, HBITMAP *RGBBmp, HBITMAP *AlphaBmp, int ReverseFlag,          COLORDATA *SrcColor ) ;					// �摜�t�@�C���Ⴕ���̓�������ɓW�J���ꂽ�摜�t�@�C���C���[�W����c�h�a�f�[�^�ƃ}�X�N�p�c�h�a�f�[�^��쐬����
extern	int			ConvBitmapToGraphImage(						const BITMAPINFO *BmpInfo, void *GraphData, BASEIMAGE *GraphImage, int CopyFlag ) ;																																			// �a�l�o�f�[�^�����{�C���[�W�f�[�^��\�z����( Ret 0:����I��  1:�R�s�[��s����  -1:�G���[ )
extern	int			ConvGraphImageToBitmap(						const BASEIMAGE *GraphImage, BITMAPINFO *BmpInfo, void **GraphData, int CopyFlag, int FullColorConv = TRUE ) ;																												// ��{�C���[�W�f�[�^��a�l�o�f�[�^�ɕϊ�����GraphImage �� �a�l�o �ɕϊ�����(�A���t�@�f�[�^�͂����Ă���������)( �߂�l�@0:����I��  1:�R�s�[��s����  -1:�G���[ )

// ��{�C���[�W�f�[�^�\���̊֌W
extern	int			UpdateLayerdWindowForBaseImage(                       const BASEIMAGE *BaseImage ) ;																										// ��{�C���[�W�f�[�^��g�p���� UpdateLayerdWindow ��s��
extern	int			UpdateLayerdWindowForBaseImageRect(                   const BASEIMAGE *BaseImage, int x1, int y1, int x2, int y2 ) ;																		// ��{�C���[�W�f�[�^�̎w��͈̔͂�g�p���� UpdateLayerdWindow ��s��
extern	int			UpdateLayerdWindowForPremultipliedAlphaBaseImage(     const BASEIMAGE *BaseImage ) ;																										// ��Z�ς݃A���t�@�̊�{�C���[�W�f�[�^��g�p���� UpdateLayerdWindow ��s��
extern	int			UpdateLayerdWindowForPremultipliedAlphaBaseImageRect( const BASEIMAGE *BaseImage, int x1, int y1, int x2, int y2 ) ;																		// ��Z�ς݃A���t�@�̊�{�C���[�W�f�[�^�̎w��͈̔͂�g�p���� UpdateLayerdWindow ��s��

// �f�X�N�g�b�v�L���v�`��
extern	int			GetDesktopScreenBaseImage( int x1, int y1, int x2, int y2, BASEIMAGE *BaseImage, int DestX, int DestY ) ;						// �f�X�N�g�b�v�̎w��̗̈���{�C���[�W�f�[�^�ɓ]������










// DxSoftImage.cpp�֐��v���g�^�C�v�錾
#ifndef DX_NON_SOFTIMAGE

extern	int			UpdateLayerdWindowForSoftImage(                       int SIHandle ) ;												// �\�t�g�E�G�A�C���[�W�n���h����g�p���� UpdateLayerdWindow ��s��
extern	int			UpdateLayerdWindowForSoftImageRect(                   int SIHandle, int x1, int y1, int x2, int y2 ) ;				// �\�t�g�E�G�A�C���[�W�n���h���̎w��͈̔͂�g�p���� UpdateLayerdWindow ��s��
extern	int			UpdateLayerdWindowForPremultipliedAlphaSoftImage(     int SIHandle ) ;												// ��Z�ς݃A���t�@�̃\�t�g�E�G�A�C���[�W�n���h����g�p���� UpdateLayerdWindow ��s��
extern	int			UpdateLayerdWindowForPremultipliedAlphaSoftImageRect( int SIHandle, int x1, int y1, int x2, int y2 ) ;				// ��Z�ς݃A���t�@�̃\�t�g�E�G�A�C���[�W�n���h���̎w��͈̔͂�g�p���� UpdateLayerdWindow ��s��

// �f�X�N�g�b�v�L���v�`��
extern	int			GetDesktopScreenSoftImage( int x1, int y1, int x2, int y2, int SIHandle,         int DestX, int DestY ) ;						// �f�X�N�g�b�v�̎w��̗̈��\�t�g�E�G�A�C���[�W�n���h���ɓ]������

#endif // DX_NON_SOFTIMAGE










// DxSound.cpp�֐��v���g�^�C�v�錾
#ifndef DX_NON_SOUND

// �T�E���h�f�[�^�Ǘ��n�֐�
extern	int			LoadSoundMemByResource(              const TCHAR *ResourceName,                            const TCHAR *ResourceType,                            int BufferNum = 1 ) ;				// �T�E���h���\�[�X����T�E���h�n���h����쐬����
extern	int			LoadSoundMemByResourceWithStrLen(    const TCHAR *ResourceName, size_t ResourceNameLength, const TCHAR *ResourceType, size_t ResourceTypeLength, int BufferNum = 1 ) ;				// �T�E���h���\�[�X����T�E���h�n���h����쐬����

// �ݒ�֌W�֐�
extern	int			SetUseSoftwareMixingSoundFlag(       int Flag ) ;																																	// �T�E���h�̏�����\�t�g�E�G�A�ōs�����ǂ�����ݒ肷��( TRUE:�\�t�g�E�G�A  FALSE:�n�[�h�E�G�A( �f�t�H���g ) )
extern	int			SetEnableXAudioFlag(                 int Flag ) ;																																	// �T�E���h�̍Đ���XAudio��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����  FALSE:�g�p���Ȃ�( �f�t�H���g ) )
extern	int			SetEnableWASAPIFlag(                 int Flag, int IsExclusive = TRUE , int DevicePeriod = -1 , int SamplePerSec = 44100 ) ;														// �T�E���h�̍Đ���WASAPI��g�p���邩�ǂ�����ݒ肷��( Flag  TRUE:�g�p����  FALSE:�g�p���Ȃ�( �f�t�H���g ), IsExclusive  TRUE:�r�����[�h��g�p����  FALSE:�r�����[�h��g�p���Ȃ�, DevicePeriod �Đ��x�����ԁA100�i�m�b�P��( 100000 �� 10�~���b )�A-1�Ńf�t�H���g�l, SamplePerSec �T���v�����O���[�g )
#ifndef DX_NON_ASIO
extern	int			SetEnableASIOFlag(                   int Flag, int BufferSize = -1 , int SamplePerSec = 44100 ) ;																					// �T�E���h�̍Đ���ASIO��g�p���邩�ǂ�����ݒ肷��( Flag  TRUE:�g�p����  FALSE:�g�p���Ȃ�( �f�t�H���g ), BufferSize �Đ��o�b�t�@�̃T�C�Y�A�������قǒx�������Ȃ��Ȃ�܂����A�������Ԃɍ��킸�Ƀu�c�u�c�m�C�Y����������\��������Ȃ�܂�( -1 �Ńf�t�H���g�l ), SamplePerSec �T���v�����O���[�g )
#endif // DX_NON_ASIO

// ���擾�n�֐�
extern	const void*	GetDSoundObj(                        void ) ;	/* �߂�l�� IDirectSound * �ɃL���X�g���ĉ����� */																					// �c�w���C�u�������g�p���Ă��� DirectSound �I�u�W�F�N�g��擾����

// �l�h�c�h����֐�
extern	int			LoadMusicMemByResource(				const TCHAR *ResourceName,                            const TCHAR *ResourceType                            ) ;									// ���\�[�X��̂l�h�c�h�t�@�C������l�h�c�h�n���h����쐬����
extern	int			LoadMusicMemByResourceWithStrLen(	const TCHAR *ResourceName, size_t ResourceNameLength, const TCHAR *ResourceType, size_t ResourceTypeLength ) ;									// ���\�[�X��̂l�h�c�h�t�@�C������l�h�c�h�n���h����쐬����
extern	int			PlayMusicByResource(				const TCHAR *ResourceName,                            const TCHAR *ResourceType,                            int PlayType ) ;	// ���\�[�X����l�h�c�h�t�@�C����ǂݍ���ŉ��t����
extern	int			PlayMusicByResourceWithStrLen(		const TCHAR *ResourceName, size_t ResourceNameLength, const TCHAR *ResourceType, size_t ResourceTypeLength, int PlayType ) ;	// ���\�[�X����l�h�c�h�t�@�C����ǂݍ���ŉ��t����

#endif // DX_NON_SOUND









#undef DX_FUNCTION_START
#define DX_FUNCTION_END
#undef DX_FUNCTION_END

#ifndef DX_NON_NAMESPACE

}

#endif // DX_NON_NAMESPACE

#endif // DX_FUNCTIONWIN_H

