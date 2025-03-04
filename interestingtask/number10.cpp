#include <iostream>

#define MAX_N 20 

bool isMagicVector(int arr[], int N) {
    int sum = 0, product = 1;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    return sum == product;
}

void findMagicVectors(int arr[], int N, int index, int minValue) {
    if (index == N) { 
        if (isMagicVector(arr, N)) {
            for (int i = 0; i < N; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
        return;
    }

 
    for (int i = minValue; i <= 2 * N; i++) { 
        arr[index] = i;
        findMagicVectors(arr, N, index + 1, i); 
    }
}

int main() {
    int N;
    std::cout << "Enter the N: ";
    std::cin >> N;

    if (N <= 0 || N > MAX_N) {
        std::cout << "N must be a natural number " << MAX_N << ")!" << std::endl;
        return 1;
    }

    int arr[MAX_N] = {1}; 
    std::cout << "Magic vector of the lenght " << N << ":" << std::endl;
    findMagicVectors(arr, N, 0, 1);

    return 0;
}

