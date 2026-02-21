@leetcode 125 valid parenthesis 
class Solution {
public:
    bool isPalindrome(string s) {
        int left =0 , right= s.size()-1;
        while (left < right) {
            while(left < s.size()-1 && !isalnum(s[left])) left++;
            while(right >0 && !isalnum(s[right])) right--;
            if (isalnum(s[left])&& isalnum(s[right])){
                if (tolower(s[left]) != tolower(s[right])) return false;
            }
            left++,right--;
        }
        return true;
    }
};
