//7. Cyclically rotate an array by one
//User function Template for C++

void rotate(int arr[], int n)
{
    for(int i=0;i<n;i++){
        swap(arr[i],arr[n-1]);
    }
}