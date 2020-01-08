#include <iostream>
#include <algorithm>
#include <map>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;
map<int, string> book;
map<string, int> book_page;
vector<string> result;
int main(void) {
	int n, m; cin >> n >> m;
	int i;
	string name;

	// ���� �Է�
	for (i = 0; i < n; i++) {
		cin >> name;
		book[i + 1] = name;
		book_page[name] = i + 1;
	}


	// ��� Ž��
	for (i = 0; i < m; i++) {
		string input;
		cin >> input;
		int tmp = atoi(input.c_str());
		if (tmp != 0) // ������ ��
			result.push_back((*book.find(tmp)).second);
		else // �̸��� ��
			result.push_back(to_string((*book_page.find(input)).second));
	}

	for (auto it = result.begin(); it != result.end(); it++)
		cout << *it << '\n';
}