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
vector<string>sub;
vector<int>p;
vector<int>c;
int x,y,z,j=0;
string com,two,sec;
string mand="";
int main(){
	
	ifstream dest;
	dest.open("name_score.txt");
	while(getline(dest,ge))
	{
	 
	sscanf(ge.c_str(),"%[^:]:%d%d%d",name,&x,&y,&z);
		ist.push_back(name);
		sub.push_back(name);
		p.push_back(x+y+z);
	//	b.push_back(y);
	//	c.push_back(z);
		n++;
	}
	vector<char>grade(n);
	for(int i=0;i<n;i++){
		if(p[i]>=50){
		 	grade[i]='D';
		 }	
		 else{
		 	grade[i]='F';
		 }
	 	if(p[i]>=60){
		 	grade[i]='C';
		 }	
		 if(p[i]>=70){
		 	grade[i]='B';
		 }	
		 if(p[i]>=80){
			grade[i]='A';
			
		}
		
	}
while(1){
mand="";
j=0;
	cout<<"Plese input your command :";
	


	cin>>com;
	cin>>two;
for(int i=0;com[i];i++){
			com[i]=toupper(com[i]);
	}
	if(com=="EXIT"){
		break;
		}
		cout<<com;
	if(com!="GRADE"||com!="NAME"){
		cout<<"Invalid command"<<endl;
continue;
	}
	else{
		for(int i=0;i<n;i++)cout<<"-";
	}
	
	
	for(int i=0;two[i];i++){
			mand[i]=toupper(two[i]);
	}

	if(com=="GRADE"){
		for(int i=0;i<26;i++){
			if(mand[0]==grade[i]){
				cout<<ist[i]<<endl;
			}
		}
	}
	else if(com=="NAME")
	{
		
					for(int i=0;i<n;i++){
				for(int k=0;ist[i][k];k++)
				{
				ist[i][k]=toupper(ist[i][k]);
					
				}
			}	
		
		for(int i=0;i<n;i++){
			for(int k=0;ist[i][k];k++){
				if(mand[k]!=ist[i][k]){
			j=0;
					break;
				}
				if(mand[k]==ist[i][k]){
				j=i;
							}
			}
			if(j!=0)cout<<sub[j]<<"'s grade = "<<grade[j]<<endl;
		}
		
	}
			
			for(int i=0;i<n;i++)cout<<"-";
		continue;			
		
	}
	
	
	
}	

