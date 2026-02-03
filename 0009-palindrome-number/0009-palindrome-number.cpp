class Solution {
public:
    bool isPalindrome(int x) {
        int dup=x;
        int lastdigit;
        int reverse=0;
        while(x>0){
        lastdigit=x%10;
          if (reverse > INT_MAX / 10) return false;
        reverse= (reverse*10)+lastdigit;
        x=x/10;
        }
        if(reverse==dup){
            return true;
        }else{
            return false;
        }


        
    }
};