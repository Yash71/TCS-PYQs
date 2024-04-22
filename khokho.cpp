/* Alice and friends are playing game kho kho . Alice is actually a mediator and rest of the friends are seated on N chairs one each. Alice starts by providing a paper with single digit number to the friend that is present on number 1.

Lets denote friends by F, where F will be of size N. F[1] ..... F[N] represents friends seated respectively .
After receiving paper with a digit. F[1] will enact and try to tell F[2] without speaking. Similarly F[2] will communicate to next person F[3].

This continues until the last person F[n] understands the digit. Finally the last person will write the digit on separate page and give to alice. Alice will compare both the digits . If digits are same then alice will give t shirt to each friend.

However if the digits do not match he will ask digits from each friend and give t shirt to that friend who understood the correct digit.

Find how many friends did not understand the correct digit.

Example 1:
Input:
3
4,4,4
Output : 0

Example 2:
Input:
5
1,2,3,2,2
Output : 4
*/

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;


int main(){
	string n,s;
	getline(cin,n);
	getline(cin,s);
	stringstream nn(n);
	stringstream ss(s);
	
	int num;
	int friends=0;
	vector<int> v;
	while(nn>>num) friends=num;
	while(ss>>num) v.push_back(num);

	if(v[friends-1]==v[0]) cout<<0<<"\n";
	else{
		int count=1;
		int i=friends-2;
		while(i!=0){
			if(v[i]!=v[0]) count++;
			i--;
		}
		cout<<count<<"\n";
	}
	
	return 0;
}
