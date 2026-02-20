//@leetcode 9 Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0) return true;
        if (x < 0 || x %10 == 0) return false;
        long long rev = 0,dup = x;
        while (x > 0) {
            rev = rev*10 + x%10;
            x/=10;
        }
        return (rev == dup);
    }
};
