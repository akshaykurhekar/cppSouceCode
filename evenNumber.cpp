#include<iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "Enter Staring Number X = ";
    cin>>x;
    cout << "Enter End Number Y = ";
    cin>>y;
    cout << "Find even number form the given range "<<x<<" - "<<y<<"\n";

    for(int i=x; i<=y; i++){
        
        if(i%2 == 0){
            cout<<i;
        }
        cout<<" ";
    }
    cout<<"\n";
    return 0;
}


