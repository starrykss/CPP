/*
#include <iostream>
using namespace std;
int main() {
	int num, small = 101, sum = 0, cnt = 0;
	for (int i = 0; i < 7; i++)
	{
		cin >> num;
		if (num % 2 == 1)//Ȧ���϶�
		{
			cnt++;
			sum += num;
			if (small > num)
			{
				small = num;
			}
		}

	}
	if (cnt == 0)
	{
		cout << "-1" << '\n';
		return 0;
	}
	cout << sum << '\n' << small << '\n';
}
*/

/* X
#include <iostream>

#define N 7

using namespace std;

int main()
{
	int ary[N], sum = 0, min = 0, cnt = 0;

	for (int i = 0; i < N; i++) {
		cin >> ary[i];
		if (ary[i] >= 100) {
			return 0;
		}
	}

	// �迭 ���� (���� ����)
	for (int s = 0; s < N - 1; s++) {
		for (int t = s + 1; t < N; t++) {
			if (ary[t] >= ary[s]) {     // �������� ����
				int tmp = ary[t];
				ary[t] = ary[s];
				ary[s] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		if ((ary[i] % 2) != 0) {	// 2�� ���������� �ʴ´ٸ� => Ȧ��
			sum += ary[i];
			min = ary[i];
			cnt++;
		}
	}

	cout << cnt << endl;

	if (cnt == 0) {		// Ȧ���� ������
		cout << "-1" << endl;
	}
	else {
		cout << sum << endl << min << endl;
	}
	
	return 0;
}
*/