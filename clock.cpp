/*#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int h, min, sec;//first we need to define the hours , minutes & seconds
	cout << "Hours" << endl;
	cin >> h;

	cout << "Minute" << endl;
	cin >> min;

	cout << "Seconds" << endl;
	cin >> sec;

	while (1)
	{
		system("cls");//this function work to clear the screen every loop
		if (sec > 59)
		{
			min++;
			sec = 0;
		}
		if (min > 59)
		{
			h++;
			min = 0;
		}
		if (h > 23)
			h = 0;
		cout << h << ":" << min << ":" << sec << endl;
		sec++;
		// the changes are so much fast so weneed it to every 1second=1000 but to keep it accurate let it 900
		Sleep(900);

	}

}*/