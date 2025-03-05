#include <iostream>
#include <iomanip>  

int main() {
    int m, n;

    std::cout << "Введіть кількість рядків (m) і стовпців (n): ";
    std::cin >> m >> n;

    if (m <= 0 || n <= 0 || m > 100 || n > 100) {
        std::cout << "Розміри масиву повинні бути в межах 0 ≤ m, n ≤ 100\n";
        return 1;
    }
    
    int array[100][100]; 
    int currentNumber = 0;

    for (int i = 0; i < m; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j) {
                array[i][j] = currentNumber++;
            }
        } else {
            for (int j = n - 1; j >= 0; --j) {
                array[i][j] = currentNumber++;
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << std::setw(4) << array[i][j];
        }
        std::cout << "\n";
    }

    return 0;
}
