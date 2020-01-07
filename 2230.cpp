#include <iostream>
#include <algorithm>
#define INF 9876543210

using namespace std;

long long arr[100000];
long long M;
int N;
long long MIN = INF;

int main(void) {
	int i;

	cin >> N >> M;

	for (i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N);
	i = 0;

	while (true) {
		long long *tmp = upper_bound(arr, arr + N, arr[i] + M - 1);
		
		// 탈출 조건
		if (i == N-1 || MIN == M || tmp == arr + N) break;

		// 검색 조건
		if (*tmp - arr[i] < MIN && *tmp - arr[i] >= M) {
			MIN = *tmp - arr[i];
		}
		i++;
	}
	cout << MIN;
}