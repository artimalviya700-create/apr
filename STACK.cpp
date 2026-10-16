#include<iostream>
#include<vector>
#include<stack>
 using namespace std ;
// class Stack{
// vector<int>v;//list<int>ll
// public:
// void push(int val){
//     v.push_back(val);//ll.push_front(val);
// }
// void pop(){
//     v.pop_back();//ll.pop_front(val);
// }
// int top(){
//  return v[v.size()-1];//ll.front()// last element
// }
// bool empty(){
//      return v.size()==0;//ll.size()==0;
// }
// };
// int main(){
// Stack s;//using stack stl library satck <int > s;
// s.push(10);
// s.push(20);
// s.push(30);

// while (!s.empty())
// { cout<< s.top() <<" ";
//     s.pop();
// }
// cout<<endl;
// return 0;
// }
// #define n 100//using array
// class Stack{
//     int* arr;
//     int top;
// public:
//     Stack(){
//         arr = new int[n];
//         top = -1;
//     }
//     void push(int val){
//         if(top ==n-1){
//             cout<<"stack overflow"<<endl;
//             return;
//         }
//             top++;
//             arr[top] = val;
        
//     }
//     void pop(){
//     if(top==-1){
//         cout<<"no element to pop"<<endl;
//         return;
//     }
//     top--;
//     }
//     int Top(){
//         if(top==-1){
//         cout<<"no element in stack"<<endl;
//         return -1;
//     }
//      return arr[top];
//     }


//     bool empty(){
//         return top==-1;
//     }
    
// };
// int main(){

//     Stack s;
//     s.push(1);
//     s.push(2);
//     s.push(4);
//     while (!s.empty())
// {
//      cout<< s.Top() <<" ";
//      s.pop();
// }
// cout<<endl;
// return 0;
// }
void reverseSentence(string s){
    stack<string>st;
    for(int i=0;i<s.length();i++){
        string word=" ";
        while(s[i]!=' '&&i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);

    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    } cout<<endl;
}
int main(){
    string s="hey, how are you going ";
    reverseSentence(s);
}
// STACK USING ARRAY ???/
#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push(int x)
{
    if(top == 4)
        cout << "Stack Overflow\n";
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if(top == -1)
        cout << "Stack Underflow\n";
    else
    {
        cout << "Deleted: " << stack[top] << endl;
        top--;
    }
}

void peek()
{
    if(top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Top: " << stack[top] << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);

    peek();
    pop();
    peek();

    return 0;
}