#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <deque>
#include <iostream>
#include <list>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>

#define ll long long

#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b

using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {

    vector<int> v(queries.size());
    int i, j = 0;
    for ( i = 0 ; i < queries.size(); ++i)
    {
        for (j = 0; j < strings.size(); ++j)
        {
            if ( queries[i] == strings[j])
            {
                v[i]++;
            }
                
        }
    }
    
    return v;
}


vector<int> *v;

int main(int argc, char *argv[]) {
   
    int strings_count;
    cout << "enter string count\n";
    cin >> strings_count;
    vector<string> strings(strings_count);
    cout << "enter strings\n";
    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        cin >> strings_item;
        strings[i] = strings_item;
//        cout << strings[i] << endl;
    }
    int queries_count;
    cout << "enter queries count\n";
    cin >> queries_count;
    vector<string> queries(queries_count);
    cout << "enter strings\n";
    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        cin >> queries_item;
        queries[i] = queries_item;
//33        cout << queries[i] << endl;
    }
    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i];
        
        if (i != res.size() - 1) {
            cout << "\n";
        }
    }
    
    cout << "\n";
    
    return 0;
}
