#include <iostream>
#include <algorithm>
using namespace std;
#define TRUE 1
#define FALSE 0

int src[100000];
int arr[100000];

int main(void) {
	int N, M;
	int i;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &src[i]);
	sort(src, src + N);
	scanf("%d", &M);
	for (i = 0; i < M; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < M; i++) {
		if (binary_search(src, src + N, arr[i]))
			cout << TRUE << '\n';
		else
			cout << FALSE << '\n';
	}
}
