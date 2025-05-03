#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result ;
        vector<int> temp ;
        for(int i = 0 ; i < numRows ; i++)
        {
            if(i==0)
            {
                temp.push_back(1);
            }
            else if(i==1)
            {
                temp.push_back(1);
                temp.push_back(1);
            }
            else
            {
                int rowno = i - 1 ;
                int colno = 0 ;
                for(int no_of_elements = 0 ; no_of_elements<=i ; no_of_elements++)
                {
                    if(no_of_elements==0 || no_of_elements==i)
                    {
                        temp.push_back(result[rowno][colno]);
                    }
                    else
                    {
                        int no = result[rowno][colno]+result[rowno][colno+1];
                        temp.push_back(no);
                        colno++;
                    }
                }
            }

            result.push_back(temp);
            temp.clear();
        }

        return result ;
}

int main()
{
   
   vector<vector<int>> res = generate(10);
    for(int row = 0 ; row < res.size() ; row++)
    {
        for(int col = 0 ; col < res[0].size() ; col++)
        {
            cout << res[row][col] ;
        }
    }
   
}