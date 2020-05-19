#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void permutationEquation(int p[],int n) 
{
    int i,j;
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            if(p[p[j-1]-1]==i) cout << j << endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n ; i++)
    {
        cin >> arr[i];
    }
    permutationEquation(arr,n);
    return 0;
}
