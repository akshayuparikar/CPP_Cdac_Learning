//Write a function to print all numbers between two inputs.
#include <iostream>
using namespace std;        
void printNumbers(int a, int b){
    for(int i=a; i<=b; i++){
        cout<<i<<" ";
    }
}
    int main()
{
    int a, b;
    cout<<"Enter the start number:\n";
    cin>>a;
    cout<<"Enter the end number:\n";
    cin>>b;
    
    cout<<"Numbers between "<< a <<" and "<< b <<" are: ";
    printNumbers(a,b);
    cout<<endl;
}
