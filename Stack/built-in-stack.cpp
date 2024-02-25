
#include <iostream>
#include<stack>
using namespace std;  
int main()
{
   stack<int> st; //int is type of stack and st is name for our stack 
   st.push(1);
   st.push(2);
   st.push(3);
   cout<<st.top()<<endl;
   st.push(4);
   st.push(7);
   cout<<st.top()<<endl;
   st.pop();
   st.pop();
   cout<<st.top()<<endl;
   cout<<st.empty()<<endl; //this is boolean for findin stack is empty or not

    return 0;
}