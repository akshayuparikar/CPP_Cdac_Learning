#include <iostream>
using namespace std;

int grade(int mark){
    if(mark>=90)
        return 'A';
    else if(mark>=70 && mark<90)
        return 'B';
    else if(mark>=50 && mark<70)
        return 'C';
    else if(mark>=40 && mark<50)
        return 'D';
    else
        return 'F';
}
int main()
{
    int mark;
    cout<<"Enter the mark:\n";
    cin>>mark;
    
    char studentGrade= grade(mark);
    cout<<"The grade for mark "<< mark <<" is: " <<studentGrade<<endl; 
}   