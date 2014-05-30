/**
@file float.hpp
*/
#include <iostream>
using namespace std; /// Используем пространство имен


class Float /// Создадим класс
{
public:
	Float();
	Float(float value);
	Float(const Float& f);

bool      operator>(Float& a);
Float&    operator=(Float& a);
Float&    operator=(int a);
Float&    operator=(float a);
bool swap(Float& a, Float& b);
private:
	float Number; /// Переменная номер

};