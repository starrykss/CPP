// N = [0,500]
// ���丮���� ���� ���� ����.
// ���丮�� ���� 0�� ������ �ᱹ 2*5 �� ���� ���� �����ȴ�.
// 2�� ¦������ ��Ÿ���Ƿ� ��ģ��.
// �ᱹ �� ������ 1���� N���� �������� 5�� ����� ���� ã�� ������ �ٲ��.
// �׸��� �� ���� N�� 5�� ���� ������ ���̴�.

/*
#include <iostream>

using namespace std;

int main()
{
	int n, count = 0;
	
	cin >> n;
	
	if (n == 0) { 
		cout << "1"; 
	}
	else {
		count += n / 5;
		count += n / 25;
		count += n / 125;
		cout << count << endl;
	}
	return 0;
}
*/
/*
#include <iostream>

using namespace std;

int main()
{
	int cnt = 0, n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 125 == 0) cnt += 3;
		else if (i % 25 == 0) cnt += 2;
		else if (i % 5 == 0) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
*/