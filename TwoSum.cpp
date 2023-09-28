#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    static vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;

    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1;

    while (i < j)
    {
        if (nums[i] + nums[j] == target)
        {
            vec.push_back(i);
            vec.push_back(j);
            ++i;
            --j;
        }
        else if (nums[i] + nums[j] < target)
        {
            ++i;
        }
        else
        {
            --j;
        }
    }
    return vec;
    }
};

int main([[maybe_unused]] int argc, [[maybe_unused]] char *argv[])
{
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    cout << "\nEnter the elements: ";

    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << "Enter your target: ";
    int target;
    cin >> target;

    [[maybe_unused]] Solution solve;

    vector<int> vec = Solution::twoSum(nums, target);
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}