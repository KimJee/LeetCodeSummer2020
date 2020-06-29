//  Kids With the Greatest Number of Candies
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <map>

using namespace std;

bool verifySolution(vector<int>&v, vector<int>&v2);
void LeetCode788_Test1();

class Solution {
public:
    int rotatedDigits(int N) {
        
        /*
            A number is valid if each digit remains a digit after rotation.

            Rotates to themselves {0, 1, 8}
            2 <--> 5 
            6 <--> 9

            Given a positive number N, how many numbers X from 1 to N are good?

            0 - 0
            1 - 1
            2 --> 5
            3 - X
            4 - X
            5 --> 2
            6 --> 9
            7 - X
            8 - 8
            9 --> 6
            10 - 10
            11 - 11
            12 - 15
            13
            14
            15
        */
        std::map<char, char> RotationMap;

        RotationMap.insert(std::pair<char, char>('2', '5'));
        RotationMap.insert(std::pair<char, char>('5', '2'));
        RotationMap.insert(std::pair<char, char>('6', '9'));
        RotationMap.insert(std::pair<char, char>('9', '6'));
        RotationMap.insert(std::pair<char, char>('0', '0'));
        RotationMap.insert(std::pair<char, char>('8', '8'));
        RotationMap.insert(std::pair<char, char>('1', '1'));

        int numRotatableDigits = 0;

        for (int i = 1; i <= N; i++)
        {
            std::string digit_string = std::to_string(i);   
            std::string output_string = "";
            for (int digit_place = 0; digit_place < digit_string.length(); digit_place++)
            {

                // If the thing we're looking for is within the map
                auto it = RotationMap.find(digit_string[digit_place]);
                if (it != RotationMap.end())
                {
                    // Mapping was found
                    output_string.push_back((it->second));
                }
                else
                {
                    break;
                }
            }
            if (digit_string.compare(output_string) != 0 && digit_string.length() == output_string.length())
            {
                // Then the strings are not the same
                numRotatableDigits++;
            }
        }
        return numRotatableDigits;
    }
};

void LeetCode788_Test1()
{

    Solution aSolution;
    int answer = aSolution.rotatedDigits(10);
    
    if (answer == 4)
    {
        cout << "LeetCode788_Test1 passed." << endl;
    }
    else
    {
        cout << "LeetCode788_Test1 failed." << endl;
    }
}

bool verifySolution(vector<int>& v_actual, vector<int>& v_expected)
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

