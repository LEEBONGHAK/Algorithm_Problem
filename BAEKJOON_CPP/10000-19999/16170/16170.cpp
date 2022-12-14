#include <iostream>
#include <ctime>

#define endl '\n'
using namespace std;

int main() {
   // current date/time based on current system
   time_t now = time(0);

   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   cout << gmtm->tm_year + 1900 << endl;
   cout << gmtm->tm_mon + 1 << endl;
   cout << gmtm->tm_mday << endl;
}

// https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm