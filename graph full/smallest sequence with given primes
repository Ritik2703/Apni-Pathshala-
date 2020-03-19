vector<int> Solution::solve(int A, int B, int C, int D) {
    set<int> s;
    int c=0;
    vector<int> ans;
    s.insert(A);
    s.insert(B);
    s.insert(C);
    while(c<D)
    {
        auto i=s.begin();
        ans.push_back(*i);
        
        s.insert((*i)*B);
        s.insert((*i)*C);
        s.insert((*i)*A);
        s.erase(i);
        c++;
    }
    return ans;
}
