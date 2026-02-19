/*#include<iostream>
#include<cstdlib>//to generate random numbers
#include<ctime>//to not generate the same results

using namespace std;

int leep(int y)
{
	if (y % 4== 0 && y % 100 != 0|| y % 400 != 0)
	{
		return true;
		cout << "is a leep year" << endl;
	}
	else
	{
		return false;
		cout << "is not a leep year" << endl;
	}
}
void print(int start, int end)
{
	for (int i = start; i < end; i++)
	{
		cout << i << "";
	}
}
int main()
{
	int y;
	cout << "please enter the year: ";
	cin >> y;

	if (y >= 0)
	{
		leep(y);
	}
	else
	{
		cout << "please enter a positive number: ";
		cin >> y;
	}

	//anathor related set

	int start, end;
	cout << "the starting year: ";
	cin >> start;

	cout << "the end year: ";
	cin >> end;

	print(start, end);
}*/