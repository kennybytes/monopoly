/*
 *
 *
 *
 * read.cc
 * Author: Kenny Luong
 *
 * This is a file to test the IO for C++
 *
 */


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string line;
	ifstream myfile ("input.txt"); 
	if(myfile.is_open())
	{
		while( myfile.good() ) 
		{
	
			getline(myfile, line);
			cout << line << endl;
		}

		myfile.close();
	}
	else cout << "Unable to open file." << endl;
	return 0;
}



