#include <iostream>
#include <random>
#include <string>

using namespace std;

//Method containing a random num gen
//and switch statements for the Magic 8-ball
void magic8()
{
	random_device x;
	default_random_engine generator(x());
	uniform_int_distribution<int> dis(0, 6);
	int num = dis(generator);
	switch (num)
	{
		case (1) :
			cout << "It shall come to pass...";
			break;
		case (2) :
			cout << "The spirits are against you...";
			break;
		case (3) :
			cout << "Place your hopes elsewhere...";
			break;
		case (4) :
			cout << "An unexpected joy awaits...";
			break;
		case (5) :
			cout << "You can count on it...";
			break;
		default:
			cout << "Outlook hazy, try again later...";
			break;
	}
}

int main()
{

	//cout << "I am the Magic 8-ball. Hit space and return when you have a question in mind.";
	string query = "";
	cout << "I am the Magic 8-ball. Enter your question...: ";
	getline(cin, query);
	cout << "\nYour question was : " << query << endl << endl;
	cout << "The answer is -- \"";
	magic8();
	cout << "\"";
	cin.get();

	return 0;
}
