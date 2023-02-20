/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        long lb = 1;
        long ub = n;
        while(lb <= ub)
        {
            long long mid = (lb+ub)/2;

            if(guess(mid) == 0)
            {
                return mid;
            }
            else if(guess(mid) == -1)
            {
                ub = mid-1;
            }
            else lb = mid+1;
        }
        return -1;
    }
};