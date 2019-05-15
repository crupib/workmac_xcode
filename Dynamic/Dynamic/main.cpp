#include <iostream>

#include <vector> // for 2D vector

using namespace std;


// Complete the dynamicArray function below.
vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<int> myvector(n);
    int lastAnswer = 0;
    int x,y = 0;
    int seq = 0;
    x = queries[0][0];
    y = queries[0][1];
    seq = ((x^lastAnswer)%n);
    myvector[seq] = y;
  //  cout << myvector[seq] << endl;
    
    
    return myvector;
}

int main()
{
    int q=3;
    vector<int> myvector(q);
    vector<vector<int>> queries(q);
    queries[0].resize(3);
    queries[0][0] = 2;
    queries[0][1] = 5;
    myvector = dynamicArray(3, queries);
    cout << myvector[0] <<" " << myvector[1] << " " <<myvector[2]<< endl;
    
    
}
