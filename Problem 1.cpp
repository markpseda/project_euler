#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long total = 0;

        /*
        Summation from x = 1 to n of x is:
        n(n+1)  /  2
        
        Our n in this case is "n" / 3, 5, and 15
        
         */
        n--;
        long firstTerm = 3 * (((n / 3) * ((n / 3) + 1)) / 2);
        long secondTerm = 5 * (((n / 5) * ((n / 5) + 1)) / 2);
        long thirdTerm = 15 * (((n / 15) * ((n / 15) + 1)) / 2);

        //cout << firstTerm << " " << secondTerm << " " << thirdTerm << endl;
        
        cout << firstTerm + secondTerm - thirdTerm << endl;

    }
    return 0;
}

