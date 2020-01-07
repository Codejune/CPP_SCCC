#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int N; cin >> N;
	int i, j;
	// 배열 동적 할당
	int** arr = new int* [N];
	for (int i = 0; i < N; ++i)
		arr[i] = new int[4];

	// 배열 입력
	for (i = 0; i < N; i++)
		for (j = 0; j < 4; j++)
			cin >> arr[i][j];
	
	// 배열 출력
	for (i = 0; i < N; i++) {
		for (j = 0; j < 4; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << "\n";
	}
}