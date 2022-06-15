// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int chocolates(int arr[], int n);


int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << chocolates(arr, n);
        cout << endl;
        
    }

}
// } Driver Code Ends

int result(int arr[], int i, int j)
{
    if(arr[i] == arr[j] && i-j==0) return arr[i];
    
    if(arr[i] <= arr[j]) j--;
    else i++;
    result(arr,i,j);
}
int chocolates(int arr[], int n)
{
    // Complete the function
    int i=0;
    int j=n-1;
    
    return result(arr,i,j);
}
