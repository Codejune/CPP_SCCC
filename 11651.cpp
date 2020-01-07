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
    // 람다식
    /*
    auto cmp = [](pair<int, int> a, pair<int, int> b) { // auto: 작성한 변수에 맞게 타입을 변경함
      if(a.first == b.first)
        return a.second < b.second;
      };
    */
    sort(arr, arr + N, cmp);

    for (int i = 0; i < N; i++)
        printf("%d %d\n", arr[i].first, arr[i].second);
    return 0;
}