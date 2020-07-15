#include<bits/stdc++.h>
using namespace std;

bool find_path(char maze[20][20], int sol[20][20], int i, int j, int m, int n)
{
    // Base Case
    if(i==m and j == n)
    {
        sol[i][j]=1;
        //printing the path
        for(int var_i=0; var_i<=m;var_i++)
        {
            for(int var_j=0; var_j<=n;var_j++)
            {
                cout<<sol[var_i][var_j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }

    if(i>m or j>n) return false;

    if(maze[i][j]=='X') return false;

    //Recursive case
    // Assuming path is avialable
    sol[i][j]=1;

    // If right block is avialable
    bool right_path = find_path(maze,sol,i+1,j,m,n);
    // If down path avialable
    bool down_path = find_path(maze,sol,i,j+1,m,n);

    // Backtracking
    sol[i][j]=0;

    if(right_path or down_path)
        return true;

    return false;
}


int main()
{
    char maze[20][20] = {"0000",
                        "0000",
                        "0000",
                        "0000",
                    };

    int sol[20][20] = {0};
    int n = 4;
    int m = 4;

    bool ans = find_path(maze,sol,0,0,m-1,n-1);
}
