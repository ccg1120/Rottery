
#include "stdafx.h"
#include "Paper.h"


Paper::Paper()
{
	//6�ڸ� �迭 ����
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
///�ζ� ����Ʈ ��ü ���
void Paper::PrintPaper()
{
	cout << "Rottery Numbers ";
	for (int index = 0; index < JUDGENUM; index++)
	{
		cout << numbers[index] << " ";
	}
}

/*
��ü �迭 ��ȯ
*/
short* Paper::GetNumbers()
{
	return numbers;
}

/// �ε����� ���� �迭 ���
short Paper::GetNumberIndex(int num)
{
	return numbers[num];
}