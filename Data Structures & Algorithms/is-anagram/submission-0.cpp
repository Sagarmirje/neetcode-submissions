class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> frequency1(26,0);
        vector<int> frequency2(26,0);
        int m=s.length();
        int n=t.length();
        if(m!=n) return false;
        for(int i=0;i<m;i++){
            int idx1=s[i]-'a';
            int idx2=t[i]-'a';
            frequency1[idx1]++;
            frequency2[idx2]++;
        }
        if(frequency1==frequency2) return true;
        return false;
    }
};
