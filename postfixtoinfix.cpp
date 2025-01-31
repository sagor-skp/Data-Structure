// // #include<iostream>
// // using namespace std;

// // const int MAX_SIZE = 100;

// // int stk[MAX_SIZE];
// // int last=-1;

// // void push(int element){
// //     if(last<MAX_SIZE-1){
// //         stk[++last]=element;
// //     }
// // }

// // void pop(){
// //     if(last>-1){
// //         last--;
// //     }
// // }

// // void display(){cout<<stk[0];}

// // int main(){
// //     string s;
// //     getline(cin,s);
// //     int sum=0;

// //     for(int i=0;i,s.length();i++){
// //         if((s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/') and s[i+1]==' '){
// //             int a=stk[last];
// //             pop();
// //             int b=stk[last];
// //             pop();

// //             if(s[i] == '+'){
// //                 push(b+a);
// //             }
            
// //             else if(s[i] == '-'){
// //                 push(b-a);
// //             }
// //             else if(s[i] == '*'){
// //                 push(b*a);
// //             }
// //             else{
// //                 push(b/a);
// //             }

// //         }

// //         else if (s[i] == ' ')
// //         {
// //             continue;
// //         }
// //         else if (s[i] == '$')
// //         {
// //             display();
// //             break;
// //         }


// //         else
// //         {
// //             sum=0;
// //             bool isNegative=false;

// //             if(s[i]=='-'){
// //                 isNegative=true;
// //                 i++;
// //             }

// //             while (i,s.length() and s[i] != ' ')//
// //             {
// //                 sum= (sum*10)+(s[i]-'0');//55=50+5;
// //                 i++;
// //             }

// //             if(isNegative) sum = -sum;//-55
// //             push(sum);

            
// //         }




// //     }
// // }
//  //5 6 2 + * 12 4 / - $
// // //37

// #include<bits/stdc++.h>
// using namespace std;
// const int max_size=100;
// int stk[max_size];
// int top=-1;

// void push(int element){
//     if(top<max_size-1){
//         top++;
//         stk[top]=element;
//     }
// }

// void pop(){
//     if(top!=-1){
//         top--;
//     }
// }
// void display(){
//     cout<<stk[0];
// }
// int main()
// {
//     string s;
//     getline(cin,s);
//     int sum=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='+' || s[i]=='-' or s[i]=='*' or s[i]=='/' and s[i+1]==' '){
//             int a=stk[top];
//             pop();
//             int b=stk[top];
//             pop();
//             if(s[i]=='+'){
//                 push(b+a);
//             }
//             else if(s[i]=='-'){
//                 push(b-a);
//             }
//             else if(s[i]=='*'){
//                 push(b*a);
//             }
//             else{
//                 push(b/a);
//             }
//         }
//         else if(s[i]==' '){
//             continue;
//         }
//         else if(s[i]=='$'){
//             display();
//             break;
//         }
//         else{
//             sum=0;
//              bool isnegetive=false;
//              if(s[i]=='-'){
//                 isnegetive=true;
//                 i++;
//              }
//              while(i<s.length()&& s[i]!=' '){
//                 sum=(sum*10)+s[i]-'0';
//                 i++;
//              }
//              if(isnegetive){
//                 sum = -sum;
//              }
//              push(sum);
//         }
//     }
// }

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
};
void addnode(node *&head,int data)
{
    node *temp=new node();
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node*temp2=new node();
        temp2=head;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp;
    }
}
void addfirst(node *&head,int data)
{
    if(head==NULL)
    {
        cout<<"Fill first in Linklist ";
    }
    else
    {
        node *new_node=new node();
        new_node->data=data;
        new_node->next=head;
        head=new_node;
        
        
    }
}
void addgivenposition(node*&head,int data,int pos)
{

    node *new_node=new node();
    new_node->data=data;
    new_node->next=NULL;
    if(pos==1)
    {
        new_node->next=head;
        head=new_node;
        return;
    }
    node *current=new node();
    current=head;
    int position=1;    
    while(current!=NULL&&position<pos-1)
    {
        current=current->next;
        position++;
    }
    if(current==NULL)
    {
        cout<<"Out of position ";
    }
    new_node->next=current->next;
    current->next=new_node;

}
void insertasgivenvalue(node *&head,int data,int value_tofind)
{
    node *newNode1=new node();
    newNode1->data=data;
    newNode1->next=NULL;
    node *current=head;
    while(current!=NULL&&current->data!=value_tofind)
    {
        current=current->next;

    }
    if(current==NULL)
    {
        cout<<"This value does not found "<<endl;
        delete newNode1;
        return;
    }
    newNode1->next=current->next;
    current->next=newNode1;
}
void insertasgivenvaluepos(node *&head, int value_tofind, int data) {
    node *newNode1 = new node();
    newNode1->data = data;
    newNode1->next = NULL;

    if (head != NULL && head->data == value_tofind) {
        newNode1->next = head;
        head = newNode1;
        return;
    }

    node *current = head;

    while (current != NULL && current->next != NULL && current->next->data != value_tofind) {
        current = current->next;
    }

    if (current == NULL || current->next == NULL) {
        cout << "This value does not found " << endl;
        delete newNode1;
        return;
    }
    newNode1->next = current->next;
    current->next = newNode1;
}
void deletefirst(node *&head)
{
  if(head==NULL)
  {
      cout << "List is empty, nothing to delete." << endl;
      return;
  }
  node *tmp=head;
  head=head->next;
  delete tmp;
}

void deleteLast(node *&head)
{
    if(head==NULL)
    {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    if(head->next==NULL)
    {
        delete head;
        head=NULL;
        return;
    }
    node *curr=head;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    delete curr->next;
    curr->next=NULL;

}
void deleteatposition(node*&head,int pos)
{
     if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
     if (pos == 1) {
        deletefirst(head);
        return;
    }
     node *currnt = head;
     for(int i=1;currnt!=NULL&&i<pos-1;++i)
     {
        currnt=currnt->next;
     }
     if(currnt==NULL&&currnt->next==NULL)
     {
        cout << "Position out of bounds." << endl;
        return;
     }
     node *newnode11=currnt->next;
     currnt->next=currnt->next->next;
     delete newnode11;


}

void print(node * head)
{
    node * ptr=new node();
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main()
{
 node *head=new node();
 head=NULL;
 while(true)
 {
        cout << " 1 Input Element in List " << endl;
        cout << " 2 Insert At First" << endl;
        cout << " 3 Insert At Given Position " << endl;
        cout << " 4 Insert After Given value " << endl;
        cout << " 5 Insert In Given value " << endl;
        cout<<  " 6 Delete at last "<<endl;
        cout<<  " 7 Delete at fast "<<endl;
        cout<<  " 8 Delete at Position "<<endl;
        cout << " 4 Exit" << endl;
        cout << "Enter choise :";
     int ch;
     cin>>ch;
     switch (ch)
     {
       case 1:
       cout<<"Enter data :";
         int data;
         cin>>data;
         addnode(head,data);
         system("CLS");
         print(head);
        /* code */
        break;

        case 2:
        cout<<"Enter data :";
        int data1;
        cin>>data1;
        addfirst(head,data1);
        system("CLS");
        print(head);
          break;
       case 3:
       cout<<"Enter Data : ";
       int data2;
       cin>>data2;
       cout<<"Enter Position :";
       int pos;
       cin>>pos;
       addgivenposition(head,data2,pos);
       system("CLS");
       print(head);
        break;

        case 4:
        
       cout<<"Enter Data : ";
       int data3;
       cin>>data3;
       cout<<"Enter data value :";
       int to_find;
       cin>>to_find;
       insertasgivenvalue(head,data3,to_find);
       system("CLS");
       print(head);
       break;
      
      case 5:
        
       cout<<"Enter Data : ";
       int data4;
       cin>>data4;
       cout<<"Enter data value :";
       int to_find1;
       cin>>to_find1;
      insertasgivenvaluepos(head,data4,to_find1);
       system("CLS");
       print(head);
       break;

      case 6:
       deletefirst(head);
       system("CLS");
       print(head);
       break;
       
        case 7:
       deleteLast(head);
       system("CLS");
       print(head);
       break;

       case 8:
       cout<<"Enter Position : ";
       int pp;
       cin>>pp; 
       deleteatposition(head,pp);
       system("CLS");
       print(head);
       break;

     default:
        break;
     }
 }



return 0;
}