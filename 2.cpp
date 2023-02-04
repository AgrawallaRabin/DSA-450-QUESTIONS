//Max Min

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int mx = INT_MIN;
    	int mn = INT_MAX;
    	for(int i=0;i<N;i++){
    	    mx= max(A[i],mx);
    	    mn= min(A[i],mn);
    	}
    	return mx+mn;
    }

};