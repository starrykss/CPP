/*
#include <iostream>

#define N 8

using namespace std;

int main()
{
	int ary[N], isAscending = 0, isDescending = 0;

	for (int i = 0; i < N; i++) {
		cin >> ary[i];
	}
	
	// checking order
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (ary[j] < ary[i]) {		// ���� ������ ���
				isDescending = 1;
			}
			else if (ary[j] > ary[i]) {	// ���� ������ ���
				isAscending = 1;
			}
		}
	}

	if ((isAscending == 1) && (isDescending == 1)) {
		cout << "mixed" << endl;
	}
	else if ((isAscending == 1) && (isDescending == 0)) {
		cout << "ascending" << endl;
	}
	else if ((isAscending == 0) && (isDescending == 1)) {
		cout << "descending" << endl;
	}

	return 0;
}
*/