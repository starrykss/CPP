/*
#include <iostream>
#include <cstring>	// strlen()
#include <vector>

#define N 51

using namespace std;

void check_matching(char *ary) 
{
	int len, cnt = 0;
	vector <char> v;
	len = strlen(ary);

	for (int i = 0; i < len; i++) {
		v.push_back(ary[i]);
	}
	for (int i = 0; i < len; i++) {
		if (v[i] == '(') {	// "(" ���ڰ� ���� ��
			cnt++;
		}
		else if ((v[i] == ')') && (cnt > 0)) {		// ")" ���ڰ� ������ ���� "(" ������ ���� ���� ��!
			cnt--;
		}
		else if ((v[i] == ')') && (cnt <= 0)) {	// ")" ���ڰ� ������ ���� "(" ������ �� ���� ")" ������ ���� ���� ��!
			cnt--;
			break;		// "(" ���ڳ� ")" ���ڿ� ������� ������ �������� �����Ƿ� �˻��� �ʿ䰡 ����.
		}
	}

	if (cnt == 0) {
		cout << "YES" << endl;
		v.erase(v.begin(), v.end());

	}
	else {
		cout << "NO" << endl;
		v.erase(v.begin(), v.end());
	}
}

int main()
{
	int n;
	char ary[N] = " ";

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ary;
		check_matching(ary);
	}

	return 0;
}
*/
// ���� ����Ʈ : http://jwprogramming.tistory.com/137