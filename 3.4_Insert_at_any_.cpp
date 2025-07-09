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
    list<int> l = {10, 20, 30};
    list<int> l2 = {100, 200};
    vector<int> v = {2, 3, 4};
    
    //Begin(10) theke 2 index porjonto jabe;
    //Index starts from 1 here;
    // Access any element;
    // cout << *next(l.begin(), 2) << endl; //Next function is an Iterator that's why we need to print it doing dereference;

    // l.insert(next(l.begin(), 2), 100);
    l.insert(next(l.begin(), 2), v.begin(), v.end()); //Insert v in 2nd index;

    for(int val : l)
    {
        cout << val << endl;
    }
    

    return 0;
}