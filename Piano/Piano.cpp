#include<iostream>
#include<conio.h>
#include<graphics.h>
#include"Piano.h"
#include"Small dimple.h"
#include"Sky city.h"
#include"Happy birthday song.h"
#include"Twotiger.h"
using namespace std;

int main()
{
	initgraph(700,500
	);
	loadimage(NULL, "图片.jpeg");
	happypiano P1;
	Skycity P2;
	Smalldimple P3;
	Twotigers P4;
	char X;
	int A = 300;
	while (X = _getch())
	{
		switch (X)
		{
		case 'q':
			Beep(q, A);
			break;
		case 'w':
			Beep(w, A);
			break;
		case 'e':
			Beep(e, A);
			break;
		case 'r':
			Beep(r, A);
			break;
		case 't':
			Beep(t, A);
			break;
		case 'y':
			Beep(y, A);
			break;
		case 'u':
			Beep(u, A);
			break;
		case 'i':
			Beep(i, A);
			break;
		case 'o':
			Beep(o, A);
			break;
		case 'p':
			Beep(p, A);
			break;
		case 'a':
			Beep(a, A);
			break;
		case 's':
			Beep(s, A);
			break;
		case 'd':
			Beep(d, A);
			break;
		case 'f':
			Beep(f, A);
			break;
		case 'g':
			Beep(g, A);
			break;
		case 'h':
			Beep(h, A);
			break;
		case 'j':
			Beep(j, A);
			break;
		case 'k':
			Beep(k, A);
			break;
		case 'l':
			Beep(l, A);
			break;
		case 'z':
			Beep(z, A);
			break;
		case 'x':
			Beep(x, A);
			break;
		case 'c':
			Beep(c, A);
			break;
		case 'v':
			Beep(v, A);
			break;
		case 'b':
			Beep(b, A);
			break;
		case 'n':
			Beep(n, A);
			break;
		case 'm':
			Beep(m, A);
			break;
		}
		if (X == '0')    //退出弹奏
		{
			cout << "Bye bye!" << endl;
			break;
		}
		if (X == '1')   //播放生日快乐歌
		{
			P1.Happy();
		}
		if (X == '2')  //播放天空之城
		{
			P2.skycity();
		}
		if (X == '3')  //播放小酒窝
		{
			P3.smalldimple();
		}
		if (X == '4')  //播放两只老虎
		{
			P4.twotigers();
		}
	}
	system("pause");
}



















