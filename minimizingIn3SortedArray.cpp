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
	int n1 = 7;
	int n2 = 6;
	int n3 = 7;
	int res = INT_MAX;
	int ans;
	while(i<(int)x.size() and j <(int) y.size() and z<(int)z.size()){

		int mx = max(x[i],max(y[j],z[k]));
		int mn = min(x[i],min(y[j],z[k]));

		ans = mx - mn;

		if(ans < res){
			res = ans;
		}

		if(x[i] == mn){
			i++;
		}
		else if(y[j] == mn){
			j++;
		}
		else{
			k++;
		}
	}
	cout<<res;


}
