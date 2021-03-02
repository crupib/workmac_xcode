//

#include <iostream>
#include <vector>
using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<int> seqList;
    vector<vector<int>> list(n);
    int lastAnswer = 0;
    int i, seq, x;
    
    for (i = 0; i < queries.size(); i++) {
        
        x = queries[i][1];
        seq = ((x ^ lastAnswer) % n);
        
        if (queries[i][0] == 1) {
            
            list[seq].push_back(queries[i][2]);
            
        } else {
            
            long int size = list[seq].size();
            lastAnswer = list[seq][queries[i][2] % size];
            seqList.push_back(lastAnswer);
        }
    }
    
    return seqList;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int n, q;
    cin >> n >> q;
    vector<vector<int>> queries(q);
    for (int i = 0; i < q; i++) {
        queries[i].resize(3);
   
        for (int j = 0; j < 3; j++) {
            cin >> queries [i][j];
        }
    }
    vector<int> result = dynamicArray(n, queries);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return 0;
}
