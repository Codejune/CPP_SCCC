#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

pair<int, int> arr[100000];

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main(void) {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i].first >> arr[i].second;
    // ���ٽ�
    /*
    auto cmp = [](pair<int, int> a, pair<int, int> b) { // auto: �ۼ��� ������ �°� Ÿ���� ������
      if(a.first == b.first)
        return a.second < b.second;
      };
    */
    sort(arr, arr + N, cmp);

    for (int i = 0; i < N; i++)
        printf("%d %d\n", arr[i].first, arr[i].second);
    return 0;
}