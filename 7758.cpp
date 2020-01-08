#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <queue>
using namespace std;
string input;
string status;
int main(void) {
    int N; cin >> N;
    set<string> S;
    for (int i = 0; i < N; i++) {
        cin >> input >> status;
        if (status == "leave")
            S.erase(input);
        else S.insert(input);
    }

    for (auto it = --S.end(); it != S.begin(); it--) {
        cout << *it << '\n';
    }
    cout << *S.begin() << '\n';
}
