#include <ctime>
#include <iostream>
using namespace std;

class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        time_t rawtime;
        struct tm * timeinfo;
        const char * weekday[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        timeinfo->tm_year = year - 1900;
        timeinfo->tm_mon = month - 1;
        timeinfo->tm_mday = day;
        mktime ( timeinfo );
        return string(weekday[timeinfo->tm_wday]);
    }
};

int main ()
{
    Solution obj;
    cout << obj.dayOfTheWeek(14, 1, 2020);
    return 0;
}