// Sum of Natural NumberS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int SNN(int nn)
{
	int sum = 0;
	for (int i = 0; i < nn; i++)
		sum = sum + i;
	return sum;
}

int main()
{
	int n, sum = 0;

	cout << "Enter a postivie Integer ";

	cin >> n;
	for (int i = 1; i <= n; ++i) {
		sum = sum + i;
	}

	cout << "Sum is " << sum;
    return 0;
}

