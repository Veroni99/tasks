#include <iostream>
#include <algorithm>

#define MAX_N 100000 

using namespace std;

int findMedian(int arr[], int N) {
    sort(arr, arr + N); 
    return arr[N / 2];  
}

int main() {
    int N;
    cout << "Enter the number of cities: ";
    cin >> N;

    if (N <= 0 || N > MAX_N) {
        cout << "Incorrect number N!" << endl;
        return 1;
    }

    int x[MAX_N], y[MAX_N];

    cout << "Enter coordinates of cities (x y):" << endl;
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    int capitalX = findMedian(x, N);
    int capitalY = findMedian(y, N);

    cout << "Approximate location of the cities: (" << capitalX << ", " << capitalY << ")" << endl;

    return 0;
}

