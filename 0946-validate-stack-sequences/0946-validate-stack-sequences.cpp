class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0,j=0,n=pushed.size(),m=popped.size();
        stack<int> st;
        while(i!=n){
            if(pushed[i]!=popped[j]){
                st.push(pushed[i]);
                i++;
            }
            else{
                i++;
                j++;
            }
            while(!st.empty() && popped[j]==st.top()){
                j++;
                st.pop();
            }
        }
        while(j!=m){
            if(st.top()!=popped[j]){
                return false;
            }
            j++;
            st.pop();
        }
        return true;
    }
};