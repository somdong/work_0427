#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int Money = 0; // 변수를 선언했으면 일단 초기화 시켜놔라
	Money = 100;
	srand(time(nullptr));

	cout << rand() % 3 << endl;
	
	return 0;
}