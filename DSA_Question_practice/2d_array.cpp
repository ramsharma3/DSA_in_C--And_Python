#include <iostream>
using namespace std;

void input(int **arr, int n , int m ){
    for (int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++ ){
            cout<<"\nEnter an element of "<< i << "th row " << j << "th column  : ";
            cin>>arr[i][j];
        }

    }
}
void display(int **arr[] , int n , int m){
    for (int i = 0 ; i < n ; i++){
        for(int j =0 ; j< m ; j++){
            cout<<arr[n][m];
        }
    }
}
bool search_element(int **arr[], int n , int m,   int element){
    for (int i = 0 ; i <= n-1 ; i++){
        for(int j =0 ; j<= m-1 ; j++){
            if(arr[i][j]==element){
                return true; 
            }
            else{
                return false;
            }
        }
    }
}
int main(){
    int n;
    int m , el;
    int **arr[] = new int (n)(m);
    cout<<"Enter the size of 2D array 'n x m' : ";
    cin>>n>>m;
    cout<<"Enter element in the array : "<<endl;
    /*for (int i = 0 ; i <= n-1 ; i++){
        for(int j =0 ; j<= n-1 ; j++){
            cin>>arr[n][m];
        }
    }*/
    input(arr[] , n , m);
    /*
    for (int i = 0 ; i <= n-1 ; i++){
        for(int j =0 ; j<= n-1 ; j++){
            cout<<arr[n][m];
        }
    }*/
    cout<<"Your array is : "<<endl;
    display(arr[] , n , m);

    cout<<"Enter an element to find : ";
    cin>>el;
    bool ans = search_element(arr[] , n,m , el);
    if(ans){
        cout<<"Element found!!"<<endl;

    }
    else {
        cout<<"Element not found!!"<<endl;
    }



}