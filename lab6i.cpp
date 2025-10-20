#include <iostream>
#include <vector>
using namespace std;

void merge(vector<char>& arr, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<char> L(n1), R(n2);

    for(int i = 0; i<n1; i++){
        L[i] = arr[left + i];
    }
    for(int j = 0; j<n2; j++){
        R[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0; 
    int k = left;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        } else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(vector<char>& arr, int left, int right){
    if(left < right){
        int mid = left + (right - left)/2;

        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void printarr(vector<char>& arr){
    for(char num : arr){
        cout << num;
    }
    cout << '\n';
}

int main(){
    vector<char> arr;
    char a;
    while(cin >> a){
        arr.push_back(a);
    }
    mergesort(arr, 0, arr.size() - 1);
    printarr(arr);
    return 0;
}