#include "stack.h"
#include <iostream>
using namespace std;

#include <string>
#include <ctype.h>

main()
{
	Stack A, B;
	string input;

	// Get input
	cout << "Enter phrase/word to check: ";
	cin >> input;
	cout << input;

	int end = input.size()-1;
	int mid = input.size()/2;

	// Convert to upper case to disable case sensitivity
	for(int j=0; j<input.size(); j++)
	{
		if( islower(input[j]) )
			input[j] = toupper(input[j]);
	}

	// Push input onto first and second stacks
	for(int i=0; i<mid; i++)
	{
		A.Push(input[i]);
		B.Push(input[end-i]);
	}

	// Compare stacks
	// Pop character if not equal
	while( !(A.IsEmpty() || B.IsEmpty()) )
	{
		if( A.Top() != B.Top() )
		{
			cout << " is not a palindrome." << endl;
			return 1;
		}

		A.Pop();
		B.Pop();
	}

	cout << " is a palindrome." << endl;
	return 1;
}
