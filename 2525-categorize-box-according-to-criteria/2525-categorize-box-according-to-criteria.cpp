class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long int vol=(long long)length * (long long)width *(long long)height;
        int bulky=0,heavy=0;
        if(mass>=100)
            heavy=1;
        if(length>=1e4 || width>=1e4 || height>=1e4 || vol>=1e9){
            bulky=1;
        }
        if(bulky && heavy)
            return "Both";
        if(!bulky && !heavy)
            return "Neither";
        if(bulky && !heavy)
            return "Bulky";
        return "Heavy";
    }
};