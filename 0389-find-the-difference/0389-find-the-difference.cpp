class Solution {
public:
    char findTheDifference(string s, string t) {
            char c = 0;
    for(int i = 0; i<t.size(); i++){
        c += t[i];
        if(i < (t.size()-1))
            c -= s[i];
    }
    return c;
}
    
};