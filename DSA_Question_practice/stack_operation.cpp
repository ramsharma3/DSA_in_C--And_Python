/*#include <iostream>
#include <stack>

using namespace std;

bool isOperand(char ch) {
  return isalpha(ch) || isdigit(ch);
}

int precedence(char ch) {
  switch (ch) {
    case '+':
    case '-':
      return 1;
    case '*':
    case '/':
      return 2;
    case '^':
      return 3;
    default:
      return -1;
  }
}

string infixToPostfix(string expression) {
  stack<char> s;
  string postfix;

  for (char ch : expression) {
    if (isOperand(ch)) {
      postfix += ch;
    } else {
      while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
        postfix += s.top();
        s.pop();
      }
      s.push(ch);
    }
  }

  while (!s.empty()) {
    postfix += s.top();
    s.pop();
  }

  return postfix;
}

int main() {
  string infixExpression = "a + b * c - d";
  string postfixExpression = infixToPostfix(infixExpression);

  cout << "Infix expression: " << infixExpression << endl;
  cout << "Postfix expression: " << postfixExpression << endl;

  return 0;
}*/
#include <iostream>
#include <stack>

using namespace std;

bool isOperand(char ch) {
  return isalpha(ch) || isdigit(ch);
}

int precedence(char ch) {
  switch (ch) {
    case '+':
    case '-':
      return 1;
    case '*':
    case '/':
      return 2;
    case '^':
      return 3;
    default:
      return -1;
  }
}

string infixToPostfix(string expression) {
  stack<char> s;
  string postfix;

  for (char ch : expression) {
    if (isOperand(ch)) {
      postfix += ch;
    } else {
      while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
        postfix += s.top();
        s.pop();
      }
      s.push(ch);
    }
  }

  while (!s.empty()) {
    postfix += s.top();
    s.pop();
  }

  return postfix;
}

int main() {
  string infixExpression;
  cout << "Enter your infix expression: ";
  getline(cin, infixExpression);

  string postfixExpression = infixToPostfix(infixExpression);

  cout << "Infix expression: " << infixExpression << endl;
  cout << "Postfix expression: " << postfixExpression << endl;

  return 0;
}