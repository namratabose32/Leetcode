class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = neededTime.size();
        int head = 0;
        int tail = 0;
        int spareTime = 0;
        while(head<n)
        {
            while(colors[head+1]==colors[tail] && head<n) head++;
            int minTime = -1;
            for(int i = tail ; i <= head ; i++) minTime = max(minTime,neededTime[i]);
            spareTime += minTime;
            head = head+1;
            tail = head;
        }
        int totalTime = 0;
        for(int i = 0 ; i < n ; i++)
        {
            totalTime += neededTime[i];
        }
        return (totalTime-spareTime);
    }
};