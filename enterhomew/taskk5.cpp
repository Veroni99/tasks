#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;
    
    int matrix[m][n];  

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = -1;
        }
    }

    int num = 0; 
    int top = 0, bottom = m - 1, left = 0, right = n - 1; 

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            matrix[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom; ++i) {
            matrix[i][right] = num++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                matrix[i][left] = num++;
            }
            left++;
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
