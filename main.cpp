#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int Money = 0; // ������ ���������� �ϴ� �ʱ�ȭ ���ѳ���
	Money = 100;
	srand(time(nullptr));

	cout << rand() % 3 << endl;
	
	return 0;
}