#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void LeetCode1470_Test1();
void LeetCode1470_Test2();
void LeetCode1470_Test3();

class Solution {
    public:
        vector<int> shuffle(vector<int>& nums, int n) {   
            vector<int> result;

            auto x_pos = nums.begin();
            auto y_pos = (nums.begin() + n);

            while (y_pos != nums.end())
            {
                result.push_back(*x_pos);
                result.push_back(*y_pos);

                x_pos++;
                y_pos++;
            }

            return result;
        }
};


void LeetCode1470_Test1()
{
    vector<int> v = {2, 5, 1, 3, 4, 7};
    int n = 3;

    vector<int> result = {2, 3, 5, 4, 1, 7};

    Solution my_Solution;
    vector<int> my_response = my_Solution.shuffle(v, n);
    bool isCorrect = true;
    
    for (int i = 0; i < my_response.size(); i++)
    {
        if (my_response[i] != result[i])
        {
            isCorrect = false;
            printf("At index %d, Expected: %d | Actual: %d\n", i, result[i], my_response[i]);
        }
    }    

    if (isCorrect == true)
    {
        cout << "LeetCode 1470: Test 1 Passed" << endl; 
    }     
}

void LeetCode1470_Test2()
{
    vector<int> v = {1, 2, 3, 4, 4, 3, 2, 1};
    int n = 4;

    vector<int> result = {1, 4, 2, 3, 3, 2, 4, 1};

    Solution my_Solution;
    vector<int> my_response = my_Solution.shuffle(v, n);
    bool isCorrect = true;
    
    for (int i = 0; i < my_response.size(); i++)
    {
        if (my_response[i] != result[i])
        {
            isCorrect = false;
            printf("At index %d, Expected: %d | Actual: %d\n", i, result[i], my_response[i]);
        }
    }    

    if (isCorrect == true)
    {
       cout << "LeetCode 1470: Test 2 Passed" << endl; 
    }     
}

void LeetCode1470_Test3()
{
    vector<int> v = {1, 1, 2, 2};
    int n = 2;
    vector<int> result = {1, 2, 1, 2};

    Solution my_Solution;
    vector<int> my_response = my_Solution.shuffle(v, n);
    bool isCorrect = true;
    
    for (int i = 0; i < my_response.size(); i++)
    {
        if (my_response[i] != result[i])
        {
            isCorrect = false;
            printf("At index %d, Expected: %d | Actual: %d\n", i, result[i], my_response[i]);
        }
    }    

    if (isCorrect == true)
    {
        cout << "LeetCode 1470: Test 3 Passed" << endl; 
    }     
}


