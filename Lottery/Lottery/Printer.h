#pragma once

#include <iostream>
#include <random>
#include "stdafx.h"
#include "Paper.h"

#define MAXNUM 45
#define JUDGENUM 6

using namespace std;

class Printer
{
public:
	
	int* Printer::tt();
	Printer();
	~Printer();

	Paper* BuyLottery()
	{
		Paper *returnPapaer = new Paper();

		CreateRandom();
		returnPapaer->SetNumbers(temp);

		return returnPapaer;
	}

private:
	
	void CreateRandom();
	bool CheckNumber(int count, short num);

	short temp[JUDGENUM];
	short tempNum;
};



Printer::Printer()
{
	tempNum = 0;
	
}

Printer::~Printer()
{
		
}

int* Printer::tt()
{
	return 0;
}

///로또 숫자 랜덤 생성 함수 
void Printer::CreateRandom()
{
	random_device rendomdeviece;
	mt19937_64 randomengine(rendomdeviece());
	uniform_int_distribution<short> RandomMaker(1, MAXNUM);

	for (int index = 0; index < JUDGENUM; index++)
	{
		tempNum = (short)RandomMaker(randomengine);
		if (CheckNumber(index, tempNum))
		{
			temp[index] = tempNum;
		}
	}
}

///중복숫자 확인 함수 
bool Printer::CheckNumber(int count, short num)
{
	for (size_t index = 0; index < count; index++)
	{
		if (temp[index] == num)
		{
			return false;
		}
	}
	return true;
}