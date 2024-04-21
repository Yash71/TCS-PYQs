/* Given array of N integers , task is to replace elements with its rank in the array. 

Example 1 : 
Input: 20 15 26 2 98 6 
Output: 4 3 5 1 6 2 
Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so... 

Example 2 : 
Input: 1 5 8 15 8 25 9 
Output: 1 2 3 5 3 6 4 
Explanation: When sorted,the array is 1,5,8,8,9,15,25. So the rank of 1 is 1,rank of 5 is 2,rank of 8 is 3 and so... */


#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main(){
	// input
	string s;
	getline(cin,s);
	stringstream ss(s);
	vector<int> v;
	int num;
	
	while(ss>>num) {
		v.push_back(num);	
	}
	// input

	map<int,int> mp;
	vector<int> sortcopy;
	
	sortcopy=v;
	int rank=1;
	sort(sortcopy.begin(),sortcopy.end());
	for(int i=0;i<sortcopy.size();i++){
		if(!mp[sortcopy[i]]) mp[sortcopy[i]]=rank++;
	}
	vector<int> ans;
	for(auto it: v) ans.push_back(mp[it]);
	
	for(auto it:ans) cout<<it<<" ";

	return 0;
}
