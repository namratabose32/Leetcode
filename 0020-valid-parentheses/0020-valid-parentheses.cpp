class Solution {
public:
    stack<char> st;
    bool isValid(string s) {
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(st.empty() && (s[i]==')' || s[i]=='}' || s[i]==']'))
                return false;
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
                continue;
            }
            char x=st.top();
            if((x=='(' && s[i]==')')||(x=='[' && s[i]==']') ||(x=='{' && s[i]=='}'))
                st.pop();
            else
                return false;
        }
        if(st.empty())
            return 1;
        return 0;
    }
};