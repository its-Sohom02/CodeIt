#include<iostream>
using namespace std;

bool isPalindrome(int arr[], int left, int right)
{
    if(left>=right) return true;

    if(arr[left] == arr[right]) return isPalindrome(arr,left+1,right-1);
    else return false;
    
}

int main()
{
    int arr[20] = {1,2,3,4,2,1};
    cout<<isPalindrome(arr,0,5);
}