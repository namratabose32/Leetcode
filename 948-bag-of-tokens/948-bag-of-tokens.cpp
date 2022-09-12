class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int start=0,end=tokens.size()-1,mx=0,score=0;
        sort(tokens.begin(),tokens.end());
        while(start<=end){
            if(tokens[start]<=power){
                score++;
                power-=tokens[start];
                start++;
                mx=max(mx,score);
            }else if(score>0 && tokens[end]>power){
                power+=tokens[end];
                end--;
                score--;
            }else{
                start++;
            }
        }return mx;
    }
};