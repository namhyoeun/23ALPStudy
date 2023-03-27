#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    stack<int> st;
    
    for (int i=0; i<N; i++)
    {
        int n;
        cin>>n;
        
        if(n!=0)
            st.push(n);
        else 
            st.pop();
    }
    int s=st.size();
    int sum=0;
    for(int j=0; j<s; j++) {
        sum+=st.top();
        st.pop();
        
    }
        
    cout<<sum<<endl;

    return 0;
}
