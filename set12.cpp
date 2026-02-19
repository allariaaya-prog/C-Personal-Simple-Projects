/*#include<iostream>
#include<cstdlib>//to generate random numbers
#include<ctime>//to not generate the same results

using namespace std;

int get(int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 != 0)
	{
		return 366;
		cout << "is a leep year" << endl;
	}

	else
	{
		return 365;
	}
}

int main()
{
	int y;
	cout << "please enter the year: ";
	cin >> y;

	if (y >= 0)
	{
		get(y);
		cout << y;
	}

	else
	{
		cout << "please enter a positive number: ";
		cin >> y;
	}
}*/