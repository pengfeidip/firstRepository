#include "sortHeader.h"

CSortArray::CSortArray()
{

}

CSortArray::~CSortArray()
{

}

/*@Brief: 交换排序-----冒泡排序
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
			if (*(arr + j) >= *(arr + j + 1))//把大的往后排
			{
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}

		}
	}

	return arr;

}


/*@Brief: 选择排序--简单选择排序
原理, 在未排序中的其中找最小的 放置到已排序的最终的最后一个
*/
float * CSortArray::selectionSort(float * arr, int arrLength)
{

	float minValue ;
	int indMinVal;

	for (int i = 0; i < arrLength; i++)
	{
		//确认 索引为i的元素

		minValue = *(arr + i);
		indMinVal = i;//初始状态最小值的索引

		//确认 i及其之后所有数字中的最小值, 记录最小值及其索引
		for (int j = i + 1;j < arrLength; j++)
		{
			//确认最小值及其的索引
			if (minValue >= *(arr + j))
			{
				minValue = *(arr + j);
				indMinVal= j;
			}

		}

		//将最小值与索引为i的交换
		*(arr + indMinVal) = *(arr + i);
		*(arr + i) = minValue;
	}
	return arr;
}

/*原理: 插入排序 --- 简单插入排序
把无序列表中的元素向有序列表中插; 要理解
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


/*@Brief: 插入排序-------希尔shell排序
 shell sort原理解释: http://bubkoo.com/2014/01/15/sort-algorithm/shell-sort/
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
			//根据gap确定每个sub-array中有多少个元素,并进行简单插入排序
			//例如 arr总长为10; 第一分组时, gap为10/2=5 则分为5组;  每组为2个元素, 每组分别进行插入排序.
			//第二次分组时, gap为 5/2 = 2  则分为2组, 每组为5个元素, 每组分别进行插入排序.
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
