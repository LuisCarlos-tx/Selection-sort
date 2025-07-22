#include <iostream>
using namespace std;

void selectionsort_decrescente(int v[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (v[j] > v[maxIndex]) {
                maxIndex = j;
            }
        }
        
        int temp = v[i];
        v[i] = v[maxIndex];
        v[maxIndex] = temp;
    }
}

void imprime(int v[], int n) {
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}

int main() {
    int v[] = {4, 1, 7, 3, 9};
    int n = sizeof(v) / sizeof(v[0]);

    selectionsort_decrescente(v, n);

    cout << "Ordenado (decrescente): ";
    imprime(v, n);

    return 0;
}

