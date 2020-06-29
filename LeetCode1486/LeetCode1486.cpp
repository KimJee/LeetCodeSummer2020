#include <iostream>
#include <vector>

using namespace std;

void LeetCode_Test();

class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        nums.resize(n);

        int result = 0;
        for(int i = 0; i < n; i++)
        {
            nums[i] = start + 2*i;
            result ^= nums[i];
        }
        
        return 0;
    }
};


void LeetCode_Test(){

    int n, start;
    cin >> n >> start;
    Solution Object;
    int result = Object.xorOperation(n, start);
    cout << "My result is: " << result << endl;
    return;
}


int main()
{
    LeetCode_Test(); 
    cin.get();
    return 0;
}

