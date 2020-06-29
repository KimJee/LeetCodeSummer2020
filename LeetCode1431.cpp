//  Kids With the Greatest Number of Candies
#include <vector>
#include <iterator>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
    }
};

void LeetCode1431_Test1()
{
    
}

void LeetCode1431_Test2()
{
    
}

void LeetCode1431_Test3()
{
    
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