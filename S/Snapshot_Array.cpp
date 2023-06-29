// Implement Snapshot array
// https://leetcode.com/problems/snapshot-array/description/
// Aman Kumar

// Runtime 536 ms Beats 15.9%
// Memory 192.7 MB Beats 6.69%
class SnapshotArray {
public:
    vector<map<int,int>> snaps ;
    int snapId ;

    SnapshotArray(int length) 
    {
        snaps.resize(length) ;

        for(int i = 0 ; i < length ; i++ )
            snaps[i][0] = 0 ;   

        snapId = 0 ; 
    }
    
    void set(int index, int val) 
    {
        snaps[index][snapId] = val ;   
    }
    
    int snap() 
    {
        snapId++ ;
        return snapId-1 ;    
    }
    
    int get(int index, int snap_id) 
    {
        if(snaps[index].find(snap_id) == snaps[index].end())
        {
            auto it = --snaps[index].lower_bound(snap_id) ;
            return it -> second ;
        }    

        return snaps[index][snap_id] ;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
