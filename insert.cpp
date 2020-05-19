#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the insertionSort1 function below.
void insertionSort1(vector<int> arr, int n) 
{   int store=arr[n-1];

    for(int i=arr.size()-1 ; i>=0 ; i-- )
    {
        if(i==0) { arr[0]=store; }
        if(store>arr[i-1]) 
        {
            arr[i]=arr[i-1];
            arr[i]=store; break;
        }
        else
        {
            arr[i]=arr[i-1];
        }

        for(int p=0; p<arr.size() ; p++) cout << arr[p] << " "; 
        cout << endl;
    }
            for(int p=0; p<arr.size() ; p++) cout << arr[p] << " "; 
        cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i =0 ; i<n ; i++) cin >> a[i];
    insertionSort1(a,n);
    return 0;
}
