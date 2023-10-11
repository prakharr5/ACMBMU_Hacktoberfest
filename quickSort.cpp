#include <iostream>
using namespace std;

int partition(int M[], int start, int end){
    int pivot = M[start];
    int i = start + 1;
    int j = end;
    while (i <= j){
        if (M[i] <= pivot){
            i++;
        }
        else if (M[j] > pivot){
            j--;
        }
        else{
            swap(M[i], M[j]);
        }
    }
    swap(M[start], M[j]);
    return j; 
}

void quicksort(int M[], int start, int end){
    if (start < end){
        int pivot_idx = partition(M, start, end);
        quicksort(M, start, pivot_idx - 1);
        quicksort(M, pivot_idx + 1, end);
    }
}

int main(){
    int M[] = { 5, 9, 2, 8, 1, 7, 4, 3, 6 };
    int n = sizeof(M) / sizeof(M[0]);
    
    quicksort(M, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++){
        cout << M[i] << " ";
    }
    return 0;
}
