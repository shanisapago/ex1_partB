#include "Distance.h"
#include <cmath>
class canberraDistance:Distance{
    public:
    canberraDistance(vector<double> v1,vector<double> v2)

    {
        vec1=v1;
        vec2=v2;
    

    }
    Distance::getDistance()
    {
    double dis = 0;
	for (int i = 0; i < vec1.size(); i++)
	{
		dis = dis + abs(vec1[i] - vec2[i]) / (abs(vec1[i]) + abs(vec2[i]));
	}
	return dis;
    }

};