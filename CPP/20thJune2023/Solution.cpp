class Solution {
public:
    int matchGame(long long N) {
        // If N is a multiple of 5, it's impossible for A to win
        if (N % 5 == 0)
            return -1;

        // Otherwise, A can pick (N % 5) matchsticks to guarantee a win
        return N % 5;
    }
};