#include <iostream>  
#include <algorithm>  
using namespace std;  

void sort2DArray(int n, int m, int array[10][10]) {  
    int totalElements = n * m;  
    int temp[100];  
    int k = 0;  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {  
            temp[k++] = array[i][j];  
        }  
    }  
    sort(temp, temp + totalElements);  
    k = 0;  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {  
            array[i][j] = temp[k++];  
        }  
    }  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {  
            cout << array[i][j] << " ";  
        }  
        cout << endl;  
    }  
}  

int main() {  
    int n, m;  
    cout << "Enter number of rows (n) and columns (m): ";  
    cin >> n >> m;  

    int array[10][10];  
    cout << "Enter the elements of the array:\n";  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {  
            cin >> array[i][j];  
        }  
    }  

    sort2DArray(n, m, array);  
    return 0;  
}
