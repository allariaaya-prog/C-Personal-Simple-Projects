#include<iostream>
using namespace std;
int main()
{
	int guesses = 5;
	int guess;
	int answer;

	srand(time(0));
	answer = rand() % 20;

	cout << "welcome to the guss game" << endl;
	cout << "I'm thinking of a number betweeen 0 and 20,in 5 guesses" << endl;

	for (int i = 0; i < guesses; i++)
	{
		cout << "guess" << i + 1 << ":" << endl;
		cin >> guess;
		if (guess != answer)
		{
			if (guess > answer)
				cout << "too high!" << endl;
			else
				cout << "too low" << endl;
		}
		else {
			cout << "you won" << endl;
			break;
		}
	}
}
