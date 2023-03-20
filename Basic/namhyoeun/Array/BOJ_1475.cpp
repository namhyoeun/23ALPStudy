#include <iostream>
#include <string>
using namespace std;

int main()
{
    string RoomNumber;
    cin>>RoomNumber;
    
    int arr[10]={0,};
    for (int i=0; i<RoomNumber.length(); i++)
    {
        arr[RoomNumber[i]-48]+=1;
    }
    
    int sixnine=(arr[6]+arr[9]+1)/2;
    arr[6]=sixnine;
    arr[9]=sixnine;
    int max=arr[0];
    for (int j=1; j<10; j++)
    {
        if (max<arr[j]) 
        {
            max=arr[j];
        }
    }
    cout<<max<<endl;
    
    return 0;
}
