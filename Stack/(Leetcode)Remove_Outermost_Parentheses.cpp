class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> a;
        char str[s.length()];
        int num=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                a.push(s[i]);
               
            }
            if(a.size()>1){
                str[num]=s[i];
                num++;
            }
            if(s[i]==')'){
                a.pop();
            }
        }
        str[num]='\0';
        return str;
    }
};
