#include<iostream>

using namespace std;

int main()
{
    cout << "Read array from user \n";
    int n=2;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int arr[n]; 

    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    // cout<< &arr[1]; // &arr[0]
    cout << "Display element of array \n";

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}