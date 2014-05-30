/**
@file main.cpp
*/
#pragma once
#include "sort.hpp"
#include "Float.hpp"
#include <vector>
#include <time.h>
#include <windows.h>


int main() /// Наша основная функция
{
	Float arr[10]; /// Создаем массив через наш класс
	srand(time(NULL));
	for(int itr = 0; itr < 10; itr++)
	{
		arr[itr] = rand()%200 -100; /// Забиваем его рандомными числами
	}
	sort(arr, 0 , 10, Float::swap); /// Посылаем массив в функцию sort и передаем его парраметры


	system("pause"); /// Остановка системы
	return 0; /// Успешное завершение программы
}
