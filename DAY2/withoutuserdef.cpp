#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout<<"Enter Two Number\n";
    cin>>num1>>num2;
    if(num1>num2){
    cout<<"Number: " << num1 << " is Greater";
    }
    else
    cout<<"Number:" << num2 << " is Greater";
    if(num1>10){
    int sum=num1+num2;
    cout<<"\nSum Of 2 digits:" << sum;
    }
    else
    cout<<"You can't perform Opeartion because input num1 is lesser than 10";
    cout<<endl;
    return 0;


}