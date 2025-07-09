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
    vector<int> v = {10, 20, 30};
    list<int> l2(v.begin(), v.end());

    // l2.clear(); //Clears the list;
    // cout << l2.size() << endl;
    
    // if(l2.empty()) //empty() returns true or false;
    // {
    //     cout << "Empty" << endl;
    // }


    l2.resize(5, 100); //if current size is 3 it will make the size 5 and replace rest of the 2 values with 100;


    for(int val : l2) // Range Based For Loop
    {
        cout << val << endl;
    }

    return 0;
}