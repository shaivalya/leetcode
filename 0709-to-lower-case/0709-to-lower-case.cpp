class Solution {
public:
    string toLowerCase(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
         if(isupper(s[i])){
             s[i]=tolower(s[i]);
             
         }
        }
       return s;
    }
};