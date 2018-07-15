#include <windows.h>
#include <stdio.h>

class Supermary
{
public:

	int supermary()
	{
		int M1[]= { 0,320,391,399,445,466,494, 523 }, I = 0; //定义曲谱中的 do rui mi fa sou la ci 不准确 自己靠感觉调的

		int S1[]= { 5,3,5,3,5,2,1 }; //我是一个粉刷匠 的曲谱 我就会这句。。。
		int T1[]= { 300,300,300,300,300,300,500 }; //这是每个音的发生时间， 可以自己定义 半拍多少时间 四分之一拍多少时间
		for (I = 0; I < 7; I++)
		{
			Beep(M1[S1[I]],T1[I]);
		}
		return 0;
	}
};
