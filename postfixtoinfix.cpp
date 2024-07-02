// #include<iostream>
// using namespace std;

// const int MAX_SIZE = 100;

// int stk[MAX_SIZE];
// int last=-1;

// void push(int element){
//     if(last<MAX_SIZE-1){
//         stk[++last]=element;
//     }
// }

// void pop(){
//     if(last>-1){
//         last--;
//     }
// }

// void display(){cout<<stk[0];}

// int main(){
//     string s;
//     getline(cin,s);
//     int sum=0;

//     for(int i=0;i,s.length();i++){
//         if((s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/') and s[i+1]==' '){
//             int a=stk[last];
//             pop();
//             int b=stk[last];
//             pop();

//             if(s[i] == '+'){
//                 push(b+a);
//             }
            
//             else if(s[i] == '-'){
//                 push(b-a);
//             }
//             else if(s[i] == '*'){
//                 push(b*a);
//             }
//             else{
//                 push(b/a);
//             }

//         }

//         else if (s[i] == ' ')
//         {
//             continue;
//         }
//         else if (s[i] == '$')
//         {
//             display();
//             break;
//         }


//         else
//         {
//             sum=0;
//             bool isNegative=false;

//             if(s[i]=='-'){
//                 isNegative=true;
//                 i++;
//             }

//             while (i,s.length() and s[i] != ' ')//
//             {
//                 sum= (sum*10)+(s[i]-'0');//55=50+5;
//                 i++;
//             }

//             if(isNegative) sum = -sum;//-55
//             push(sum);

            
//         }




//     }
// }
 //5 6 2 + * 12 4 / - $
// //37

#include<bits/stdc++.h>
using namespace std;
const int max_size=100;
int stk[max_size];
int top=-1;

void push(int element){
    if(top<max_size-1){
        top++;
        stk[top]=element;
    }
}

void pop(){
    if(top!=-1){
        top--;
    }
}
void display(){
    cout<<stk[0];
}
int main()
{
    string s;
    getline(cin,s);
    int sum=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='+' || s[i]=='-' or s[i]=='*' or s[i]=='/' and s[i+1]==' '){
            int a=stk[top];
            pop();
            int b=stk[top];
            pop();
            if(s[i]=='+'){
                push(b+a);
            }
            else if(s[i]=='-'){
                push(b-a);
            }
            else if(s[i]=='*'){
                push(b*a);
            }
            else{
                push(b/a);
            }
        }
        else if(s[i]==' '){
            continue;
        }
        else if(s[i]=='$'){
            display();
            break;
        }
        else{
            sum=0;
             bool isnegetive=false;
             if(s[i]=='-'){
                isnegetive=true;
                i++;
             }
             while(i<s.length()&& s[i]!=' '){
                sum=(sum*10)+s[i]-'0';
                i++;
             }
             if(isnegetive){
                sum = -sum;
             }
             push(sum);
        }
    }
}