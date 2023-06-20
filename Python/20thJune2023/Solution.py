class Solution:
    def matchGame(self, N):

        # If not divisible by 5, then return the remainder
        # when divided by 5 else return -1
        if N%5:
            return N%5
        else:
            return -1