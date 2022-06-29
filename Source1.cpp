#pragma once
#define _CTR_SECURE_NO_WARNINGS
#include <Windows.h>
#include <time.h>
#include <iostream>
#define MAX 10
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int arr[MAX], i, max = 0, maxi;
	for (i = 0; i < MAX; ++i)
	{
		arr[i] = rand() % 100;
	}
	for (i = 0; i < MAX; ++i)
	{
		cout << " " << arr[i] << " ";
	}
	for (i = 0; i < MAX; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxi = i;
		}
	}
	cout << "" << endl;
	cout << "Номер максимального: " << maxi << endl;
	swap(arr[maxi], arr[5]);
	for (i = 0; i < MAX; ++i)
	{
		cout << " " << arr[i] << " ";
	}
}