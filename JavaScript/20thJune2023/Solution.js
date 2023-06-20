class Solution {
    matchGame(n) {
        if (n % BigInt(5))
            return n % BigInt(5);
        return -1;
    }
}