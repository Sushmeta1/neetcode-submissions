class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while(s[left]<s[right]){
            left++;
            right--;
        }if(s[left]!=s[right]){
            return true;
        }  return false;
    }  
};
