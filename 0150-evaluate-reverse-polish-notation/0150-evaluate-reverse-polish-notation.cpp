class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if(tokens.size()==1)
            return stoi(tokens[0]);
        stack<int> s;
        int ans=0;
        s.push(stoi(tokens[0]));
        s.push(stoi(tokens[1]));
        for(int i=2;i<tokens.size();i++){
            string x=tokens[i];
            if(x=="+" || x=="-" || x=="*" || x=="/"){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                if(x=="+"){
                    s.push(a+b);
                }else if(x=="-")
                    s.push(b-a);
                else if(x=="*")
                    s.push(a*b);
                else
                    s.push(b/a);
            }else{
                s.push(stoi(x));
            }
        }return s.top();
    }
};