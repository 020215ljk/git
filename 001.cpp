#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;


struct student{
	
	int sno;
	char sname[];
	float cscore;
//	|	cout<<add<<endl;
	}; 

int main(){
	student std;
	std.sno = 123456;
	strcpy(std.sname,"xiaoming");
	cout<<std.sno<<endl;
	cout<<std.sname<<endl;
		
	
	
	
	
	return 0;
}
