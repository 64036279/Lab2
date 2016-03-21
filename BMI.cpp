#include "BMI.h"

BMI::BMI()
{
	mass=0; height=0;
}

BMI::BMI(float i,float j)
{ 
	mass=i; height=j;
}

void BMI::setMass(float i)
{
	mass=i;
}

void BMI::setHeight(float i)
{
	height=i;
}

float BMI::getMass()
{
	return mass;
}

float BMI::getHeight()
{
	return height;
}

float BMI::getBMI()
{
	return mass*10000/height/height;
}

string BMI::getCategory()
{
	string categ;
	float BMI=mass*10000/height/height;
	
	if(BMI>0 && BMI<15)
		return "Very severely underweight";
	else if(BMI>=15 && BMI<16)
		return "Severely underweight";
	else if(BMI>=16 && BMI<18.5)
		return "Underweight";
	else if(BMI>=18.5 && BMI<25)
		return "Normal";
	else if(BMI>=25 && BMI<30)
		return "Overweight";
	else if(BMI>=30 && BMI<35)
		return "Obese Class I (Moderately obese)";
	else if(BMI>=35 && BMI<40)
		return "Obese Class II (Severely obese)";
	else if(BMI>=40)
		return "Obese Class III (Very severely obese)";
}
	
	
	
	
	

