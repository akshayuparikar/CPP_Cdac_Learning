#include<iostream>
using namespace std;

int large(int n){
    int l=0;
    while(n>0){
        int digit=n%10;
          if(digit>l){
            l=digit;
          }
        n=n/10;
    
    }
    return l;
}
int main(){
 int num;
 cout<<"Enter The Number";
 cin>>num;
 cout<<"Largest Digit is: "<<large(num);
 cout<<endl;

}