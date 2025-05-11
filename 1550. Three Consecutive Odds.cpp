#include<iostream>
#include<vector>
using namespace std;

bool threeConsecutiveOdds(vector<int>& arr) {
        int findoddcount = 0 ;
        for(int i = 0 ; i < arr.size() ; i++)
        {
          if(findoddcount==3)
          {
            return true ;
          }
          else if(arr[i]%2!=0)
          {
            findoddcount++;
          }
          else if(arr[i]%2==0)
          {
            findoddcount = 0 ;
          }
        }

        if(findoddcount==3)
          {
            return true ;
          }
        return false;
    }

int main()
{
    vector<int> arr = {1,2,34,3,4,5,7,23,12};
    bool res = threeConsecutiveOdds(arr);
    cout << res << endl;

}