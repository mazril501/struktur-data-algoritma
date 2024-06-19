#include <iostream>
using namespace std;

// Fungsi untuk binary search pada larik terurut
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Jika elemen tengah sama dengan target, kembalikan indeksnya
        if (arr[mid] == target) {
            return mid;
        }

        // Jika elemen tengah lebih kecil dari target, cari di sebelah kanan
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // Jika elemen tengah lebih besar dari target, cari di sebelah kiri
        else {
            high = mid - 1;
        }
    }

    // Jika target tidak ditemukan
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 7, 10, 11, 13, 15, 17, 40};
    int target;
    int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Masukan angka yang di cari!" << endl;
	cin >> target;
    // Memanggil fungsi binary search
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        cout << "Elemen " << target << " ditemukan di indeks " << result << endl;
    } else {
        cout << "Elemen " << target << " tidak ditemukan dalam array" << endl;
    }

    return 0;
}

