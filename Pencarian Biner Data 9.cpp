#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
	cout << "~ Tugas Pertemuan ke-13 Pencarian Biner Mencari Data 9 ~" << endl;
	cout << "======================================================================" << endl;
	cout << "Nama          : Sella Andira Bintang Wulandari" << endl;
  	cout << "NIM           : 5520122013" << endl;
   	cout << "Program Studi : Informatika" << endl;
   	cout << "======================================================================" << endl;
   	
    int arr[] = {2, 5, 6, 9, 10, 12, 15, 18, 20, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int index = binarySearch(arr, n, target);
    if (index == -1) {
        cout << "Data tidak ditemukan" << endl;
    } else {
        cout << "Data ditemukan pada indeks ke-" << index << endl;
        cout << "--------------------------------" << endl;

    }
    return 0;
}
