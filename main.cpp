#include "include.h"

int main()
{
	Init();   //�ʱ�ȭ = while �� ���� ���� �� �ѹ���

	while (true)
	{
		Update();  //����, �Է���ġ ó�� (�����ڰ� 90% �̻� �����ϴ� �κ�)
		Draw();    //������

		EngineSync(30);    //�ʴ� 30�� �ݺ��� �� �ֵ��� ����(30������ ����)
	}

	Release();   //����, �޸� �����ֱ�

	return 0;
}