// Return widest vertical area between two points containing no points
// https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/description/
// Aman Kumar

// Runtime 230 ms Beats 97.96%
// Memory 67.2 MB Beats 46.47%
int maxWidthOfVerticalArea(vector<vector<int>>& points) 
{
    int n = points.size();
    vector<int> x(n,0) ;

    for(int i = 0 ; i < points.size() ; i++)
        x[i] = points[i][0] ;

    sort(x.begin(), x.end()) ;

    int maxd = 0 ;

    for(int i = 1 ; i < n ; i++)
    {
        maxd = max(maxd, x[i] - x[i-1]) ;
    }

    return maxd ;
}
