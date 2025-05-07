#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
    vector<int> zero;
    vector<int> one ;
    vector<int> two ;

    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(nums[i]==0)
        {
            zero.push_back(0);
        }
        else if(nums[i]==1)
        {
            one.push_back(1);
        }
        else
        {
            two.push_back(2);
        }

    }

    vector<int> res ;

    for(auto val : zero)
    {
        res.push_back(val);
    }

    for(auto val : one)
    {
        res.push_back(val);
    }

    for(auto val : two)
    {
        res.push_back(val);
    }

    nums.clear();
    nums = res;
}

int main()
{
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
}