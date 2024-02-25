#include <iostream>
#include<limits.h>
using namespace std;
class Stack{
private:
  int capacity;
  int *arr;
  int top;
public:
 Stack(int c){
     this->capacity=c;
     arr=new int[c]; //dynamic memory allocation here
     this->top=-1;
 } 
 void push(int data){
     if(this->top==this->capacity-1){
         cout<<"Stack overflow"<<endl;
         return;
     }
     this->top++;
     this->arr[this->top]=data;
 }
 int pop(){
     if(this->top==-1){
         cout<<"Stack underflow"<<endl;
         return INT_MIN;
     }
     this->top--;
 }
 int gettop(){
     if(this->top==-1){
         cout<<"Stack underflow"<<endl;
         return INT_MIN;
     }
     return this->arr[this->top];
 }
 bool isEmpty(){
     return this->top==-1;
 }
 int size(){
     return this->top+1;
 }
 bool isFull(){
     return this->top==this->capacity-1;
 }
};
int main()
{
   Stack st(4);
   st.push(20);
   st.push(30);
    st.push(220);
     st.push(90);
     cout<<st.gettop()<<endl;
     st.push(300); //this is condition for overflow
     st.pop();
     st.pop();
     cout<<st.gettop();
    return 0;
}