class PhoneDirectory {
public:
    PhoneDirectory(int maxNumbers) {
        MAX = maxNumbers;
    }
    
    int get() {
        int ret = -1;
        if (!Free.empty()){
            ret = *Free.begin();
            Free.erase(Free.begin());
        }
        else if (curr < MAX - 1){
            ret = ++curr;
        }
        return ret;
    }
    
    bool check(int number) {
        if (Free.count(number)) return true;
        else return number > curr && number < MAX;
    }
    
    void release(int number) {
        if (number >= 0 && number <= curr){
            Free.emplace(number);
        }
    }
private:
    int MAX = 0, curr = -1;
    unordered_set<int> Free;
};

/*
Mistakes/Ops
1) Op because avoid initialization space, track little information
2) Repalce space with a counter
 */