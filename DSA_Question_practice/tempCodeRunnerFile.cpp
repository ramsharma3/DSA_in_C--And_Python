int main() {
    // Write C++ code here
    int n ;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n]={};
    cout<<"Enter the elements : "<<endl;
    for (int i=0; i<n ; i++){
        cin>>arr[i];
    }
    bubble_sort( arr , n);
    cout<<"the sorted arr is : "<<endl;
    for(int j=0 ; j<n;j++){
        cout<<arr[j]<<" ";
    }

   

    return 0;
}