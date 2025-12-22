/*#include<iostream>
using namespace std;
void ShowMenu()
{
	cout << "******MENU******" << endl;
	cout << "1. See the balance" << endl;
	cout << "2. Desposit" << endl;
	cout << "3. Withdrawal" << endl;
	cout << "4. Exit" << endl;
}
int main()
{
	int choice, balance =100,a,b;
	while (choice != 4)
	{
		cin >> choice;
		ShowMenu();
		switch (choice)
		{
		case1:
			cout << balance << endl;
			break;
		case2:
			cout << "please enter the desposit" << endl;
			cin >> a;
			balance += a;
			cout << balance<< endl;
			break;
		case3:
			cout << "please enter the withdrawal" << endl;
			cin >> b;
			balance -= b;
			cout <<balance<< endl;
			if (balance < b)
			{
				cout << "there is no enough money" << endl;
				break;

			}
		default:
			cout << "enter numbet between 1 and 4" << endl;
			break;
		}
	}
}*/