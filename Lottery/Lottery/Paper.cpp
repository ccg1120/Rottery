
#include "stdafx.h"
#include "Paper.h"


Paper::Paper()
{
	//6자리 배열 생성
	Paper::numbers = new short[JUDGENUM];
}

Paper::~Paper()
{
	delete(numbers);
}
void Paper::GetNumbers(short *pArray)
{
	*numbers = *pArray;
	PrintPaper();
}
void Paper::PrintPaper()
{
	cout << "Rottery Numbers ";
	for (int index = 0; index < JUDGENUM; index++)
	{
		cout << numbers[index] << " ";
	}
}
void Paper::BuyPaper()
{

}