//  Kids With the Greatest Number of Candies
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

bool verifySolution(vector<bool>&v, vector<bool>&v2);
void LeetCode1431_Test1();
void LeetCode1431_Test2();
void LeetCode1431_Test3();

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> output;

        // First find the max of all of the elements

        int currentMax = 0;
        for (auto it = candies.begin(); it != candies.end(); ++it)
        {
            if (*it > currentMax)
            {
                currentMax = *it;
            }
        }

        // Then see if the extra candies will be enough so that each person has the same number of candies

        for (auto it = candies.begin(); it != candies.end(); ++it)
        {
            if (*it + extraCandies < currentMax)
            {
                output.push_back(false);
            }
            else
            {
                output.push_back(true);
            }
        }

        return output;
    }
};

void LeetCode1431_Test1()
{
    vector<int> input = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    Solution aSolution;
    vector<bool> v_actual = aSolution.kidsWithCandies(input, extraCandies);
    vector<bool> v_expected = {true, true, true, false, true};
    
    if (verifySolution(v_actual, v_expected) == true)
    {
        cout << "LeetCode1431_Test1 passed." << endl;
    }
    else
    {
        cout << "LeetCode1431_Test1 failed." << endl;
    }
}

void LeetCode1431_Test2()
{
    vector<int> input = {4, 2, 1, 1, 2};
    int extraCandies = 1;

    Solution aSolution;
    vector<bool> v_actual = aSolution.kidsWithCandies(input, extraCandies);
    vector<bool> v_expected = {true, false, false, false, false};
    
    if (verifySolution(v_actual, v_expected) == true)
    {
        cout << "LeetCode1431_Test2 passed." << endl;
    }
    else
    {
        cout << "LeetCode1431_Test2 failed." << endl;
    }
}

void LeetCode1431_Test3()
{
    vector<int> input = {12, 1, 12};
    int extraCandies = 10;

    Solution aSolution;
    vector<bool> v_actual = aSolution.kidsWithCandies(input, extraCandies);
    vector<bool> v_expected = {true, false, true};

    if (verifySolution(v_actual, v_expected) == true)
    {
        cout << "LeetCode1431_Test3 passed." << endl;
    }
    else
    {
        cout << "LeetCode1431_Test3 failed." << endl;
    }
}


bool verifySolution(vector<bool>& v_actual, vector<bool>& v_expected)
{
    bool isCorrect = true;
    
    auto actual_it = v_actual.begin();
    auto expect_it = v_expected.begin();
    while (expect_it != v_expected.end())
    {
        if (*expect_it != *actual_it)
        {
            isCorrect = false;
        }
        actual_it++;
        expect_it++;
    }

    return isCorrect;
}