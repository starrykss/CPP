/*
#include <iostream>
#include <string.h>		// strlen()

#define N 1000000

using namespace std;

int main()
{
	char sen[N];
	int len = 0, flag = 0;

	cin.getline(sen, N);	// ������ ������ ������ �Է� �ޱ�.
	len = strlen(sen);

	if (sen[0] != ' ') flag++;	// ó�� �κп� ������ ���� ��� 
	for (int i = 1; i < len; i++) {
		if ((sen[i] != ' ') && (sen[i - 1] == ' ')) flag++;	// '_(�ܾ�)'�� ���
	}

	cout << flag << endl;
	return 0;
}
*/