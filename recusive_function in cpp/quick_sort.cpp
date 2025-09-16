#include <iostream>
using namespace std;
//it is not working properly check it after few time for now you are not understand it properly

int partion(int *arr , int s , int e){
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s+1 ; i<=e ; i++){
        if(pivot >= arr[i]){
            cnt++;
        }
    }
    int c = s + cnt;
    swap(arr[s] , arr[cnt]);
    int i = s;
    int j = e;
    while(i < c && j > c){
        while(arr[i] < arr[c]){
            i++;
        }
        while(arr[j] > arr[c]){
            j--;
        }
        if(i < c && j > c){
            swap(arr[i], arr[j]);
            i++, j--;
        }
    }
    return c;

}
int partition(int *arr, int s, int e) {
    int pivot = arr[s];
    int i = s + 1;
    int j = e;
    while (i <= j) {
        while (i <= j && arr[i] <= pivot) {
            i++;
        }
        while (i <= j && arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    swap(arr[s], arr[j]);
    return j;
}

void quick_sort(int *arr ,  int s , int e){
    if(s >= e){
        return;
    }



    int p = partition(arr , s , e);

    //left part
    quick_sort(arr , s , p-1);

    //right part
    quick_sort(arr , p+1 , e);
}

int main(){
    int arr[5] = {5,4,3,2,1};
    quick_sort(arr , 0 , 4);
    cout<<"Sorted array is : "<<endl;
    for ( int i = 0 ; i <= 4 ; i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}

