class Solution {
public:
    int gasStation(vector<int>& a, vector<int>& b) {
    	 int n= a.size();
       int gas=0, t=0, start=0, c=0;
       for(int i=0;i<n;i++)
       {
          gas+= a[i];
          t+= b[i];
          c+= a[i]-b[i];
          if(c<0)
          {
           s=1+i;
           t=0;
          }
        }
        if(gas<t)
        return -1;
        
        return start;
           
    }
};
