#pragma once
#include <iostream>
using namespace std;
class SZ
{
	char name[64];
	int kd;
public:
	SZ()
	{
		name[0] = 0;
		kd = 7;
	}
	void set(char n[], int r);

	SZ(char n[], int r);

	bool ifkd(int r);

	void print();

};

