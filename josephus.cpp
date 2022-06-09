#include<iostream>
using namespace std;

int josephus(int n,int k)
{
    if(n==1) return 0;

    return (josephus(n-1,k)+k)%n;
}

int main()
{
    int n,k;
    cout << "Enter the number of elements : "<<endl;
    cin >> n;
    cout << "Enter the kth value : "<<endl;
    cin >> k;
    cout<<"The Winner is : ";
    cout << josephus(n,k); //index position is starting from 0... to start it from 1 make (josephus(n,k)+1)
}