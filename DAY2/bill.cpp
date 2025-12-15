/*Write functions for:Reading units
Calculating bill based on slabs:0–100 → ₹3/unit 101–200 → ₹4.5/unit,,200 → ₹6/unit
Adding fixed charges,Printing bill.*/

#include <iostream>
using namespace std;

int main(){
int unit;
cout<<"Enter your Bill units:";
cin>>unit;
cout<<"Total Bill for user of unit:"<<unit<<"is rupees:"<<+bill(unit);

}

void bill(int unit){
    float totalbill=0;

    if(unit<=100){
        totalbill=3*unit;
    }
    if(unit>100 && unit<=200){
        totalbill=4.5*unit;
    }
    else
    totalbill=6*unit;
 
    cout<<"Total Bill"<<totalbill;
}

