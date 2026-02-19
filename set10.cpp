/*#include<iostream>
#include<cstdlib>//to generate random numbers
#include<ctime>//to not generate the same results

using namespace std;

void print(int max, int min, int n)
{
	cout << "the results are: ";
	for (int i = 1; i <= n; i++)
	{
		int r = min + rand() % (max - min + 1) + min;
		cout << r<<" ";
	}
	cout << endl;
}

int main()
{
	srand(time(0));// everytime it gives different numbers

	int max;
	cout << "write the maximum number: ";
	cin >> max;

	int min;
	cout << "write the minimum number: ";
	cin >> min;
	
	int n;
	cout << "how many number to generate?: ";
	cin >> n;
	
	print(min, max, n);
	
}*/