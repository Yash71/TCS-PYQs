/*Given a square matrix, calculate the absolute difference between the sums of its diagonals.

123
456
989

The left-to-right diagonal = 1+5+9 = 15, The right to left diagonal = 3+5+9 = 17, Their absolute difference is [15-17] = 2

Sample Input:
3
11 2 4
4 5 6
10 8 -12

Sample Output:
15
*/


#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<cmath>
using namespace std;

int main(){

	string s,r;
	getline(cin,s);
	
	stringstream ss(s);
	int num,n=0;
	while(ss>>num) n=num;
	vector<vector<int>> v(n);
	for(int i=0;i<n;i++){
		getline(cin,r);
		stringstream rr(r);
		while(rr>>num) v[i].push_back(num);
	}
	int leftDiagonalSum=0;
	for(int i=0;i<n;i++) leftDiagonalSum+=v[i][i];
	
	int rightDiagonalSum=0;
	for(int i=0,j=n-1;i<n && j>=0;i++,j--){
		rightDiagonalSum+=v[i][j];
		
	}
	cout<<abs(leftDiagonalSum-rightDiagonalSum)<<"\n";	
	return 0;
}
