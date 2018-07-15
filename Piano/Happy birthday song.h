#include<iostream>
#include"Piano.h"

class happypiano
{
public:
	void Happy(void)
	{
		unsigned frequency[] = 
		{ g,g,h,g,587,q,
		g,g,h,g,587,q,
		g,g,t,e,q,f,h,
		689,689,q,587,q
		};

		unsigned duration[] = 
		{ 375,125,500,500,500,1000,
			375,125,500,500,500,1000,
			375,125,500,500,500,500,1000,
			375,125,500,500,500,1000
		};
		for (int Q = 0; Q < 25; Q++)
		{
			Beep(frequency[Q], duration[Q]);
		};
	};
};
