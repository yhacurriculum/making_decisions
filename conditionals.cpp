/*
	Young Hacks Academy - After School Program
	conditionals: This program demonstrates the use
	              of conditionals (decision making).
*/

#include <iostream>
#include <string> // for using strings

using namespace std;

int main()
{
	int choice = 5;
	string name = "Garry";

	// If there is only one line after each condition
	if(choice < 5)
		cout << "Less than 5" << endl;
	else if(choice == 5)
		cout << "Equal to 5" << endl;
	else
		cout << "Greater than 5!" << endl;

	// For more than one line per condition
	if(choice < 5)
	{
		cout << "Less than 5..." << endl;
		cout << "But I have more than one line of code in this block!" << endl;
	}
	else if(choice == 5)
	{
		cout << "Equal to 5..." << endl;
		cout << "But I have more than one line of code in this block!" << endl;
	}
	else
	{
		cout << "Greater than 5!!..." << endl;
		cout << "But I have more than one line of code in this block!" << endl;
	}

	// else is the default statement
	// notice it takes no parameters.. nothing in ()
	// the code in the else block is run ONLY if none of the other
	//    blocks are true!

	// now some conditionals using strings!
	// notice when we compare a string to some text (another string),
	// we must wrap it in quotes " "
	// This is how C++ knows to treat the text like a string!
	if(name == "Garry")
	{
		cout << "Oh, hi Garry!" << endl;
	}
	else
	{
		cout << "Do I know you?" << endl;
	}

	return 0;
}
