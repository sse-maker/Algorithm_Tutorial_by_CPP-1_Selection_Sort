//
//  main.cpp
//  1_Selection_Sort
//
//  Created by 세광 on 2021/06/22.
//

#include <iostream>

using namespace std;

class SelectionSort {
public:
    void Ascending(int n, int *arr);
    void Decending(int n, int *arr);
    void print(int n, int *arr);
    
private:
    int min, max;
    int index;
};

int main() {
    int arr[10] = { 1, 3, 2, 4, 5, 8, 7, 6, 10, 9 };
    
    SelectionSort sort;
    
    sort.Ascending(10, arr);
    sort.print(10, arr);
    
    sort.Decending(10, arr);
    sort.print(10, arr);
}

void SelectionSort::Ascending(int n, int *arr) {
    for(int i = 0; i < n; i++) {
        min = INT_MAX;
        for(int j = i; j < 10; j++) { if(arr[j] < min) { min = arr[j]; index = j; } }
        swap(arr[i], arr[index]);
    }
}

void SelectionSort::Decending(int n, int *arr) {
    for(int i = 0; i < n; i++) {
        max = INT_MIN;
        for(int j = i; j < 10; j++) { if(arr[j] > max) { max = arr[j]; index = j; } }
        swap(arr[i], arr[index]);
    }
}

void SelectionSort::print(int n, int *arr) {
    for(int i = 0; i < n; i++) { cout << arr[i] << ' '; }
    cout << endl;
}
