#include <iostream>
#include <stack>

using namespace std;

bool is_open_bracket(char c) {
	return c == '(' || c == '{' || c == '[';
}

bool is_balanced(const string& s) {
	stack<char> stk;
	bool balanced = true;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (is_open_bracket(s[i])) {
			stk.push(s[i]);
		}
		else {
			// s[i] is close bracket
			
			if (stk.empty()) {
				// not balanced ever
				return false;
			}
			
			switch (stk.top()) {
				case '(':
					if (s[i] != ')')
						balanced = false;
					break;
				case '{':
					if (s[i] != '}')
						balanced = false;
					break;
				case '[':
					if (s[i] != ']')
						balanced = false;
					break;
				default:
					// not a valid character ( bracket )
					balanced = false;
					break;
			}
			stk.pop();
		}
	}
	return balanced && stk.empty();
}

int main() {
	string s;
	cin >> s;
	cout << (is_balanced(s) ? "Balanced Brackets" : "Not Balanced") << endl;
	return 0;
}

/*

input: [[]]([]{[()]})
output: Balanced Brackets


*/
