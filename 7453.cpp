#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int N; cin >> N;
	int i, j;
	// �迭 ���� �Ҵ�
	int** arr = new int* [N];
	for (int i = 0; i < N; ++i)
		arr[i] = new int[4];

	// �迭 �Է�
	for (i = 0; i < N; i++)
		for (j = 0; j < 4; j++)
			cin >> arr[i][j];
	
	// �迭 ���
	for (i = 0; i < N; i++) {
		for (j = 0; j < 4; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << "\n";
	}
}