/*
#include <iostream>

using namespace std;

int main()
{
	unsigned long n = 0, a = 0, b = 1;		
	// long n = 0, a = 0, b = 1; �� ��. 
	// unsigned�� ���� ��°�� �Ǻ���ġ ���� ����� ǥ���ϱ� ����.
	// unsigned�� ������� ���� ��� ū �Ǻ���ġ ���� ������ ǥ����. (�׷��� ���� ó����.)

	cin >> n;

	// n�� ���� a�� b�� swap�Ͽ� ���� ���� b�� ����. 
	// 0 1 1 2 3 5 8 13 21 34 ...
	for (int i = 0; i < n - 1; ++i) {
		unsigned long tmp = b;
		b = a + b;
		a = tmp;
	}

	cout << b << endl;

	return 0;
}
*/