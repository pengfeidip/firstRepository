#include "sortHeader.h"

CSortArray::CSortArray()
{

}

CSortArray::~CSortArray()
{

}

float * CSortArray::bubbleSort(float * arr, int arrLength)
{
	float temp;
	for (int i = 0; i < arrLength; i++)
	{
		for (int j = 0; j<arrLength - i - 1; j++)
		{
			temp = *(arr + j);
			if (*(arr + j) >= *(arr + j + 1))//�Ѵ��������
			{
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}

		}
	}

	return arr;

}

/*
ԭ��, ��δ�����е���������С�� ���õ�����������յ����һ��
*/
float * CSortArray::selectionSort(float * arr, int arrLength)
{

	float minValue ;
	int indMinVal;

	for (int i = 0; i < arrLength; i++)
	{
		//ȷ�� ����Ϊi��Ԫ��

		minValue = *(arr + i);
		indMinVal = i;//��ʼ״̬��Сֵ������

		//ȷ�� i����֮�����������е���Сֵ, ��¼��Сֵ��������
		for (int j = i + 1;j < arrLength; j++)
		{
			//ȷ����Сֵ���������
			if (minValue >= *(arr + j))
			{
				minValue = *(arr + j);
				indMinVal= j;
			}

		}

		//����Сֵ������Ϊi�Ľ���
		*(arr + indMinVal) = *(arr + i);
		*(arr + i) = minValue;
	}
	return arr;
}

/*ԭ��:
�������б��е�Ԫ���������б��в�; Ҫ���
*/
float* CSortArray::insertionSort(float * arr, int arrLength)
{
	int ind, preInd;
	float current;
	for (int i = 1; i < arrLength; i++)
	{
		preInd = i - 1;
		current = arr[i];
		while (preInd >= 0 && current < arr[preInd])
		{
			arr[preInd + 1] = arr[preInd];
			preInd--;
		}
		arr[preInd + 1] = current;
	}

	return arr;

}
