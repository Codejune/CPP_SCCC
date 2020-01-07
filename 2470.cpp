// main 뒤에 숫자 지울것
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// 주어진 값이 커서 long long 아니면 안받는대...
long long arr[100000];

bool cmp(long long a, long long b) {
	return abs(a) < abs(b);
}

int main(void) {
	int i;
	long long min = 98765432100LL;
	long long a, b;
	int N;
	cin >> N;
	for (i = 0; i < N; i++)
		cin >> arr[i];
	sort(arr, arr + N, cmp);

	for (i = 0; i < N-1; i++) {
		if (abs(arr[i] + arr[i + 1]) < min) {
			min = abs(arr[i] + arr[i + 1]);
			a = arr[i];
			b = arr[i + 1];
		}
	}

	if (a < b)
		cout << a << ' ' << b;
	else
		cout << b << ' ' << a;
	return 0;
}