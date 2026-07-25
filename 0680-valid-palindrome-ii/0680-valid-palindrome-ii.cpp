class Solution {
    public : 
    bool isPalindrome(string &s, int l, int r){
        while(l<r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
            return true;
    }
public:
    bool validPalindrome(string s) {
        int left =0;
        int right = s.size()-1;

        while(left < right){
            if(s[left] == s[right]){
                left++;
                right--;
            }
            else
                return isPalindrome(s,left + 1, right) || isPalindrome(s,left,right-1);
        }
        return true;
    }
};