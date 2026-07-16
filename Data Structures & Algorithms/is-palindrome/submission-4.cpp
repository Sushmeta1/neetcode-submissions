class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left<right){
            if(!isalnum(s[left]))
    {
        left++;
        continue;
    }

    // 2. Agar right special character hai
    if(!isalnum(s[right]))
    {
        right--;
        continue;
    }
        if(tolower(s[left])!=tolower(s[right])){
            return false;
        }left++;
        right--;
        }
    return true;
    }  
};
