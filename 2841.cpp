#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void) {
	int n, p;
	int count = 0;
	cin >> n >> p;

	vector<int>* s = new vector<int>[n];	// ���� ����ŭ ���� ����

	for (int i = 0; i < n; i++) {
		int line, pret;
		cin >> line >> pret;
		if (s[line].empty()) {		// �ش� ������ ������ ó�� ���� ��
			s[line].push_back(pret);		// ���� ������ ���ÿ� �߰�
		} else if (pret != s[line].back()) {		// �ش� ������ ������ ž�� ������ �ٸ� ��
			while (s[line].back() > pret) {		// ���ÿ� �����ϴ� ������ ���� �������� ������ ����
					s[line].pop_back();					// ���ų� ������ ���� �ʴ´�
					count++;						// �� Ƚ���� ī��Ʈ
					if (s[line].size() == 0) break;
			}										
			if (s[line].empty() || s[line].back() < pret)	// ���� �ش� ���� ������ ����ų�, ������ ž�� ���� �������� ������
				s[line].push_back(pret);							// ���� ������ ���ÿ� Ǫ��
			else continue;
		}
		else if (s[line].back() == pret) continue;
		count++; // ���� ���� ī��Ʈ
	}
	cout << count;
}