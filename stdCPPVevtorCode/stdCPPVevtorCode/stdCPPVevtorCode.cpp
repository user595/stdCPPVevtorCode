// stdCPPVevtorCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;
	vector<int> book(1,2);//parms:size,element

	book.push_back(1);
	
	int x = 0;
	x = book.size();
	if (x == 0) 
	{ 
		cout << "\nbook.size() == 0 \n";
	}
	else
	{
		cout << "\nbook.size() != 0" << book.size() << "\n";
	}


	vector<int> copied = book;
	for each (int number in book)
	{

		cout << "\n" << number ;
	}

	if (book.size() != copied.size())
	{
		cout << "\nbook size != copied size\n" ;
	}
	else
	{
		cout << "\nbook size == copied size\n" ;
	}

	cout << "\nPlease enter a number and press ENTER\n";
	cin >> x;




	return 0;
}

