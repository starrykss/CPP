/*
//�� ���ؼ� �ΰ��� �P���� 100�� �Ǵ� �� ���� �ٲٸ��

#include<iostream>
#include<algorithm>
using namespace std;

#define N 9
#define MAX 100

//��ȩ ������ Ű ���� ���� �����ϴ� �Լ�
int GetSum(const int *arr) {
	int sum = 0;
	for (int i = 0; i<N; i++) {
		sum += arr[i];
	}
	return sum;
}

//��ȩ ������ Ű ������ �θ��� �������� Ű�� �A ���� 100�� ���� �Ǻ�
int Solution(int *arr) {
	int sum = GetSum(arr);

	for (int i = 0; i<N - 1; i++) {
		for (int j = i + 1; j<N; j++) {
			if (sum - (arr[i] + arr[j]) == MAX) {
				arr[i] = -1;
				arr[j] = -1;
				return 0;
			}
		}
	}

	return -1;
}

int main(void) {

	//�Է�
	int arr[N];
	for (int i = 0; i<N; i++) {
		cin >> arr[i];
	}


	Solution(arr);  //�˰���

	sort(arr, arr + N); //������������ ����

	//���
	for (int i = 2; i<N; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}
*/
// ����
/*
#include <iostream>
#include <algorithm>	// sort()

using namespace std;

#define N 10

int main()
{
	int p1 = -1, p2 = -1, height[N], tot = 0, sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> height[i];
	}

	sort(height, height + 9);		// �������� ����

	for (int i = 0; i < 9; i++) {
		tot += height[i];
	}

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; i < 9; i++) {
			if ((tot - height[i] + height[j]) == 100) {
				p1 = i;
				p2 = j;
				break;
			}
		}
		if ((p1 >= 0) && (p2 >= 0)) {
			break;
		}
	}

	for (int i = 0; i < 9; i++) {
		if ((i != p1) && (i != p2)) {
			cout << height[i] << endl;
		}
	}

	return 0;
}
*/