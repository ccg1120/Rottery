// Lottery.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

//복권 자동 추첨 프로그램 
//
#include "stdafx.h"
#include <iostream>
#include <random>
#include "paper.h"

using namespace std;


int main()
{
	
	random_device rendomdeviece;
	mt19937_64 randomengine(rendomdeviece());
	uniform_int_distribution<short> RandomMaker(0,45);

	short *parry = new short[JUDGENUM];
	for (int index = 0; index < JUDGENUM; index++)
	{
		parry[index] = (short)RandomMaker(randomengine);
		cout << parry[index]<< " " ;
	}
	cout << endl;

	delete parry;

    return 0;
}

