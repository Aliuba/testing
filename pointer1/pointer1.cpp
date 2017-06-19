// pointer1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	double x;
	int y,k;
	int *p;
	x = 123.23;
	p = (int *)&x;
	y = *p;
	k = x;
	cout << p<<"\n";
	cout << y<<"    ";
	cout << k;
	
	system("pause");
    return 0;
}

