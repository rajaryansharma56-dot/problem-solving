
class Solution {
public:
    bool isPalindrome(long x) {
        long original = x;
        long rev_num = 0;

        if (x < 0) {
            return false;
        }

        while (x> 0) {
            long last_digit = x % 10;
            rev_num = (rev_num * 10) + last_digit;
            x = x / 10;

        }

        return original == rev_num;
    }
};
