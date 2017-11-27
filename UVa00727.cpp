#include <bits/stdc++.h>
using namespace std;

int order(char c) {
	if (c == '(' || c == ')')
		return 0;
	if (c == '+' || c == '-')
		return 1;
	if (c == '*' || c == '/')
		return 2;
	return -1;
}

void check(stack<char> &st, char token, char str[], int &idx) {
	if (st.empty() || order(st.top()) < order(token)) {
		st.push(token);
	} else {
		while (!st.empty() && (order(st.top()) >= order(token))) {
			str[idx] = st.top();
			idx++;
			st.pop();
		}
		st.push(token);
	}
}

int main() 
{
	int t;
	int count = 0;

	cin >> t;
	cin.ignore();
	cin.ignore();

	while (t--) {
		count++;
		if(count >1) cout << endl;

		stack<char> st;
		char str[51];
		string token;
		int idx = 0;

		while (true) {
			getline(cin, token);
			if (token.length() == 0 || !cin)
				break;

			if (isdigit(token.at(0))) {
				str[idx] = token.at(0);
				idx++;
			} else if (token.at(0) == ')') {
				while (st.top() != '(') {
					str[idx] = st.top();
					idx++;
					st.pop();
				}
				st.pop();
			} else if (token.at(0) == '(') {
				st.push('(');
			} else {
				check(st, token.at(0), str, idx);
			}
		}

		while (!st.empty()) {
			str[idx] = st.top();
			idx++;
			st.pop();
		}
		str[idx] = '\0';

		cout << str << endl;
	}

	return 0;
}