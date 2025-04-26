#include<iostream>
#include<vector>
using namespace std;

int firstBadVersion(int n) {
    int start = 1 ;
    int end = n ;
    int ans = 1 ;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        
        /*API Call Decision*/
        // if(isBadVersion(mid))
        // {
        //     ans = mid ;
        //     end = mid - 1 ;
        // }
        // else
        // {
        //     start = mid + 1 ;
        // }
    }
    
    return ans;
}

int main()
{
    cout << firstBadVersion(165) << endl;
}