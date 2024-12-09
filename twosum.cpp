#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int x;
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {

                x = nums[i] + nums[j];
                if (x == target)
                {
                    cout << "[" << i << j << "]";
                }
            }
        }
        return <vector<int>>{x};
    }
};