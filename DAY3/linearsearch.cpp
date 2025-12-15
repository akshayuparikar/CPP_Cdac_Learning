#include <iostream>
using namespace std;

int main()
{
    int size;                    
    cout << "Enter the size of the array: "; 
    cin >> size;                 

    int arr[size];              

    cout << "Enter " << size << " array elements are:" << endl; 
    for (int i = 0; i < size; i++) { 
        cin >> arr[i];         
    }                           

    cout << "Array elements are: "; 
    for (int i = 0; i < size; i++) { 
        cout << arr[i] << " ";  
    }                           

    cout << endl;    
    
    cout <<"Enter element to search by Linear Search";
    int key;
    cin>>key;   
    bool found = false; 
    for(int i=0;i<size;i++) {
        if(arr[i]==key) {
            found = true; 
            cout <<"Element found at index "<<i<<endl; 
            break; 
        }
    }
    if(!found) {
        cout << "Element not found in the array." << endl;
    }  
    return 0; 
}