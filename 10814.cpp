#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct AA {
    int primary_key;
    int age;
    string name;
};


bool cmp(AA a, AA b) {
    if (a.age == b.age)
        return a.primary_key < b.primary_key;
    return a.age < b.age;
}

int main(void) {
    int N;
    AA arr[100000];

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i].age >> arr[i].name;
        arr[i].primary_key = i;
    }

    sort(arr, arr + N, cmp);

    for (int i = 0; i < N; i++) {
        cout << arr[i].age << ' ' << arr[i].name << '\n';
    }
    return 0;
}