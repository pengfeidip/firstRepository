#include <iostream>
#include <opencv2\opencv.hpp>
#include <fstream>
#include "sortHeader.h"

using namespace std;
using namespace cv;

int main() {

	CSortArray sortArray;
	float a[] = { 1.1 ,3.2, 0.1, 9, 0.002, 3, 0.5 };
	for (int i = 0; i < 7;i++)
	{
		cout << a[i] << endl;
	}
	cout << "�����Ľ����: " << endl;
	float *result = sortArray.insertionSort(a, 7);
	for (int i = 0; i < 7;i++)
	{
		cout << result[i] << endl;
	}
	
#if 0
	//ȷ������ĳ��ȣ� ����ʼ������
	int arrLength;
	cout << "����������ĳ��� " ;
	cin >> arrLength;
	float *arr = new float[arrLength];

	float temp = 0;
	cout << "please enter all elements in the array" << endl;
	for(int i = 0; i<arrLength; i++)
	{ 
		cout << "�������" << i << "������: ";
		cin >> temp;
		*(arr+i) = temp;
	}

	//��ʾ�Ѿ����������
	cout << "�����������:" << endl;

	for( int i = 0; i<arrLength;i++)
	{ 
		cout << *(arr+i)<<"  ";
		
	}
	cout << endl;

	//����
	CSortArray sortArray;
	arr = sortArray.selectionSort(arr, arrLength);

	//���ð�������Ľ��
	cout << "������������(����):" << endl;
	for (int i = 0; i<arrLength; i++)
	{
		cout << *(arr+i) << "  ";

	}
	cout << endl;

	delete [] arr;
#endif 

	return 0;

}
