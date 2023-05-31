#include<iostream>
#include"MyFunction.h"
using namespace std;

int Sum(int a, int b)
{
	return a + b;
}


int main()
{
	int a, b;
	cin >> a >> b;
	cout << Sum(a, b) << endl;

	int x =  Max(a, b);

	Print(x);

	return 0;
}
