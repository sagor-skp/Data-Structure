#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int postfixevaluation(string s){
    stack<int>st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9'){
            st.push(s[i]-'0');//convert it character to int
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
            st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            
            default:
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    string s;
    cin>>s;
    cout<<postfixevaluation(s)<<endl;
    return 0;
}