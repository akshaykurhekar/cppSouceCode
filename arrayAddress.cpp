#include<iostream>

using namespace std;

int main()
{
    
    int arr[5]={10,20,32,56,58}; 
    double a=15.12;
    cout << "Display AddressOfElement :: elementOfArray :: "<<sizeof(a)<<" \n";

    for(int i=0; i<5;i++){
        cout<<&arr[i]<<" :: "<<arr[i]<<"\n";
    }

    return 0;
}