/*#include<iostream>
using namespace std;

int read(int min, int max)
{
	int n;
	cout << "enter a number in range: "<<"["<<min<<"-"<<max<<"]";
	cin >> n;

	do
	{
		if (n >= min && n <= max)
		{
			return n;
			cout << "it is a valid number" << endl;
		}

		else
		{
			cout << "invalid number try again: ";
			cin >> n;
		}

	} while (n >= min && n <= max);

}
int main()
{
	int num;
	cout << "write a number number: ";
	cin >> num;

	int max;
	cout << "write the maximum number: ";
	cin >> max;

	int min;
	cout << "write the minimum number: ";
	cin >> min;

	num=read(min,max);
	cout << num << endl;

}*/