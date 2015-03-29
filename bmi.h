#include<string>
using namespace std;

class BMI{
	public:
		void setData(float h,float w);
		float getBMI();
		string getCat();
	private:
		float bmi;
		float H;
		float W;
};
