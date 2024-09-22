#include <iostream>  
using namespace std;  

void rotateImage(int n, int m, int image[10][10]) {  
    int rotated[10][10];  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {  
            rotated[j][n - 1 - i] = image[i][j];  
        }  
    }  
    for (int i = 0; i < m; i++) {  
        for (int j = 0; j < n; j++) {  
            cout << rotated[i][j] << " ";  
        }  
        cout << endl;  
    }  
}  

int main() {  
    int n, m;  
    cout << "Enter number of rows (n) and columns (m): ";  
    cin >> n >> m;  

    int image[10][10];  
    cout << "Enter the elements of the image matrix:\n";  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {  
            cin >> image[i][j];  
        }  
    }  

    rotateImage(n, m, image);  
    return 0;  
}
