/*
#include <iostream>
#include <string.h>	// strlen()

#define N 20

using namespace std;

int main()
{
	int num, cnt, len;
	char ary[N];

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> cnt >> ary;
		len = strlen(ary);
		for (int j = 0; j < len; j++) {
			for (int k = 0; k < cnt; k++) {
				cout << ary[j];
			}
		}
		cout << endl;
	}
	return 0;
}
*/
/*
#include <iostream>
#include <string.h>	// strlen()

#define N 1000
#define L 20
#define C 18

using namespace std;

int main()
{
	int num, cnt[C], flag = 0;
	char ary[N][L];

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> cnt[i] >> ary[i];
	}

	// ���� ó�� (�Էµ� ���忡 �ҹ��� ���ĺ��� ������� ��� ���α׷� ����)
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < strlen(ary[i]); j++) {
			if ((ary[i][j] >= 'a') && (ary[i][j] <= 'z')) return 0;
		}
	}

	for (int i = 0; i < num; i++) {
		while (1) {
			for (int j = 0; j < cnt[i]; j++) {	// cnt ��ŭ �ݺ�
				cout << ary[i][flag];
			}
			flag++;
			if (flag == strlen(ary[i])) break;
		}
		cout << endl;
		flag = 0;
	}

	return 0;
}
*/