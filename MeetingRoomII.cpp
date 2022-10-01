class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        //base cases
        if(intervals.size() == 0)
            return 0;
        else if(intervals.size() == 1)
            return 1;
        
        priority_queue<int, vector<int>, greater <int>> pq; //min_heap
        
        pq.push(intervals[0][1]);
        
        int max_rooms = 1;
        
        for(int i=1; i<intervals.size(); i++)
        {
            if(intervals[i][0] < pq.top())
            {
                pq.push(intervals[i][1]);//if the start_time is before the end_time of the best meeting, then we can't accomodate in the same room, so just push the end_time of the current meeting.
            }
            else
            {
                pq.pop();//if we get a best meeting, remove it as it has been completed.
                pq.push(intervals[i][1]);//add the end_time to the min_heap
            }
            
            // cout<<pq.top()<<endl;
            
            if(max_rooms<pq.size())
                max_rooms = pq.size();
        }
        
        return max_rooms;
    }
};
