class SnapshotArray {
public:
    int snap_id = 0;
    vector<vector<pair<int,int>>> snapshot;
    SnapshotArray(int length) {
        for(int i =0;i < length;i++)
        {
            vector<pair<int,int>> initial(1,{0,0});
            snapshot.push_back(initial);
        }
    }
    
    void set(int index, int val) {
        snapshot[index].push_back({val,snap_id});
    }
    
    int snap() {
        return snap_id++;
    }
    
    int get(int index, int snap_id) {
        // we do binary search for finding the value of snap_id that is less or equal
        vector<pair<int,int>>& search  = snapshot[index];
        int start = 0;
        int end = search.size()-1;
        int answer = -1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(search[mid].second <= snap_id)
            {
                answer = mid;
                start = mid + 1;
            }
            else
            {
                end = mid-1;
            }
        }
        return search[answer].first;
    }
};

/*
Mistakes/Ops:
1) ignored memory constraint, able to reduce by only saving information as needed for changed states
2) didn't think clearly the usage for each structure
3) mistake a vector for its element (which is what we want)
4) itr of a map is a pair, and to access the specific we need .first or .second
5) must dereference the pointer before calling methods on the dereferenced object
*/