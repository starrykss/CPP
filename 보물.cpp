/*
#include <iostream>
#include <algorithm>	// sort()
#include <functional>	// ��������

#define N 51

using namespace std;

int main()
{
	int n, ary[N], cmp[N], tmp[N], sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ary[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> cmp[i];
		tmp[i] = cmp[i];
	}

	sort(ary, ary + n);	// �������� ����
	sort(cmp, cmp + n, greater<int>());	// �������� ����

	for (int i = 0; i < n; i++) {
		sum += ary[i] * cmp[i];
	}

	cout << sum << endl;

	return 0;
}
*/