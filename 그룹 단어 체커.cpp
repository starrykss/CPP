/*
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n;
	string str;
	scanf("%d", &n);

	int cnt = 0, ret = 0;

	for (int i = 0; i<n; i++) {
		cin >> str;
		int len = str.length();
		cnt = 0;
		for (int j = 1; j<len; j++) {
			//������ڿ� �������ڰ� �ٸ� �� 
			if (str[j] != str[j - 1]) {
				//������ڿ� ���� ���� �������� �־����� cnt���� 
				for (int k = 0; k<j - 1; k++) {
					if (str[j] == str[k]) {
						cnt++;
					}
				}
			}
		}
		//cnt�� 0�̶�� �׷� �ܾ� 
		if (cnt == 0) {
			ret++;
		}
	}

	printf("%d", ret);
}
*/