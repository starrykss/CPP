/*
#include <iostream>
using namespace std;
int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
int main() {
	int n;
	cin >> n;
	cout << fibonacci(n) << '\n';
	return 0;
}
*/

// �ð� �ʰ�
/* 
#include <iostream>

using namespace std;

int main()
{
	unsigned int n = 0, a = 0, b = 1;
	// int n = 0, a = 0, b = 1; �� ��. 
	// unsigned�� ���� ��°�� �Ǻ���ġ ���� ����� ǥ���ϱ� ����.
	// unsigned�� ������� ���� ��� ū �Ǻ���ġ ���� ������ ǥ����. (�׷��� ���� ó����.)

	cin >> n;

	// n�� ���� a�� b�� swap�Ͽ� ���� ���� b�� ����. 
	// 0 1 1 2 3 5 8 13 21 34 ...
	for (int i = 0; i < n - 1; ++i) {
		unsigned int tmp = b;
		b = a + b;
		a = tmp;
	}

	cout << b << endl;

	return 0;
}
*/