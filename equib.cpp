#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;

 /* Given an array of integers, find an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. If no such index exists, return -1.

Input: [-7, 1, 5, 2, -4, 3, 0]



Output: 3
Explaination: Index 3 is an equilibrium index because the sum of elements on the left, -7+1+5=-1, is equal to the sum of elements on the right, -4+3+0=-1.
*/

int leftSum(vector<int> a, int index){
	int leftTotal=0;
	for(int i=0;i<index;i++){
		leftTotal+=a[i];
	}
	return leftTotal;
}
int rightSum(vector<int> a, int index){
	int rightTotal=0;
	for(int i=index+1;i<a.size();i++){
		rightTotal+=a[i];
	}
	return rightTotal;
	
}
int solution(vector<int> v){
	for(int i=1;i<v.size()-1;i++){
		int left=leftSum(v,i);
		int right=rightSum(v,i);
		if(left==right)return i;
	}
	return -1;
}
int main(){
	string s;
	vector<int> v;
	getline(cin,s);
	stringstream ss(s);
	int num;
	while(ss>>num) v.push_back(num);
	

	int ans=solution(v);
	cout<<ans<<"\n";
	return 0;
}

