// ���� ���� �̿�
/*
#define _CRT_SECURE_NO_WARNINGS
 
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <queue>
#include <math.h>
 
using namespace std;
 
int arr[100005];
 
int main()
{
    int n;
    cin >> n;
 
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
 
    sort(arr, arr + n);
 
    int k;
    cin >> k;
 
    for (int i = 0; i < k; i++)
    {
        int t;
        scanf("%d", &t);
 
        //���� ����?
        if (t < arr[0])
        {
            cout << 0 << endl;
            continue;
        }
        else if (t > arr[n - 1])
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            int s = 0;
            int e = n - 1;
            int mid = (s + e) / 2;
            bool flag = true;
 
            while ((0 <= s && s <= (n - 1)) && (0 <= e && e <= (n - 1)) && e >= s)
            {
                mid = (s + e) / 2;
 
                if (arr[mid] > t)
                {
                    e = mid - 1;
                }
                else if (arr[mid] < t)
                {
                    s = mid + 1;
                }
                else if(arr[mid] == t)
                {
                    flag = false;
                    printf("1\n");
                    break;
                }
            }
 
            if (flag)
                printf("0\n");
        }
    }
 
    return 0;
}
*/

// ���� Ž��
/*
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
	int n, m;
	scanf("%d", &n);
	vector<int> map(n);
	for (int i = 0; i < n; i++)
		scanf("%d", &map[i]);
	sort(map.begin(), map.end());
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int tmp;
		scanf("%d", &tmp);
		printf("%d\n", binary_search(map.begin(), map.end(), tmp));
	}
}
*/

// �ð� �ʰ�
/*
#include <iostream>
#include <vector>

#define N 100000

using namespace std;

int main()
{
	int n, m, cnt = 0, ary1[N], ary2[N];
	vector <int> result;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ary1[i];
	}
	
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> ary2[i];
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (ary1[j] == ary2[i]) {		// ��ġ�ϴ� ���� ���� ���
				cnt++;	// cnt 1 ����
				result.push_back(1);	// ���Ϳ� 1 ����
				break;		// ary2 �ݺ��� ����
			}
		}
		if (cnt == 0) {	// cnt�� 0�� ���. -> ��ġ�ϴ� ���� ���� ���
			result.push_back(0);	// ���Ϳ� 0 ����
		}
		cnt = 0;
	}
	for (unsigned i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}

	return 0;
}
*/