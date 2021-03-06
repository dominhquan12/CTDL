#include <bits/stdc++.h>

using namespace std;
bool isOperator(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/'||x=='%'||x=='^')
        return true;
    return false;
}
string postfix_infix(string s){
    stack<string>st;
    for(int i=0;i<s.length();i++){
        if(isOperator(s[i])){
            string a=st.top(); st.pop();
            string b=st.top(); st.pop();
            string c="(" + b + s[i] + a +")";
            st.push(c);
        }
        else st.push(string(1,s[i]));
    }
    return st.top();
}
int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<postfix_infix(s)<<endl;
    }
    return 0;
}
