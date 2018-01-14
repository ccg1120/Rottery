#pragma once
#include <iostream>
#include "stdafx.h"
#include "Printer.h"


using namespace std;

class Paper
{
public:
	Paper();
	~Paper();
	void Paper::SetNumbers(short *pArray);
	short* Paper::GetNumbers();
	short Paper::GetNumberIndex(int num);
	void Paper::PrintPaper();
	


private:
	short *numbers;
};

