#include <iostream>
#include <string>

using namespace std;

string getUsername;
int drEvil = 100000000;
string bankAccountName();
void getBankAccount();



int main()
{

	bankAccountName();

	getBankAccount();


	
	
	system("pause");

	return 0;
}

string bankAccountName()
{
	//meant to be the opening to the program
	cout << "please enter your ID" << endl;
	cin >> getUsername;

	return getUsername;
}

void getBankAccount()
{
	//my function that is meant to select the account of money we are meant to empty
	if (getUsername == "drEvil")
	{
		cout << "Good Day Dr.Evil, your account balance: $" << drEvil << " in your account, \nenjoy your evil plans." << endl;

	}
	else if (getUsername == "drevil")
	{
		int& drevil = drEvil; 
		drevil = 0;
		cout << "recent transaction to puppy farms worldwide.\naccount balance: $" << drevil << endl;

	}
	//if the code doesn't find your account i want it to put you back to ask for a username
	else
	{
		if (getUsername != "drevil" || "drEvil")
			cout << "user not found, try again later." << endl;

	}
}