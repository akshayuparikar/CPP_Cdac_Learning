// display matrix a[i][j] a[2][3]

#include <iostream>
using namespace std;    

int main() {                     
    int rows, cols;                    
    cout << "Enter the number of rows and columns of the matrix: "; 
    cin >> rows >> cols;                 

    int matrix[rows][cols];              

    cout << "Enter elements of the matrix:" << endl; 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];         
        }
    }                           

    cout << "Matrix elements are: " << endl; 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";  
        }
        cout << endl; // New line after each row
    }                           

    return 0;                   
}