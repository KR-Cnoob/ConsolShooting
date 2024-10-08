#include "include.h"

int main()
{
	Init();   //초기화 = while 문 들어가기 전에 딱 한번만

	while (true)
	{
		Update();  //연산, 입력장치 처리 (개발자가 90% 이상 관여하는 부분)
		Draw();    //랜더링

		EngineSync(30);    //초당 30번 반복할 수 있도록 고정(30프레임 고정)
	}

	Release();   //해제, 메모리 돌려주기

	return 0;
}