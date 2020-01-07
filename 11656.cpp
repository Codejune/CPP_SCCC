#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
string str[1000];

bool cmp(string a, string b) {
    if (a.compare(b) < 0)
        return true;
    return false;
}

int main(void) {
    cin >> str[0];
    int len = str[0].size();
    for (int i = 1; i < len; i++)
        str[i] = str[0].substr(i);
    sort(str, str + len);

    for (int i = 0; i < len; i++)
        cout << str[i] << '\n';
    return 0;
}