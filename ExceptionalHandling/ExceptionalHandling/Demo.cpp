#include <iostream>

#include "Demo.h"

using namespace std;
Demo::Demo( int num[])
{
	for (int i = 0; i < 5;i++)
	{
		integerArray[i] = num[i];
	}
}
void Demo::DisplayInfo(int num[])
{
	for (int i = 0;i <5;i++)
	{
		std::cout<< i << " : " << num[i];
	}
}

int Demo::sumOfArray(int num[])
{
	int sum = 0;
	for (int i = 0;i < 5;i++)
	{
		sum += num[i];
	}
	return sum;
}
