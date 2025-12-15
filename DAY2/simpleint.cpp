#include <iostream>
using namespace std;

float si(int p, float r, int t){
    int si;
    si=(p*r*t)/100;
    return si;
}

int main()
{
    int p;
    float r;
    int t;
    cout<<"Enter Principal Amount:\n";
    cin>>p;
    cout<<"Enter Rate:\n";
    cin>>r;
    cout<<"Enter Time:\n";
    cin>>t;
    
    float simpleinterest= si(p,r,t);
    cout<<"Simple Interest of"<< p <<" "<< r <<" "<< t <<" "<<"is:" <<simpleinterest<<endl; 
}