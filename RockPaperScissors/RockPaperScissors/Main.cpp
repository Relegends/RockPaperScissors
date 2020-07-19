#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void Log(string message);

int main() {
	int option = 0;

	srand((int) time(0)); //Creation of a random seed

	Log("Let's play rock, paper and scissors!");
	do {
		int random = (rand() % 3) + 1;
		Log("Choose: 1-Rock	2-Paper	3-Scissors 4-Exit");
		cin >> option;
		switch (option)
		{
		case 1:
			if (random == 1)
			{
				Log("Draw");
			}
			else if (random == 2)
			{
				Log("Win");
			}
			else
			{
				Log("Lose");
			}
			break;
		case 2:
			if (random == 2)
			{
				Log("Draw");
			}
			else if (random == 1)
			{
				Log("Win");
			}
			else
			{
				Log("Lose");
			}
			break;
		case 3:
			if (random == 3)
			{
				Log("Draw");
			}
			else if (random == 2)
			{
				Log("Win");
			}
			else
			{
				Log("Lose");
			}
			break;
		case 4:
			Log("Bye!");
			break;
		default:
			Log("Error");
			break;
		}
	} while (option != 4);
}

void Log(string message) {
	cout << message << endl;
}

