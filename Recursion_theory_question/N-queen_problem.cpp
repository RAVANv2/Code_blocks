#include<bits/stdc++.h>
using namespace std;

bool isSafe(int board[10][10],int i,int j,int n)
{
    // check for column
    for(int row=0;row<i;row++)
    {
        if(board[row][j]==1)
            return false;
    }

    // check for left diagonal
    int x=i;
    int y=j;
    while(x>=0 and y>=0)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        x--;
        y--;
    }

    // check for right diagonal
    x=i;
    y=j;
    while(x>=0 && y<n)
    {
        if(board[x][y]==1)
            return false;

        x--;
        j++;
    }

    // the coordinate is suited for queen placement
    return true;
}


bool find_path(int board[10][10], int i, int n)
{
    // Base Case
    if(i==n)
    {
        // conerting 0 and 1 board into Q and _ 
        char char_board[10][10];
        for(int var_i=0;var_i<n;var_i++)
        {
          for(int var_j=0;var_j<n;var_j++)
          {
            if(board[var_i][var_j]==1)
              char_board[var_i][var_j]='Q';
            else
              char_board[var_i][var_j]='_';
          }
        }

        // print path
        for(int var_i=0;var_i<n;var_i++)
        {
          for(int var_j=0;var_j<n;var_j++)
          {
            cout<<char_board[var_i][var_j]<<" ";
          }
          cout<<endl;
        }
        cout<<endl;

        return true;
    }

    // Recursive Case
    for(int j=0;j<n;j++)
    {
        if( isSafe(board,i,j,n) )
        {
             board[i][j]=1;
             bool nextQueen = find_path(board,i+1,n);

             if(nextQueen)
                return true;

             // Backtracking (Once you print the path of queen you have back track)
             board[i][j]=0;
        }
    }
    // Means their is no way to put queen in grid.
    return false;
}


int main()
{
    int n;
    cin>>n;

    int board[10][10] = {0};

    bool ans = find_path(board,0,n);
}
