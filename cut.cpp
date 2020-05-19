#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int lesser(int a, int b)
{
	if(a!=0 && b!=0)
	{
		if(a<b) return a;
		else return b;
	}
	else if(a==0 && b>0 )
		return b;
	else if(b==0 && a>0)
		return a;
	else return 0;

}

int smallest(vector<int> arr)
{
    int small=0;

    for(int i=0; i<arr.size(); i++)
    {
    	small=lesser(arr[i],small);
    }
    return small;
}

int nonzero(vector<int> lol)
{
	int cunt=0;
	for(int i=0; i<lol.size() ; i++)
	{
		if(lol[i]>0) cunt++;
	}
	return cunt;
}

// Complete the cutTheSticks function below.
void cutTheSticks(vector<int> arr) 
{   

    while( nonzero(arr) )
    {
        int k=smallest(arr);

        cout << nonzero(arr) << endl;

        for(int i=0; i<arr.size() ; i++ )
        {
            if(arr[i]>0)
            {
                arr[i]=arr[i]-k;             
			}
        }

    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> pum(n);
    for(int i=0; i<n ; i++)
    {
        int input;
        cin>>input;
        pum.push_back(input);
    }
    cutTheSticks(pum);
    return 0;
}
