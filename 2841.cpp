#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void) {
	int n, p;
	int count = 0;
	cin >> n >> p;

	vector<int>* s = new vector<int>[n];	// 라인 수만큼 스택 생성

	for (int i = 0; i < n; i++) {
		int line, pret;
		cin >> line >> pret;
		if (s[line].empty()) {		// 해당 라인의 프렛을 처음 누를 때
			s[line].push_back(pret);		// 누를 프렛을 스택에 추가
		} else if (pret != s[line].back()) {		// 해당 라인의 스택의 탑의 프렛이 다를 때
			while (s[line].back() > pret) {		// 스택에 존재하는 프렛이 누를 프렛보다 높으면 떼고
					s[line].pop_back();					// 같거나 낮으면 떼지 않는다
					count++;						// 뗀 횟수를 카운트
					if (s[line].size() == 0) break;
			}										
			if (s[line].empty() || s[line].back() < pret)	// 만약 해당 라인 스택이 비었거나, 스택의 탑이 누를 프렛보다 낮으면
				s[line].push_back(pret);							// 누를 프렛을 스택에 푸시
			else continue;
		}
		else if (s[line].back() == pret) continue;
		count++; // 누를 프렛 카운트
	}
	cout << count;
}