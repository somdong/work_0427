#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	char Ch = 'A';

	cout << (char)(Ch + 2) << endl;
	cout << (char)(Ch - 2) << endl;
	cout << (char)(Ch * 2) << endl;
	cout << (char)(Ch / 2) << endl;
	cout << (Ch % 2) << endl;
	
	return 0;
}