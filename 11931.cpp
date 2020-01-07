// main 뒤에 숫자 지울것
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int arr[1000000];

bool cmp(int a, int b) {
    return a > b;
}

int main(void) {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N, cmp);
    for (int i = 0; i < N; i++) {
        cout << arr[i] << '\n';
    }
    return 0;
}
