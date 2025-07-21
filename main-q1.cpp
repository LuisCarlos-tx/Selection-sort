#include <iostream>
using namespace std;

void selectionsort_rec(int v[], int n, int i = 0) {
    if (i >= n - 1) return; 

    int min = i;
    for (int j = i + 1; j < n; ++j) {
        if (v[j] < v[min]) {
            min = j;
        }
    }

    if (min != i) {
        int temp = v[i];
        v[i] = v[min];
        v[min] = temp;
    }

    selectionsort_rec(v, n, i + 1);
}

void imprime(int v[], int n) {
    for (int i = 0; i < n; ++i)
        cout << v[i] << " ";
    cout << endl;
}

int main() {
    int v[] = {65, 25, 12, 22, 11};
    int n = sizeof(v) / sizeof(v[0]);

    selectionsort_rec(v, n);
    imprime(v, n);

    return 0;
}

