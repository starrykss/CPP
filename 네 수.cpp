/*
#include <iostream>
#include <cstring>	// strlen()
#include <string>		// stoll()

#define N 14	// A(C), B(D) �� ��� 1,000,000�� ��� -> 7�ڸ� * 2 = 14�ڸ�

using namespace std;

int main()
{
	char A[N] = " ", B[N] = " ", C[N] = " ", D[N] = " ";
	char ary1[N * 4], ary2[N * 4];
	int lena, lenc;
	long long res1, res2;		// �Է°��� 1000000 1000000 1000000 1000000�� ���, ������� ����ϱ� ���ؼ� long long �ڷ��� ����

	cin >> A >> B >> C >> D;

	lena = strlen(A);
	lenc = strlen(C);

	for (int i = 0; i < N; i++) {
		if (A[i] != ' ') {
			ary1[i] = A[i];
		}
		if (C[i] != ' ') {
			ary2[i] = C[i];
		}
	}

	for (int i = 0; i < N; i++) {
		if (B[i] != ' ') {
			ary1[i + lena] = B[i];
		}
		if (D[i] != ' ') {
			ary2[i + lenc] = D[i];
		}
	}

	res1 = stoll(ary1);	// C++11
	res2 = stoll(ary2);

	cout << res1 + res2 << endl;

	return 0;
}
*/
/* �Է� : 1000000 1000000 1000000 1000000  
 * ��� : 20000002000000 (int �ڷ��� ���� �ʰ�)
 */