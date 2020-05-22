class Solution {
public:
    void helper(vector<char>& s, int start, int end){
        
        if(start>end)
            return;
        
        if(start<=end){
            char t = s[start];
            s[start] = s[end];
            s[end] = t;
            
        }
        helper(s, start+1, end-1);
    }
    void reverseString(vector<char>& s) {
        
        
        helper(s, 0, s.size()-1);
        
        
    }
};
