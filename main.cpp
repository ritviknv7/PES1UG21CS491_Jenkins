#include <iostream>
using namespace std;
bool issorted(int arr[],int n)
{
    for (int i=1;i<n;i++)
    {
        if (arr[i]<arr[i-1]) return false;
    }
    return true;
}
int main()
{
    int arr[]={1,2,3,34,5};
    bool result=issorted(arr,5);
    cout<<result<<endl;
}