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

/*************************Number-2*****************************/
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
        while(col<=row){
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

*
**
***
****
*****

*/


/*************************Number-3*****************************/
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
        while(col<=row){
            cout<<row;
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

11111
22222
33333
44444
55555

*/



/*************************Number-4*****************************/
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
        while(col<=row){
            cout<<col;
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

12345
12345
12345
12345
12345

*/



/*************************Number-5*****************************/
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row=1;
    int k=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<k;
        cout<<"     ";
            col=col+1;
            k=k+1;
        }
        cout<<endl;
        row=row+1;
    }

    getch();
}

//input : 5
/*
output :

1     2     3     4     5
6     7     8     9     10
11     12     13     14     15
16     17     18     19     20
21     22     23     24     25


*/