/**
 * todo header
 */

#include "Date.h"
#include <iostream>


using namespace std;

int main() {


    Date date1(04, 07, 1993);
    Date date2(04, 07, 1993);

    cout << (date2 == date1);


    return 0;
}