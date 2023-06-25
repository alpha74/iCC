// Return nth tribonacci number
// https://leetcode.com/problems/n-th-tribonacci-number/description/?envType=list&envId=9y1tu63i
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 6 MB Beats 68.28%
int getVal(int n, vector<int> &h)
{
    if(h[n] != -1)
        return h[n] ;

    int val = getVal(n-1, h) + getVal(n-2, h) + getVal(n-3, h) ;
    h[n] = val ;
    return val ;
}

int tribonacci(int n) 
{
    vector<int> hash(38,-1) ;

    hash[0] = 0 ;
    hash[1] = 1 ;
    hash[2] = 1 ;

    return getVal(n, hash) ;    
}
