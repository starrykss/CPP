/*
#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
#include <cstdio>

#define MAX_V 20001

using namespace std;

// �׷����� ���� ����Ʈ. (����� ���� ��ȣ, ���� ����ġ) ���� ��ƾ� �Ѵ�.
vector< pair<int, int>> adj[MAX_V]; // ������ �ִ� ���� :: MAX_V

vector<int> dijkstra(int src, int V, int E)
{
	// V��ŭ �迭�� INT_MAX�� �ʱ�ȭ
	vector<int> dist(V, INT_MAX);
	dist[src] = 0; // �������� 0���� �ʱ�ȭ �Ѵ�. 

	priority_queue<pair<int, int> > pq;

	pq.push(make_pair(0, src)); // �������� ó������ �켱���� ť�� ����

	while (!pq.empty())
	{
		// �켱���� ť�� ���� ����ġ�� �� ������ ������ �ٲپ��ش�.
		int cost = -pq.top().first;
		int here = pq.top().second;

		pq.pop();

		// ���� ���� ���� �ͺ��� �� ª�� ��θ� �˰� �ִٸ� ���� �������� �����Ѵ�.
		if (dist[here] < cost)
			continue;

		// ������ �������� ��� �˻�.
		for (int i = 0; i < adj[here].size(); i++)
		{
			int there = adj[here][i].first;
			int nextDist = cost + adj[here][i].second;

			// �� ª�� ��θ� �߰��ϸ�, dist[]�� �����ϰ� �켱���� ť�� �ִ´�.
			// dist ���Ϳ��� ������ -> there ��ġ������ �ִ� �Ÿ��� ����ִ�.
			if (dist[there] > nextDist)
			{
				dist[there] = nextDist;
				pq.push(make_pair(-nextDist, there));
				
				// ���⼭ -�� �ִ� ����?
				// priority_queue STL�� �⺻������ ���� ū ���Ұ� ���� ������ ť�� ����
				// ���� �Ÿ��� ��ȣ�� �ٲ㼭 �Ÿ��� ���� �������� ���������� �ϱ� ����
				
			}
		}
	}

	return dist;
}
*/