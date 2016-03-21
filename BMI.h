#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

class BMI 
{
	public:
		BMI();
		BMI(float,float);	
		void setMass(float);
		void setHeight(float);
		float getMass();
		float getHeight();	
		float getBMI();
		string getCategory();
	private:
		float mass,height;
};


