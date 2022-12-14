#include "Distance.h"
#include <iostream>
using namespace std;

double Distance::getDistance(){cout<<"get distance distance.cpp\n";return 0;}
void Distance:: setVec1(vector<double> v)
{
    
vec1=v;
}
void Distance:: setVec2(vector<double> v)
{
vec2=v;

}
void Distance:: printVec1(){
    for(int i=0;i<vec1.size();i++)
    cout<<vec1[i]<<" ";
    cout<<endl;
}

void Distance ::printVec2()
{
    for(int i=0;i<vec2.size();i++)
    {
        cout<<vec2[i]<<" ";
        
    }
    cout<<endl;
}