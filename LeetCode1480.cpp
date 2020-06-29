#include <iostream>
#include <vector>

using namespace std;

void LeetCode1480_Test1();
void LeetCode1480_Test2();
void LeetCode1480_Test3();

class Solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
            
            vector<int> result;
            int total_sum = 0;
            for (int count = 0; count < nums.size(); count++)
            {
                total_sum += nums[count];
                result.push_back(total_sum);
            }

            return result;
        }
};


void LeetCode1480_Test1()
{
    vector<int> v = {1, 2, 3, 4}; 
    vector<int> result = {1, 3, 6, 10};
    Solution my_Solution;
    vector<int> my_response = my_Solution.runningSum(v);
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
        cout << "You have passed Test X" << endl; 
    }     
}

void LeetCode1480_Test2()
{
    vector<int> v = {1, 1, 1, 1, 1}; 
    vector<int> result = {1, 2, 3, 4, 5};
    Solution my_Solution;
    vector<int> my_response = my_Solution.runningSum(v);
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
        cout << "You have passed Test X\n"; 
    } 
}

void LeetCode1480_Test3()
{
    vector<int> v = {3, 1, 2, 10, 1}; 
    vector<int> result = {3, 4, 6, 16, 17};
    Solution my_Solution;
    vector<int> my_response = my_Solution.runningSum(v);
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
        cout << "You have passed Test X\n"; 

    } 
}