@leetcode Fibonacci 509
class Solution {
public:
    unordered_map<int,long long> memo;
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (memo.find(n) != memo.end()) return memo[n];
        memo[n] = fib(n-1) + fib(n-2);
        return memo[n];
    }
};
