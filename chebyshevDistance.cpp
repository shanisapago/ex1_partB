#include "Distance.h"
#include <cmath>

class chebyshevDistance:Distance{
    
    public:
    chebyshevDistance(vector<double> v1,vector<double> v2)

    {
        vec1=v1;
        vec2=v2;

    }
    Distance::getDistance()
    {
    double maxDis = 0;
	for (int i = 0; i < vec1.size(); i++)
	{
		if (maxDis < abs(vec1[i] - vec2[i]))
		{
			maxDis = abs(vec1[i] - vec2[i]);
		}
	}
	return maxDis;
    }

};