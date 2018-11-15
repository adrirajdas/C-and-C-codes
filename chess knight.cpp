#include <iostream>
#include <iomanip>

using namespace std;

void knight ( int startx, int starty, int n, int p[][5], int used [][5], int &count);

int main ( )
{
    const int n = 5; // no. of cloumns and rows
    int startx = 0;
    int starty = 0;
    int p[5][5];
    int used[5][5];
    int count = 1;

    int i= 0;
    int j = 0;

    //initializing the array
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            p[i][j] = 0;
            used [i][j] = 0;
        }
    }

    //outputting the initialized array.. 
        i=0;
        while ( i< 5)
        {
            for ( j = 0; j < 5; j++)
            {
                cout << setw(3) << p[i][j];             
            }
            i++;
            cout << endl;
        }
        knight (startx,starty,n,p,used,count);

    return 0;
}

void knight ( int x, int y, int n, int p[][5], int used [][5], int &count)
{

        int i = 0;

    //knight (x,y,n,p,used,count)
    for ( i = 0; i < n*n; i++)
    {
        if ( used [x][y] == 0 )
        {
            used[x][y] = 1; // mark it used;
            p[x][y] += count; //inserting step no. into the solution

            //go for the next possible steps;

            //move 1
            //2 squares up and 1 to the left
            if (x-1 < 0 && y+2 < n && p[x-1][y+2] == 0)
            {   
                used[x-1][y+2] = 1;
                p[x-1][y+2] += count;
                knight (x-1,y+2,n,p,used,count);
                used[x-1][y+2] = 0;
            }

            //move 2
            //2 squares up and 1 to the right
            if ( x+1 < n && y+2 < n && p[x+1][y+2] == 0 )
            {
                used[x+1][y+2] = 1;
                p[x+1][y+2] += count;
                knight (x+1,y+2,n,p,used,count);
                used[x+1][y+2] = 0;
            }

            //move 3
            //1 square up and 2 to the right
            if ( x+2 < n && y+1 < n && p[x+2][y+1] == 0 )
            {
                used[x+2][y+1] = 1;
                p[x+2][y+1] += count;
                knight (x+2,y+1,n,p,used,count);
                used[x+2][y+1] = 0;
            }

            //move 4
            //1 square down and 2 to the right
            if ( x+2 < n && y-1 < n && p[x+2][y-1] == 0 )
            {
                used[x+2][y-1] = 1;
                p[x+2][y-1] += count;
                knight (x+2,y-1,n,p,used,count);
                used[x+2][y-1] = 0;
            }

            //move 5
            //2 squares down and 1 to the right
            if ( x+1 < n && y-2 < n && p[x+1][y-2] == 0 )
            {
                used[x+1][y-2] = 1;
                p[x+1][y-2] += count;
                knight (x+1,y-2,n,p,used,count);
                used[x+1][y-2] = 0;
            }

            //move 6
            //2 squares down and 1 to the left
            if ( x-1 < n && y-2 < n && p[x-1][y-2] == 0 )
            {
                used[x-1][y-2] = 1;
                p[x-1][y-2] += count;
                knight (x-1,y-2,n,p,used,count);
                used[x-1][y-2] = 0;
            }

            //move 7
            //1 square down and 2 to the left
            if ( x-2 < n && y-1 < n && p[x-2][y-1] == 0 )
            {
                used[x-2][y-1] = 1;
                p[x-2][y-1] += count;
                knight (x-2,y-1,n,p,used,count);
                used[x-2][y-1] = 0;
            }

            //move 8
            //one square up and 2 to the left
            if ( x-2 < n && y+1< n && p[x-2][y+1] == 0 )
            {
                used[x-2][y+1] = 1;
                p[x-2][y+1] += count;
                knight (x-2,y+1,n,p,used,count);
                used[x-2][y+1] = 0;
            }
        }
    }

    if ( x == n-1 && y == n-1)
    {
        while ( i != n)
        {
            for ( int j = 0; j < n; j++)
                cout << setw(3) << p[i][j];
            i++;
        }
    }
}
