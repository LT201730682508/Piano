#include <windows.h>
#include <stdio.h>

class Supermary
{
public:

	int supermary()
	{
		int M1[]= { 0,320,391,399,445,466,494, 523 }, I = 0; //���������е� do rui mi fa sou la ci ��׼ȷ �Լ����о�����

		int S1[]= { 5,3,5,3,5,2,1 }; //����һ����ˢ�� ������ �Ҿͻ���䡣����
		int T1[]= { 300,300,300,300,300,300,500 }; //����ÿ�����ķ���ʱ�䣬 �����Լ����� ���Ķ���ʱ�� �ķ�֮һ�Ķ���ʱ��
		for (I = 0; I < 7; I++)
		{
			Beep(M1[S1[I]],T1[I]);
		}
		return 0;
	}
};
