#include <iostream>
#include <string>

using namespace std;

int main()
{
	int login = 0;
	string userName;
	string drEvil = "$100,000,000";

	cout << "please enter your ID" << endl;
	cin >> userName;

	if (userName == "dr.evil")
	{
		cout << "Good Day Dr.Evil, you have " << drEvil << " in your account, enjoy your evil plans." << endl;
	}
	else
	{
		if(userName != "dr.evil")
		cout << "user not found, try again later." << endl;
		
	}
	
	system("pause");

	return 0;
}