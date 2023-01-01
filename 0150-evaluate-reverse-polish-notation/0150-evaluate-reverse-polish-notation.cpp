class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto x:tokens){
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