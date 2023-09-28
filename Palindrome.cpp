#include <iostream>

using namespace std;

class Solution
{
private:
    int orig_num;
    long long remainder, reversed_num = 0;

public:
    bool isPalindrome(int x)
    {
        if (x < -2147483648 || x > 2147483647)
        {
            return false;
        }
        else
        {
            if (x < 0)
            {
                return false;
            }
            else
            {
                orig_num = x;

                while (x != 0)
                {
                    remainder = x % 10;
                    reversed_num = reversed_num * 10 + remainder;
                    x /= 10;
                }

                if (orig_num == reversed_num)
                    return true;
                else
                    return false;
            }
        }
    }
};

int main()
{
    Solution solve;
    int num;

    cout << "Input: ";
    cin >> num;

    string answer = solve.isPalindrome(num) ? "true" : "false";

    cout << "Output: " << answer << endl;
}