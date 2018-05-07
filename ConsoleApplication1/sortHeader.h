#ifndef SORTHEADER_H_
#define SORTHEADER_H_

#include <iostream>
//
class CSortArray
{
public:
	CSortArray();
	~CSortArray();

	/*
	*@Brief: bubble sort, direction: ascending
	*input-param : float* -- arr:	float������׵�ַ/ָ��
	*input-param : const int -- arrLength: ����ĳ���
	*output-param : float * -- ָ��
	*/
	float * bubbleSort(float *arr, const int arrLength );

	/*
	*@Brief: selection sort, direction: ascending
	*input-param : float* -- arr:	float������׵�ַ/ָ��
	*input-param : const int -- arrLength: ����ĳ���
	*output-param : float * -- ָ�� 
	*/
	float * selectionSort(float *arr, const int arrLength);

	/*
	*@Brief: insertionSort sort, direction: ascending
	*/
	float* insertionSort(float* arr, const int arrLength);

	/*@Brief: insertionSort-------shell sort
	
	*/
	float* shellSort(float* arr, const int arrLength);


};






#endif // !SORTHEADER_H_

