#include "ConsoleCore.h"
#include "EngineDebug.h"

void ConsoleCore::Init(int2 _ScreenSize)
{
	LeckCheck;

	Screen.CreateScreen(_ScreenSize.X, _ScreenSize.Y);
}

void ConsoleCore::Start()
{
	while (EngineUpdate)
	{
		Sleep(100);

		// Update
		{
			std::map<int, std::list<ConsoleObject*>>::iterator OrderStartIter = AllUpdateObject.begin();
			std::map<int, std::list<ConsoleObject*>>::iterator OrderEndIter = AllUpdateObject.end();

			for (; OrderStartIter != OrderEndIter; ++OrderStartIter)
			{
				std::list<ConsoleObject*>& ObjectList = OrderStartIter->second;

				std::list<ConsoleObject*>::iterator StartIter = ObjectList.begin();
				std::list<ConsoleObject*>::iterator EndIter = ObjectList.end();
				for (; StartIter != EndIter; ++StartIter)
				{
					ConsoleObject* Object = *StartIter;
					if (Object == nullptr)
					{
						MsgBoxAssert("������Ʈ�� nullptr �Դϴ�.");
					}

					Object->Update();
				}
			}
		} // End

		// ������
		{
			std::map<int, std::list<ConsoleObject*>>::iterator OrderStartIter = AllRenderObject.begin();
			std::map<int, std::list<ConsoleObject*>>::iterator OrderEndIter = AllRenderObject.end();

			for (; OrderStartIter != OrderEndIter; ++OrderStartIter)
			{
				std::list<ConsoleObject*>& ObjectList = OrderStartIter->second;

				std::list<ConsoleObject*>::iterator StartIter = ObjectList.begin();
				std::list<ConsoleObject*>::iterator EndIter = ObjectList.end();
				for (; StartIter != EndIter; ++StartIter)
				{
					ConsoleObject* Object = *StartIter;

					if (Object == nullptr)
					{
						MsgBoxAssert("������Ʈ�� nullptr �Դϴ�.");
					}
					Screen.SetChar(Object);
				}
			}
		}
		Screen.PrintScreen();
		// End

		// ������ //
		
		// ���� ������
		{
			// �����ϱ� Order ���.
			std::map<int, std::list<ConsoleObject*>>::iterator OrderStartIter = AllRenderObject.begin();
			std::map<int, std::list<ConsoleObject*>>::iterator OrderEndIter = AllRenderObject.end();
		
			for (; OrderStartIter != OrderEndIter; ++OrderStartIter)
			{
				std::list<ConsoleObject*>& ObjectList = OrderStartIter->second;

				std::list<ConsoleObject*>::iterator StartIter = ObjectList.begin();
				std::list<ConsoleObject*>::iterator EndIter = ObjectList.end();
				for (; StartIter != EndIter; )
				{
					ConsoleObject* Object = *StartIter;

					if (false == Object->IsPendingKill())
					{
						++StartIter;
						continue;
					}

					if (nullptr == Object)
					{
						MsgBoxAssert("������Ʈ�� nullptr�� ��찡 �����մϴ�.");
					}

					// ��带 �����.
					StartIter = ObjectList.erase(StartIter);
				}
			}
		} // end ���� ������

	} // end while
}

void ConsoleCore::EngineEnd()
{
	EngineUpdate = false;
}
