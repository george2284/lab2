#include"bmi.h"

using namespace std;
float BMI::getBMI(){bmi=W/(H*H);return bmi;}
string BMI::getCat(){
		    if(bmi<15) return "Very severely underweight";
        else if(bmi>=15 && bmi<16) return "Severely underweight";
        else if(bmi>=16 && bmi<18.5) return"Severely underweight";
        else if(bmi>=18.5 && bmi<25) return"Underweight";
        else if(bmi>=25 && bmi<30) return"Normal";
        else if(bmi>=30 && bmi<35) return"Moderately obese";
        else if(bmi>=35 && bmi<40) return"Severely obese";
        else if(bmi>=40 && bmi<100) return"Very severely obese";
        else return"Your MOM";
		}
void BMI::setData(float h,float w){H = h/100;W=w;}
