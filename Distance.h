#ifndef DISTANCE_H_
#define DISTANCE_H_
#include <vector>
using namespace std;
//abstract class of distance, has 2 vectors
class Distance{
    protected:
    vector<double> vec1;
    vector<double> vec2;

    public:
    //abstract function that return the distance
    virtual double getDistance()=0;
    //set first vector
    void setVec1(vector<double> v);
    //set second vector
    void setVec2(vector<double> v);
    
    
   
};
#endif
