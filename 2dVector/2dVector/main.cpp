#include <iostream>
#include <vector> // for 2D vector
using namespace std;

int main()
{
    // Initializing 2D vector "vect" with
    // values
    vector<vector<int> >
    vect{ { 1,1,1,0,0,0},
          { 0,1,0,0,0,0},
          { 1,1,1,0,0,0},
          { 0,0,2,4,4,0},
          { 0,0,0,2,0,0},
          { 0,0,1,2,4,0}
    };
   
    int sum_of_hour_glass = 0;
    int max_hour = 0;
    int x = 0;
    int y = 0;
    while (x+3<=vect.size()) {
        for (;y+3<=vect[0].size();y++)
        {
            cout << "row " << y << endl;
            for (int j = y; j < y+3; j++) {
                for (int i = x; i < x+3; i++){
                    cout << vect[j][i] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        x++;
        y=0;
    }
    return 0;
    
}
