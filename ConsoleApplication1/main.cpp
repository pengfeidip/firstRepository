#include <iostream>
#include <opencv2\opencv.hpp>
#include <fstream>
#include "sortHeader.h"

using namespace std;
using namespace cv;

int main() {

	CSortArray sortArray;
	float a[] = { 1.1 ,3.2, 0.1, 9, 0.002, 3, 0.5, 8, 20, 0.005 };
	int numele = 10;
	for (int i = 0; i < numele;i++)
	{
		cout << a[i] << endl;
	}
	cout << "排序后的结果是: " << endl;
	float *result = sortArray.shellSort(a, numele);
	for (int i = 0; i < numele;i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
#if 0
	//确认数组的长度， 并初始化数组
	int arrLength;
	cout << "请输入数组的长度 " ;
	cin >> arrLength;
	float *arr = new float[arrLength];

	float temp = 0;
	cout << "please enter all elements in the array" << endl;
	for(int i = 0; i<arrLength; i++)
	{ 
		cout << "请输入第" << i << "个参数: ";
		cin >> temp;
		*(arr+i) = temp;
	}

	//显示已经输入的数组
	cout << "输入的数组是:" << endl;

	for( int i = 0; i<arrLength;i++)
	{ 
		cout << *(arr+i)<<"  ";
		
	}
	cout << endl;

	//排序
	CSortArray sortArray;
	arr = sortArray.selectionSort(arr, arrLength);

	//输出冒泡排序后的结果
	cout << "排序后的数组是(升序):" << endl;
	for (int i = 0; i<arrLength; i++)
	{
		cout << *(arr+i) << "  ";

	}
	cout << endl;

	delete [] arr;
#endif 

	return 0;

}
