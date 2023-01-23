/*************************Number-1*****************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

*****
*****
*****
*****
*****

*/

/*************************Number-2*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

*
**
***
****
*****

*/

/*************************Number-3*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

11111
22222
33333
44444
55555

*/

/*************************Number-4*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

12345
12345
12345
12345
12345

*/

/*************************Number-5*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    int k = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << k;
            cout << "     ";
            col = col + 1;
            k = k + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

1     2     3     4     5
6     7     8     9     10
11     12     13     14     15
16     17     18     19     20
21     22     23     24     25

*/

/*************************Number-6*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row + col - 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

1
23
345
4567
56789

*/

/*************************Number-7*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row - col + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

1
21
321
4321
54321

*/

/*************************Number-8*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + row - 1;
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

AAAAA
BBBBB
CCCCC
DDDDD
EEEEE

*/

/*************************Number-9*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + col - 1;
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

ABCDE
ABCDE
ABCDE
ABCDE
ABCDE

*/

/*************************Number-10*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    int k = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + k - 1;
            cout << ch;
            col = col + 1;
            k = k + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

ABCDE
FGHIJ
KLMNO
PQRST
UVWXY

*/

/*************************Number-11*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + row + col - 2;
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

ABCDE
BCDEF
CDEFG
DEFGH
EFGHI

*/

/*************************Number-12*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + row - 1;
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

A
BB
CCC
DDDD
EEEEE

*/

/*************************Number-13*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + row + col - 2;
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

A
BC
CDE
DEFG
EFGHI

*/

/*************************Number-14(Alternative of Number-7)*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int start = row;
        while (col <= row)
        {
            cout << start;
            col = col + 1;
            start = start - 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

1
21
321
4321
54321

*/

/*************************Number-15(Alternative of Number-13)*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char start = 'A' + row - 1;
        while (col <= row)
        {
            cout << start;
            col = col + 1;
            start++;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

A
BC
CDE
DEFG
EFGHI

*/

/*************************Number-16*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char start = 'A' + n - row;
        while (col <= row)
        {
            cout << start;
            col = col + 1;
            start++;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

E
DE
CDE
BCDE
ABCDE

*/

/*************************Number-17*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        // for spaces
        char space = n - row + 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        // for asterisks
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

    *
   **
  ***
 ****
*****

*/

/*************************Number-18*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // for spaces
        int space = 1;

        while (space <= row - 1)
        {
            cout << " ";
            space++;
        }

        // for asterisks
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

*****
 ****
  ***
   **
    *

*/

/*************************Number-19*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // for spaces
        int space = n - row;

        while (space)
        {
            cout << " ";
            space--;
        }

        // for first triangle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }

        // for first triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            col = col + 1;
            start--;
        }
        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

    1
   121
  12321
 1234321
123454321

*/

/*************************Number-20*****************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // for spaces
        int col = n - row + 1;
        int k = 1;
        while (col)
        {
            cout << k;
            col--;
            k++;
        }

        // for first triangle
        int stars = 0;
        while (stars <= row - 2)
        {
            cout << "*";
            stars++;
        }
        // for first triangle
        int stars1 = 0;
        while (stars1 <= row - 2)
        {
            cout << "*";
            stars1++;
        }

        // for spaces
        int col1 = n - row + 1;

        while (col1)
        {
            cout << col1;
            col1--;
        }

        cout << endl;
        row = row + 1;
    }

    getch();
}

// input : 5
/*
output :

1234554321
1234**4321
123****321
12******21
1********1

*/