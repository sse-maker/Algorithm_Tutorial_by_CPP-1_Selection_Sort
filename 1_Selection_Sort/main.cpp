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
    SelectionSort();
    ~SelectionSort();
    
    void Ascending();
    void Decending();
    void Print();
    
private:
    int n;
    int *arr;
    int min, max;
    int index;
};

int main() {
    SelectionSort *sort = new SelectionSort();
    sort->Ascending();
    sort->Print();
    sort->Decending();
    sort->Print();
    delete sort;
}

SelectionSort::SelectionSort() : arr(NULL) {
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

SelectionSort::~SelectionSort() {
    delete [] arr;
    arr = NULL;
}

void SelectionSort::Ascending() {
    for (int i = 0; i < n; i++) {
        min = INT_MAX;
        for (int j = i; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}

void SelectionSort::Decending() {
    for (int i = 0; i < n; i++) {
        max = INT_MIN;
        for (int j = i; j < n; j++) {
            if (arr[j] > max) {
                max = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}

void SelectionSort::Print() {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
