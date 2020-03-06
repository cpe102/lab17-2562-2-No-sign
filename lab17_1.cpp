#include<iostream>
#include <fstream>
#include <string>
#include <vector>
#include<cctype>
using namespace std;
string ge;
int n=0;
int num=0;
char name[100];
vector<string>ist;
vector<int>p;
vector<int>c;
int x,y,z;
string com,two,sec;
string mand="";
int main(){
	
	ifstream dest;
	dest.open("name_score.txt");
	while(getline(dest,ge))
	{
	//	cout<<ge<<endl;
	sscanf(ge.c_str(),"%[^:]:%d%d%d",name,&x,&y,&z);
		ist.push_back(name);
		p.push_back(x+y+z);
	//	b.push_back(y);
	//	c.push_back(z);
		n++;
	}
	vector<string>grade(n);
	for(int i=0;i<n;i++){
		if(p[i]>=50){
		 	grade[i]="D";
		 }	
		 else{
		 	grade[i]="F";
		 }
	 	if(p[i]>=60){
		 	grade[i]="C";
		 }	
		 if(p[i]>=70){
		 	grade[i]="B";
		 }	
		 if(p[i]>=80){
			grade[i]="A";
			
		}
		
	}

	cout<<"Plese input your command"<<endl;
	


	getline(cin,sec);

//	if(mand=="")continues;
	//if(com=="exit"){
//	;
//	}
	
	for(int i=0;i<sizeof(two);i++){
			mand[i]=toupper(two[i]);
	}

	if(com=="grade"){
		for(int i=0;i<n;i++){
			if(mand==grade[i]){
				cout<<ist[i]<<endl;
			}
		}
	}
	else if(com=="name")
	{
		
			for(int i=0;i<n;i++){
				for(int k=0;k<sizeof(ist[i]);k++)ist[i][k]=toupper(ist[i][k]);
				
			if(mand==ist[i]){
				cout<<grade[i]<<endl;
			}
		}
	}
	
	
	
}	

