#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
// I n�� ���� n�� Q�� ����
// D 1�� Q���� �ִ��� �����ϴ� ����
// D -1�� Q ���� �ּڰ��� �����ϴ� ����
// �ִ�(�ּڰ�)�� �����ϴ� ���꿡�� �ִ�(�ּڰ�)�� �� �̻��� ���, �ϳ��� ������
// Q�� ����ִµ� ������ ������ 'D'��� �� ������ ����
// Q�� ���� �ִ� �� �� �ִ񰪰� �ּڰ��� ���
// �� ���� �� �ٿ� ����ϵ� �ϳ��� �������� ����
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