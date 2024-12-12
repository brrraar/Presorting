#include <stdio.h>

// Fungsi untuk mengurutkan array menggunakan Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar elemen jika tidak dalam urutan yang benar
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Fungsi untuk mencari pasangan elemen dengan jumlah tertentu
void findPairWithSum(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    printf("Pasangan dengan jumlah %d:\n", target);
    int found = 0;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            printf("(%d, %d)\n", arr[left], arr[right]);
            found = 1;
            left++;
            right--;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    if (!found) {
        printf("Tidak ada pasangan ditemukan.\n");
    }
}

int main() {
    // Contoh array
    int arr[] = {5, 2, 8, 1, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    printf("Array sebelum diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Presorting menggunakan Bubble Sort
    bubbleSort(arr, n);

    printf("Array setelah diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Mencari pasangan dengan jumlah tertentu
    findPairWithSum(arr, n, target);

    return 0;
}
