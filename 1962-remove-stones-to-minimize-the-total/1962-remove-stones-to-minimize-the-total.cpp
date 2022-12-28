class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq(piles.begin(),piles.end());
        while(k--){
            int x=pq.top();
            pq.pop();
            pq.push(x-x/2);
            
        }int sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};