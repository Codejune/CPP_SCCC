#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

pair<int, int> arr[100000];

int main(void) {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i].first >> arr[i].second;
	sort(arr, arr + N);
	for (int i = 0; i < N; i++)
		printf("%d %d\n", arr[i].first, arr[i].second);
	return 0;
}

