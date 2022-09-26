/*************************Number-1*****************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row=1;

    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

    getch();
}


//input : 5
/*
output :

*****
*****
*****
*****
*****

*/

