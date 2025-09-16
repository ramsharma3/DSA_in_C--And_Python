#include <iostream>
#include<stack>
using namespace std;

bool isoperator(char c){
    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^'){
        return true;
        return false;
    }
}
bool isoperand(char c){
    if(c>='A' && c<='Z'){
        return true;
    }
    if(c>='a' && c<=z){
        return true;
    }
    if(c>='0' && c<='9'){
        return true;
        return false;
    }

}
int procedence(char op){
    if(op == '+' || op == '-'){
        return 1;
    }
    if(op=='*' || op='/'){
        return 2;

    }
    if(op == '^' ){
        return 3;
    }
    return 0;
}
bool eqlOrhigher(char op1 . char op2){
    int p1=procedence(op1);
    int p2 = procedence(op2);
    if(p1==p2){
        if(op1 == '^'){
            return true ;
            return false;
        }
        return (p1>p2?true:false);

    }
}
string <char> S;
string postfix = "";
char ch;
S.push('(');
infix +=')';
for(int i=0 ; i < infix.length(); i++){
    ch = infix[i];
    if(ch == ''){
        continue;

    }
    else if(ch=='('){
        S.push(ch);

    }
    else if(isoperand(ch)){
        postfix+=ch;
    }
    else if(isoperator(ch)){
        while(!S.empty() && eqlOrhigher(S.top(),ch)){
            postfix+=S.top();
            S.pop();
        }
        S.pop();
    }

}
return postfix;

int main(){
    string infix_exp , postfix_exp;
    int ch;
    do{
        cout<<"Enter an infix expression ";
        cin>>infix_exp;
        postfix_exp = convert(infix_exp);
        cout<<"\nInfix Expression : "<<infix_exp;
        cout<<"\nPostfix Expression :"<<postfix;
        cout<<"\n\t Do you want to enter infix expression(1/0)?";
        cin>>ch;
    }
    while(ch==1);
    return 0;
}