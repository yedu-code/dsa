class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0){
            return true;
        }
        if(x<0){
            return false;
        }
        long long num = x;
        long long rev = 0;
        while(num>0){
            int last = num%10;
            rev = rev*10 + last;
            num/=10;
        }

        return x==rev;

    }
};