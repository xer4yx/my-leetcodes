#include <iostream>

using namespace std;

class Solution
{
private:
    int result = 0;
    int string1, string2;

public:
    int getValue(char RomanNumeral)
    {
        if (RomanNumeral == 'I')
            return 1;
        if (RomanNumeral == 'V')
            return 5;
        if (RomanNumeral == 'X')
            return 10;
        if (RomanNumeral == 'L')
            return 50;
        if (RomanNumeral == 'C')
            return 100;
        if (RomanNumeral == 'D')
            return 500;
        if (RomanNumeral == 'M')
            return 1000;
        return -1;
    }

    int romanToInt(string s)
    {
        if (s.length() == 1)
        {
            return getValue(s[0]);
        }
        else
        {
            for (register int i = 0; i < s.length(); i++)
            {
                string1 = getValue(s[i]);
                if (i + 1 > s.length())
                {
                    result += string1;
                }
                else
                {
                    string2 = getValue(s[i + 1]);
                    if (string1 >= string2)
                    {
                        result += string1;
                    }
                    else
                    {
                        result += (string2 - string1);
                        i++;
                    }
                }
            }

            return result;
        }
    }
};

int main()
{
    Solution solve;
    string romanNum = "VVVV";
    cout << "Roman Numeral: " << solve.romanToInt(romanNum) << endl;
}