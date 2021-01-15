/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
// date - time

/*

C++ does not include date&time class;
C -> time.h

struct tm {
    int tm_sec;
    int tm_min;
    int tm_mon;
}

clock_t, time_t, size_t, tm -> type of date&time

*/

/////////////////////////////////////////////////////
// ex1
/*
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // current time
    time_t now = time(0);

    char *dt = ctime(&now);

    cout << "The local date and time is " << dt << endl;

    tm *gmtm = gmtime(&now);

    cout << "UTC Hour : " << gmtm->tm_hour << endl;
    cout << "UTC Minutes : " << gmtm->tm_min << endl;
    cout << "UTC Seconds : " << gmtm->tm_sec << endl;

    return 0;
}
*/

////////////////////////////////////////////////////////
// ex2

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // current time
    time_t now = time(0);

    cout << "Number of sec since January 1, 1970 is : " << now << endl;

    tm *ltm = localtime(&now); // 1900

    cout << "Year : " << 1900 + ltm->tm_year << endl;
    cout << "Month : " << 1 + ltm->tm_mon << endl;
    cout << "Day : " << ltm->tm_mday << endl;
    cout << "Time : " << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;

    return 0;
}

// date - time
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
