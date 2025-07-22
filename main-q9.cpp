#include <iostream>
#include <ctime>
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

int main() {
    const int n = 10000;
    int v[n];
    for (int i = 0; i < n; i++) v[i] = n - i; 

    clock_t inicio = clock();
    selectionsort(n, v);
    clock_t fim = clock();

    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    cout << "Tempo de execucao: " << tempo << " segundos" << endl;
}

