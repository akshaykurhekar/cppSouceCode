#include<iostream>

using namespace std;

int main()
{
    cout << "Star reverse parten\n";

    for(int i=0; i<6; i++){
     for(int j=(6-i); j>0; j--){

        cout<<" * ";      
    }   
    cout<<"\n";
    }
    return 0;
}

// output

//  *  *  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  * 
//  *  *  * 
//  *  * 
//  * 
