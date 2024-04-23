/* A coding competition was conducted in company with e employees. Data of employees who participated and who did not participate in the competition is available. There were three problems in the coding competition. Data as mentioned below is available The number of employees who have solved only the first, only the second and only the third problem are equal.

p1 employees who solved the first ,second problem.
p2 employees who solved the second , third problem.
p3 employees who solved the third first problem.
q employees who solved all the 3 problems.
r employees who did not participate in competition.

Answer the following questions based on data.

How many employees have solved the first problem?
How many employees have solved exactly one of the 3 problems?

Refer this Image - https://i.imgur.com/tEKYtqN.png 

*/

#include<iostream>
#include<string>
using namespace std;

int main(){
	string a,b,c,d,e,f;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	getilne(cin,e);
	getline(cin,f);
	
	int emp=a-'0';
	int p1=b-'0';
	int p2=c-'0';
	int p3=d-'0';
	int q=e-'0';
	int r=f-'0';

	int participation=emp-r;
	int uni=q-p1-p2-p3;
	int singleProblem=participation-uni;
	
	int firstProblem=singleProblem+p1+p3-q;
	cout<<singleProblem<<"\n";
	cout<<firstProblem<<"\n";		

	return 0;
}
