#include <iostream>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int sort = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > sort) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = sort;
    }
}

int main() {
    const int tam = 5;
    int arr[tam] = {13, 23, 55, 84, 64};

    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    insertionSort(arr, tam);

    for (int i = 0; i < tam; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
