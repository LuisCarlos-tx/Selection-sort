#include <iostream>
using namespace std;

void selectionsort(int n, int v[]) {
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j)
            if (v[j] < v[min])
                min = j;
        swap(v[i], v[min]);
    }
}

void imprime(int v[], int n) {
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
}

int main() {
    int v[] = {6, 10, 8, 4, 2};
    int n = sizeof(v) / sizeof(v[0]);
    selectionsort(n, v);
    imprime(v, n);
}

