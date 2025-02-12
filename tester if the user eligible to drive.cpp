#include<iostream>
using namespace std;
int main(){
	int a;
	string b;
    string y="yes";
	string x="no";
	cout<<"enter your age ";
	cin>>a;
	
	if(a<18 )
	{
		cout<<"you are not eligible  for vote or drive";
	}
	
	else if(a>=18 )
	{
		cout<<"do you have a licence:";
		cin>>b;
		if(b==y)
		{
			cout<<"you are ready to drive and you can vote to ";
		}
		else  {
		
			cout<<"you are not ready to drive but you can vote";
		}
			
		
			
	
		
    }
	
	
	
}

	 



