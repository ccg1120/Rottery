
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

void Paper::SetNumbers(short *pArray)
{
	for (size_t index = 0; index < JUDGENUM; index++)
	{
		numbers[index] = pArray[index];
	}
	//PrintPaper();
}
///로또 리스트 전체 출력
void Paper::PrintPaper()
{
	cout << "Rottery Numbers ";
	for (int index = 0; index < JUDGENUM; index++)
	{
		cout << numbers[index] << " ";
	}
}

/*
전체 배열 반환
*/
short* Paper::GetNumbers()
{
	return numbers;
}

/// 인덱스를 통한 배열 출력
short Paper::GetNumberIndex(int num)
{
	return numbers[num];
}