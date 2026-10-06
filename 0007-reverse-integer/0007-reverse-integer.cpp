class Solution {
public:
    int reverse(int x) {
        long long rev =0;
        long long num = x;
        bool neg = false;
        
        if(x<0){
            neg = true;
            num = abs(num);
        }

        while(num>0){
            int last = num%10;
            rev=rev*10+last;
            num/=10;
        }
        if(rev < pow(-2,31) || rev > pow(2,31)-1){
            return 0;
        }
        if(neg){
            rev*=-1;
        }
        
        return rev;
    }
};