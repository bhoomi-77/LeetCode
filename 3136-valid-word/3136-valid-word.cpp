class Solution {
public:
    bool isValid(string s) {
        if(s.length()<3){
            return false;
            }
           
                int vowel=0;
                int cons=0;
                
                for(int i=0;i<s.size();i++){
                    char  ch=s[i];
                    if(!isalnum(ch)){
                        return false;
                    }
                 if(isalpha(ch)){
                 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                   vowel++;
                }
                else cons++;

                 }
                }
                return vowel>=1&&cons>=1; 
    }
};