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
using namespace std;
int main()
{

	ofstream myfile;
	myfile.open("example.txt");
	myfile << "Writing this to a file" << endl;
	myfile.close();

	return 0;
}



