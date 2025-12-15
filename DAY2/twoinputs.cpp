//Write a function to print all numbers between two inputs
#include <iostream>
using namespace std;

void twoinputs(int a,int b){
    a=a+1;
    
    for(int i=a;i<b;i++){
      cout<<i<<" ";
    }
}

int main()
{
    int a,b;
    cout<<"Enter First number";
    cin>>a;
    cout<<"Enter Second Number";
    cin>>b;
    twoinputs(a,b);
    cout<<endl;

}

