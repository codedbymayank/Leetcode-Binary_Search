#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool checkzeros(int row , int col , vector<vector<int>> matrix)
{
    for(int r = 0 ; r < matrix.size() ; r++)
    {
        if(r==row)
        {
            for(int c = 0 ; c < matrix[0].size() ; c++)
            {
                if(matrix[r][c]==0)
                {
                    return true ;
                }
            }
        }
        else
        {
            if(matrix[r][col]==0)
            {
                return true ;
            }
        }
       
    }

    return false;
}

void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> copyvec(matrix);
        int row_size = copyvec.size() ;
        int col_size = copyvec[0].size() ;
        for(int r = 0 ; r < row_size ; r++)
        {
            for(int c = 0 ; c < col_size ; c++)
            {
                int no = copyvec[r][c] ;
                if(checkzeros(r , c , copyvec))
                {
                    matrix[r][c] = 0 ;
                }
            }
        }

}

int main()
{
   vector<vector<int>> matrix = {
    {0,1,2,0},
    {3,4,5,2},
    {1,3,1,5}
    };
   setZeroes(matrix);

   for(int i = 0 ; i < matrix.size() ; i++)
   {
        for(int j = 0 ; j < matrix[0].size() ; j++)
        {
            cout << matrix[i][j] << "  " ;
        }

        cout << endl;
   }

}