/*
#include <iostream>
#include <string.h>	// strlen()

using namespace std;

int main()
{
	char num[13] = " ";		// 1,000,000,000 ������ ��
	int len;

	cin >> num;

	len = strlen(num);

	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (num[i] < num[j]) {     // �������� ����
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}

	cout << num << endl;

	return 0;
}
*/