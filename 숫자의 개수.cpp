/*
#include <iostream>
#include <string.h> // strlen()
#include <stdio.h>  // sprintf()

#define N 10  // 999*999*999 = 997,002,999

using namespace std;

int main()
{
	int n1, n2, n3, mul, len, cnt = 0;
	char ary[N];

	cin >> n1 >> n2 >> n3;

	mul = n1 * n2 * n3;
	// ������ char �������� ��ȯ
	sprintf(ary, "%d", mul);

	len = strlen(ary);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < len; j++) {
			if (ary[j] == (i + '0'))		// int �� -> char �� ��ȯ
				cnt++;
		}
		cout << cnt << endl;
		cnt = 0;
	}

	return 0;
}
*/
// https://stackoverflow.com/questions/2279379/how-to-convert-integer-to-char-in-c