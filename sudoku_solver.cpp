#include<bits/stdc++.h>
using namespace std;

bool isSafe(int mat[9][9], int i, int j, int number, int n)
{
    // Checking for row and column
    for(int row=0;row<n;row++)
    {
        if(mat[row][j]==number or mat[i][row]==number)
            return false;

    }

    // checking the number in current sub grid
    int rn = sqrt(n);
    int sx = (i/rn)*rn;
    int sy = (j/rn)*rn;

    for(int x = sx; x < (sx+rn); x++)
    {
        for(int y = sy; y < (sy+rn); y++)
        {
            if(mat[x][y]==number)
                return false;
        }
    }
    return true;

}


bool solveSudoku(int mat[9][9], int i, int j, int n)
{
    // Base Case
    if(i==n)
    {
        //print matrix
        for(int x=0;x<n;x++)
        {
            for(int y=0;y<n;y++)
            {
                cout<<mat[x][y]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    // if current cell is not empty
    if(mat[i][j]!=0)
        return solveSudoku(mat,i,j+1,n);

    // if we are at the corners
    if(j==n)
        return solveSudoku(mat,i+1,0,n);

    // Recursive Case
    for(int number=1;number<=n;number++)
    {
        if( isSafe(mat,i,j,number,n) )
        {
            // Assume it will solve sudoku
             mat[i][j]=number;

             bool is_over = solveSudoku(mat,i,j+1,n);

             if(is_over)
                return true;
        }
    }

    // Backtrack
    mat[i][j] = 0;
    return false;
}


int main()
{
    int mat[9][9] =
            {
                {5,3,0,0,7,0,0,0,0},
                {6,0,0,1,9,5,0,0,0},
                {0,9,8,0,0,0,0,6,0},
                {8,0,0,0,6,0,0,0,3},
                {4,0,0,8,0,3,0,0,1},
                {7,0,0,0,2,0,0,0,6},
                {0,6,0,0,0,0,2,8,0},
                {0,0,0,4,1,9,0,0,5},
                {0,0,0,0,0,0,0,7,9}
            };

    int n=9;

    bool ans = solveSudoku(mat,0,0,n);
    cout<<ans;
}
