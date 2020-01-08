#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
// I n은 정수 n을 Q에 삽입
// D 1는 Q에서 최댓값을 삭제하는 연산
// D -1는 Q 에서 최솟값을 삭제하는 연산
// 최댓값(최솟값)을 삭제하는 연산에서 최댓값(최솟값)이 둘 이상인 경우, 하나만 삭제됨
// Q가 비어있는데 적용할 연산이 'D'라면 이 연산은 무시
// Q에 남아 있는 값 중 최댓값과 최솟값을 출력
// 두 값은 한 줄에 출력하되 하나의 공백으로 구분
int main(void) {
    int t; cin >> t;
    int k;
    multiset<long long>* q = new multiset<long long>[t];
    for (int i = 0; i < t; i++) {
        long long tmp;
        char op;
        cin >> k;
        for (int j = 0; j < k; j++) {
            cin >> op >> tmp;
            switch (op) {
            case 'I':
                q[i].insert(tmp);
                break;
            case 'D':
                if (q[i].size() == 0)
                    continue;
                else if (tmp == -1)
                    q[i].erase(q[i].begin());
                else
                    q[i].erase(--q[i].end());
                break;
            }
        }
    }
    for (int i = 0; i < t; i++) {
        if (q[i].size() != 0) cout << *--q[i].end() << ' ' << *q[i].begin() << '\n';
        else cout << "EMPTY\n";
    }
}