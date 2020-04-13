#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour %= 12;
        double minAngle = minutes * 6;
        double hourAngle  = (hour * 30) + (minutes * .5);
        double diff = abs(minAngle - hourAngle);
        return diff > 180.0 ? 360.0 - diff : diff;
    }
};