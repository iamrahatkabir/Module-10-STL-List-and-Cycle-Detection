#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50};

    //Access Front and Back and ith position value of list;
    cout << l.front() << endl; //or cout << *l.begin() << endl;
    cout << l.back() << endl;

    cout << *next(l.begin(), 3) << endl; //Returns a pointer need to print doing dereference;


    return 0;
}