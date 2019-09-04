#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> resultVector(n);
    long maxVal=0, x=0, i;
    
    for(int i = 0; i<n ; i++)
    {
        resultVector[i]=0;
    }
    
    for(i=0; i<queries.size(); i++)
    {
        resultVector[(queries[i][0])-1] += queries[i][2];
        
        if((queries[i][1]) < n)
        {
            resultVector[(queries[i][1])] -= queries[i][2];
        }
    }
    
    for(i=0; i < n; i++)
    {
        x+=resultVector[i];
        if(x>maxVal)
        {
            maxVal=x;
        }
    }
   
    return maxVal;
}

int main() {
    int N,K;
    
    cin>>N>>K;
   
    vector<vector<int>> queries(K);
    for (int i = 0; i < K; i++) {
        queries[i].resize(3);
        
        for (int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    long result = 0;
    result = arrayManipulation(N, queries);
    cout<<result<<endl;
    return 0;
}
