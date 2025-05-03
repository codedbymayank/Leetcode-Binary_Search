#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count_one = 0 ;
    int onecount = 0 ;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(nums[i]==0)
        {
            count_one = max(count_one,onecount);
            onecount = 0 ;
        }
        else
        {
            onecount++;
        }
    }
    
    count_one = max(count_one,onecount);
    return count_one ;
}

int main()
{
    vector<int> v = {1,1,0,1,1,1};
    int res = findMaxConsecutiveOnes(v);
    cout << res << endl;
}