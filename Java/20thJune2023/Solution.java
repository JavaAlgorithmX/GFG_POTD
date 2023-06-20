public class Solution{
        static int matchGame(Long N) {
                if(N%5 != 0)
                        return (int)(N%5);
                else
                        return -1;
        }
}
