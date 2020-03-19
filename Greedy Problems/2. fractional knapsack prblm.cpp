struct Item{
  int value;
  int weight;
 };
bool comp(struct Item a, struct Item b)
{
  double ratio1= (double) a.value/a.weight; ratio of value/wt means profit ratio
  double ratio2= (double) b.value/b.weight; 
  return r1>r2
 }
 
 class Solution{
  public:
   int maxprft(vector<int> a[], int W)
   {
     int n= a.size();
     sort(a,a+n,comp);  //sort in decreasing order of profit
     int cw=0;// current weight
     int pft=0; // profit 
     for(int i=0;i<n;i++)
     {
        if(cw + a[i].weight <= W)
        {
          cw+= a[i].weight;
          p+= a[i].value;
        }
        else
        {
          int remain = W - cw;  //remaining wt 
          p+= a[i].value * ((double) remain/ a[i].weight);
         }
      }  
      return p;
  }        
};
  
