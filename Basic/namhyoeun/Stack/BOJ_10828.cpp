#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    stack<int> st;
    string str;
    
    for(int i=0; i<N; i++)
    {
        cin>>str;
        
        if(str=="push") {
            int n;
            cin>>n;
            st.push(n);
        }
        else if(str=="pop") {
            if(st.empty()) {
                cout<<"-1"<<endl;
            }
            else 
                cout<<st.top()<<endl;
                st.pop();
        }
        else if(str=="size") 
            cout<<str.size()<<endl;
        else if(str=="empty") {   //스택이 비어있으면 1, 아니면 0을 출력한다.
            if(st.empty()) { 
                cout<<"1"<<endl; }
            else {
                cout<<"0"<<endl; }
        }
        else if(str=="top") {
            if(str.empty()) {
                cout<<"-1"<<endl;}
            else {
                cout<<st.top()<<endl; }
        }     
            
            
    }


    return 0;
    
}
