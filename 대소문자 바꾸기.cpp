/*
#include <iostream>
#include <string.h>	// strlen()

#define N 101

using namespace std;

int main()
{
	char input[N];
	int len;

	cin >> input;

	len = strlen(input);
	
	for (int i = 0; i < len; i++) {
		if (input[i] >= 97) {	// �ҹ����̸�
			input[i] = input[i] - 32;	// �빮�ڷ� ��ȯ
		}
		else {		// �빮���̸�
			input[i] = input[i] + 32;	// �ҹ��ڷ� ��ȯ
		}
	}

	for (int i = 0; i < len; i++) {
		cout << input[i];
	}
	
	cout << endl;

	return 0;
}
*/