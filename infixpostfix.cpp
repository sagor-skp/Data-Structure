
#include<bits/stdc++.h>
#include<sstream>
#define ll long long
using namespace std;
int postfixevaluation(string &s){
    stack<int>st;
    stringstream ss(s);//split kora every space string
    string sub;
    while(ss>>sub){
        if(isdigit(sub[0])){
            st.push(stoi(sub));
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch (sub[0])
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
   // cin>>s;
    getline(cin,s);
    cout<<postfixevaluation(s)<<endl;
    return 0;
}