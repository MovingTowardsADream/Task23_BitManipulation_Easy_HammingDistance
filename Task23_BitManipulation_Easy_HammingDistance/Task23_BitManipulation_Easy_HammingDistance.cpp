#include <iostream>

class Solution {
public:
    static int hammingDistance(int x, int y) {
        // 1
        if (y > x)
            std::swap(x, y);
        int tmp1, tmp2, count = 0;
        while (x != 0) {
            tmp1 = x & 1;
            tmp2 = y & 1;
            if (tmp1 != tmp2) {
                count++;
            }
            x >>= 1;
            y >>= 1;
        }
        return count;
        // 2
        // return __builtin_popcount(x | y) - __builtin_popcount(x & y);
    }
};

int main()
{
    std::cout << Solution::hammingDistance(3, 1);
}