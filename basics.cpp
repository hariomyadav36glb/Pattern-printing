#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int row=1;row<=n;row++)
  {
    for(int space =n-row;space>=1;space--)
    cout<<" ";
    for(int num1=row;num1<=2*row-1;num1++)
    cout<<num1;
    for(int num2=2*row-2;num2>=row;num2--)
    cout<<num2;
    cout<<endl;
  }
  
}






















