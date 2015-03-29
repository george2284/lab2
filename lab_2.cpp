#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include"bmi.h"
using namespace std;

int main(){
    ifstream fin("data1.txt");
    if(!fin){cout<<"Input file not found.\n"; return 1;}
    ofstream fout("data2.txt");
    if(!fout){cout<<"Output file not found.\n"; return 1;}

    BMI b;
    float h,w,bmi;
    string s;
    while(1){
        fin>>h>>w;
        if(fin.fail())break;
        b.setData(h,w);
        bmi=b.getBMI(); s=b.getCat();
        fout<<setprecision(6)<<bmi<<"\t"<<s<<endl;
    }

    fin.close();
    fout.close();
}
