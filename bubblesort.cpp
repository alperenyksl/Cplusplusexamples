#include <iostream> 
using namespace std;

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    cout << "Enter the number of elements: ";
    int N;
    cin >> N;

    int arr[N];
    cout << "Enter the elements: ";
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    bubbleSort(arr, N);

    cout << "Sorted array: \n";
    printArray(arr, N);

    return 0;
}
//Bubble Sort bir O(n²) algorithmasidir. Cunku algorithma calisirken her veri (n kadar) icin bütün verileri analiz eder( n kadar).
// Yani n elemanin her biri icin n islem yapar.
//Dolayisiyla n*n'den n² adet islem yapilir.
