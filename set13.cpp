/*#include<iostream>
#include<cstdlib>//to generate random numbers
#include<ctime>//to not generate the same results

using namespace std;

int get(int m, int d,int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 != 0)//if it a leep year 
	{
		if (m == 2)// the second month=29days
		{
			d = 29;
			return d;
		}
		
	}
	//if it not a leep year (a normal year)

		if (m == 1 || m == 3 || m == 5 || m == 8 || m == 10 || m == 12)
		{
			d = 31;
			return d;
		}

		if (m == 4 || m == 6 || m == 7 || m == 9 || m == 11)
		{
			d = 30;
			return d;
		}
		if (m == 2)
		{
			d = 28;
			return d;
		}

}
int main()
{
	int y;
	cout << "enter the number of year: ";
	cin >> y;

	int m;
	cout << "enter the month: ";
	cin >> m;

	int d=0;

	if (y >= 0)
	{
		get(y,m,d);
	}

	else
	{
		cout << "enter a positive number: ";

	}
}*/