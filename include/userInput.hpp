#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

void
promptForEnter(string stringToPrint)
{
	cout << stringToPrint << flush;
	if (!cin)
	{
		cin.clear();
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	}
	while (cin.get() != '\n')
		;
}

vector<uint8_t>
promptForPoint(string stringToPrint)
{
	string input;
	vector<uint8_t> result;
	cout << stringToPrint << flush;
	if (!cin)
	{
		cin.clear();
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	}
	cin >> input;
	if (input.size() == 1 && ((input[0] - 48) == 0))
	{
		result.push_back(63);
		return result;
	}
	else if (input.size() != 2)
	{
		cout << "Bad input!\n"
			 << flush;
		return result;
	}
	// first try uppercase
	int x = input[0] - 65;
	if (x > 9 || x < 0)
	{
		// wasn't uppercase, try lowercase
		x = input[0] - 97;
		if (x > 9 || x < 0)
		{
			cout << "Bad input!\n"
				 << flush;
			return result;
		}
	}

	// convert to digit and shift back to 0
	int y = (input[1] - 48) - 1;
	if (y > 9 || y < 0)
	{
		cout << "Bad input!\n"
			 << flush;
		return result;
	}
	result.push_back(x);
	result.push_back(y);
	return result;
}

int8_t
promptForAction(string stringToPrint)
{
	int input = -1;
	cout << stringToPrint << flush;
	if (!cin)
	{
		cin.clear();
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	}
	cin >> input;
	input = input - 1;
	if (input > 3 || input < 0)
	{
		cout << "Bad input!\n"
			 << flush;
		return -1;
	}
	return input;
}

int8_t
promptForCard(string stringToPrint, int numCards)
{
	int input = -1;
	cout << stringToPrint << flush;
	if (!cin)
	{
		cin.clear();
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	}
	cin >> input;


	input = input - 1;
	if (input == -1)
	{
		// denote the user wanted to return to action section
		return -2;
	}
	else if (input > numCards - 1 || input < 0)
	{
		cout << "Bad input!\n"
			 << flush;
		return -1;
	}
	return input;
}


int8_t
mainMenu(string stringToPrint)
{
	int input = -1;
	cout << stringToPrint << endl
		 << endl
		 << endl
		 << "Select an option:";
	cout << endl
		 << "1) make a game" << endl
		 << "2) join a game" << endl;
	cin >> input;
	if (input > 2 || input < 1)
	{
		cout << "Bad input!" << endl;
		return -1;
	}
	return input - 1;
}

string
promptAddress(void)
{
	string input;
	cout << "Please enter the address of the game you wish to join:" << endl;
	cin >> input;
	return input;
}
