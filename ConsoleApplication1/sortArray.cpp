#include "sortHeader.h"

CSortArray::CSortArray()
{

}

CSortArray::~CSortArray()
{

}

/*@Brief: ��������-----ð������
* 
*/
float * CSortArray::bubbleSort(float * arr, int arrLength)
{
	float temp;
	for (int i = 0; i < arrLength; i++)
	{
		for (int j = 0; j < arrLength - i - 1; j++)
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


/*@Brief: ѡ������--��ѡ������
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

/*ԭ��: �������� --- �򵥲�������
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


/*@Brief: ��������-------ϣ��shell����
 shell sortԭ�����: http://bubkoo.com/2014/01/15/sort-algorithm/shell-sort/
*/
float* CSortArray::shellSort(float* arr, const int arrLength)
{


	float tempVar;
	float current;
	int preInd;
	int currentInd;

	for (int gap = arrLength / 2; gap >= 1;gap /= 2)
	{//ensure sub-array by gap, gap means number of sub-arrays
		
		std::cout << "gap is " << gap << std::endl;

		for (int ind = 0; ind  < gap; ind++)
		{
			//����gapȷ��ÿ��sub-array���ж��ٸ�Ԫ��,�����м򵥲�������
			//���� arr�ܳ�Ϊ10; ��һ����ʱ, gapΪ10/2=5 ���Ϊ5��;  ÿ��Ϊ2��Ԫ��, ÿ��ֱ���в�������.
			//�ڶ��η���ʱ, gapΪ 5/2 = 2  ���Ϊ2��, ÿ��Ϊ5��Ԫ��, ÿ��ֱ���в�������.
			for (int i = 1; i<=arrLength/gap-1;i++)
			{
				preInd = i - 1;
				current = arr[ind + gap * i];

				while (preInd >= 0 && current < arr[ind + gap*preInd])
				{
					arr[ind + gap*(preInd+1)] = arr[ind + gap*preInd];
					preInd--;
				}
				arr[ind + gap*(preInd+1)] = current;
			}
			
		}
		for (int i = 0; i < arrLength; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << "\n";
	}


	return arr;
}
