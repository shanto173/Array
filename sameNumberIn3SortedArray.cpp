#include <bits/stdc++.h>
using namespace std;


/*
    Shanto ~~ A peaceful soul
*/

int main()
{


	vector<int> x = {1,2,3,4,5,6,7};
	vector<int> y = {4,5,6,7,8,9};
     vector<int> z = {6,7,8,9,10,11,12};

	int i = 0;
	int j = 0;
	int k = 0;
	vector<int> ans;
	int mn;
	while(i<x.size() and j < y.size() and z <(int)z.size()){

		if(x[i] == y[j] and y[j] == z[k]){
			ans.push_back(x[i]);
			ans.push_back(y[j]);
			ans.push_back(z[k]);
			i++;
			j++;
			k++;
		}
		else{
			mn = min(x[i],min(y[j],z[k]));
			if(mn == x[i]){
				i++;
			}
			if(mn == y[j]){
				j++;
			}
			if(mn == z[k]){
				k++;
			}
		}
		
	}

	for(auto it:ans){
		cout<<it<<" ";
	}

}
