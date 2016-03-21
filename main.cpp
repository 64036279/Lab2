#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include "BMI.h"
using namespace std;
int main() 
{
	ofstream outFile("file.out", ios::app);
	if(!outFile) 
	{
		cerr << "Failed opening"<<endl;
		exit(1);
	}
	
	ifstream inFile("file.in", ios::in);
	if(!inFile) 
	{
		cerr << "Failed opening"<<endl;
		exit(1);
	}
	
	BMI bmi; 
	float i,j;
	
	outFile<<"BMI \tCategory\n";
	
	while(inFile>>i>>j)
	{
		if(i==0||j==0)
		{
			return 1;
		}
		
		bmi.setHeight(i); 
		bmi.setMass(j);
		outFile<<left<<fixed<<setprecision(2)<<setw(4)<<bmi.getBMI()<<"\t"<<bmi.getCategory()<<"\n";
	}
	return 0;
}
