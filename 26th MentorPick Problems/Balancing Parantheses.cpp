#include <iostream>
#include <stack>

using namespace std;

bool isBalanced(string s) {
  stack<char> st;

  for (char c : s) {
    if (c == '(' || c == '{' || c == '[') {
      st.push(c);
    } else if (c == ')') {
      if (st.empty() || st.top() != '(') {
        return false;
      }
      st.pop();
    } else if (c == '}') {
      if (st.empty() || st.top() != '{') {
        return false;
      }
      st.pop();
    } else if (c == ']') {
      if (st.empty() || st.top() != '[') {
        return false;
      }
      st.pop();
    }
  }

  return st.empty();
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    if (isBalanced(s)) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }

  return 0;
}
