
#include "Float.hpp"


	Float::Float() : Number(0)
	{	}
	Float::Float(float value) : Number(value)
	{    }
	Float::Float(const Float& f) : Number(f.Number)
	{    }

bool      Float::operator>(Float& a)
{
	return Number > a.Number;
}
Float&   Float:: operator=(Float& a)
{
	if(this == &a) return *this;

	Number = a.Number;
	return *this;

}
Float&    Float::operator=(int a)
{
	Number = (float)a;
}
Float&    Float::operator=(float a)
{
	Number = a;
}


bool Float::swap(Float& a, Float& b)
{
	float temp = a.Number;
	a = b;
	b.Number = temp;
	return true;
}