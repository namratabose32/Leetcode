class SmallestInfiniteSet {
public:
    set<int> st;
    int a=1;
    SmallestInfiniteSet() {
        
    }
    
    int popSmallest() {
        if(st.empty())
            return a++;
        else{
            int res=*st.begin();
            st.erase(res);
            return res;
        }
        
    }
    
    void addBack(int num) {
        if(num<a){
            st.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */