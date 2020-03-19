class Solution {
public:
    int gasStation(vector<int>& a, vector<int>& b) {
    	 int n= a.size();  // size of gas n cost
       int gas=0, t=0, start=0, c=0;
       for(int i=0;i<n;i++)
       {
          gas+= a[i]; // total gas , a[i] represnts gas at each station
          t+= b[i]; //total cost, c[i] represnts cost to reach i station
          c+= a[i]-b[i]; // summation of difference gas and cost at ith position
          if(c<0)     
          {            // if sum is less than 0 , starting index is 1+i and t=0
           s=1+i;
           t=0;
          }
        }
        if(gas<t)        //if total gas required is less than cost return -1
        return -1;
        
        return start;  //finally return satrting index.
           
    }
};
