#include "SZ.h"
void SZ::set(char n[], int r)
{
	strcpy_s(name, n);
	kd = r;
}
SZ::SZ(char n[], int r)
{
	strcpy_s(name, n);
	kd = r;
}
bool SZ::ifkd(int r)
{
	return r >= kd;
}
void SZ::print()
{
	cout << "name: " << name << endl << " klass - " << kd << endl << endl;
}
