class Solution {
public:
    int jump(vector<int>& arr) {
        int n=arr.size();
        if(n<=1 || arr[0]==0)
            return 0;
        int m=arr[0],step=arr[0],jumps=1;
        for(int i=1;i<n;i++){
            if(i==n-1)
                return jumps;
            m=max(m,i+arr[i]);
            step--;
            if(step==0){
                jumps++;
                if(i>=m)
                    return 0;
                step=m-i;
            }
        }return 0;
    }
};