/**
@file main.cpp
*/
#pragma once
#include "sort.hpp"
#include "Float.hpp"
#include <vector>
#include <time.h>
#include <windows.h>


int main() /// ���� �������� �������
{
	Float arr[10]; /// ������� ������ ����� ��� �����
	srand(time(NULL));
	for(int itr = 0; itr < 10; itr++)
	{
		arr[itr] = rand()%200 -100; /// �������� ��� ���������� �������
	}
	sort(arr, 0 , 10, Float::swap); /// �������� ������ � ������� sort � �������� ��� ����������


	system("pause"); /// ��������� �������
	return 0; /// �������� ���������� ���������
}
