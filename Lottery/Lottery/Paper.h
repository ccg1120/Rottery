#pragma once
#include <iostream>
#include "stdafx.h"
//#include <random>

#define MAXNUM 45
#define JUDGENUM 6

using namespace std;
class Paper
{
public:
	Paper();
	~Paper();
	void Paper::GetNumbers(short *pArray);
	void Paper::PrintPaper();
	void Paper::BuyPaper();


private:
	short *numbers;
	//random_device rendomdeviece;
	//mt19937_64 randomengine;
	//uniform_int_distribution<char> RandomMaker;

};

