class Solution {
public:
    int romanToInt(string s) {
        int ans=0,n=s.length();
        for(int i=0;i<s.length();i++){
            if(i<n-1 && s[i]=='I' && s[i+1]=='V'){
                i++;
                ans+=4;
                continue;
            }
            else if(i<n-1 && s[i]=='I' && s[i+1]=='X'){
                ans+=9;
                i++;
                continue;
            }
            else if(s[i]=='I')
                ans+=1;
            else if(s[i]=='V')
                ans+=5;
            else if(s[i]=='X'){
                if(i<n-1 && s[i+1]=='L'){
                    ans+=40;
                    i++;
                }
                else if(i<n-1 && s[i+1]=='C'){
                    ans+=90;
                    i++;
                }
                else
                    ans+=10;
            }
            else if(s[i]=='L')
                ans+=50;
            else if(i<n-1 && s[i]=='C' && s[i+1]=='D'){
                i++;
                ans+=400;
                continue;
            }else if(i<n-1 && s[i]=='C' && s[i+1]=='M'){
                i++;
                ans+=900;
                continue;
            }
            else if(s[i]=='C')
                ans+=100;
            else if(s[i]=='D')
                ans+=500;
            else if(s[i]=='M')
                ans+=1000;
        }return ans;
    }
};