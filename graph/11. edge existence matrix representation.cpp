/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
 
int matrix[1001][1001];
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i,m,n,q,a,b;
    cin >> n >> m;
    for(i=1;i<=m;i++)
    {
        cin >> a >> b ;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
    cin >> q;
    for(i=1;i<=q;i++)
    {
        cin >> a >> b;
        if(matrix[a][b]==1)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
