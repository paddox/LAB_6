/**
@file sort.cpp
*/
#include "sort.hpp"

template <class T>

void sort(T* Array, int first, int last, bool (*swap)(T&a, T&b)) /// Ñמחהאהטל סאלף פףםךצט‏ סמנעטנמגךט
{
    int i = first, j = last, middle = Array[(first + last) / 2]; /// Îבתÿגטל םומבץמהטלûו ןונולוםםûו הכÿ סמנעטנמגךט עמ וסעü ןונגûי ‎כולוםע ט עה
 
    do {
        while (Array[i] < middle) i++;
        while (Array[j] > middle) j--;
 
        if(i <= j) 
		{
            if (i < j) swap(Array[i], Array[j]);
            i++;
            j--;
        }
    } while (i <= j);
 
    if (i < last)
        qs(Array, i, last, swap);
    if (first < j)
        qs(Array, first, j, swap);

}