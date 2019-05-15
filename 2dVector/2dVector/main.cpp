#include <iostream>
#include <vector> // for 2D vector
using namespace std;

int main()
{
    // Initializing 2D vector "vect" with
    // values
    vector<vector<int> >
    /*
    vect{ { 1,1,1,0,0,0},
          { 0,1,0,0,0,0},
          { 1,1,1,0,0,0},
          { 0,0,2,4,4,0},
          { 0,0,0,2,0,0},
          { 0,0,1,2,4,0}
    };
     */
    vect{ {-1 ,-1, 0 ,-9 ,-2 ,-2},
    {-2 ,-1,-6 ,-8 ,-2, -5},
    {-1 ,-1, -1, -2 ,-3 ,-4},
    {-1 ,-9 -2, -4 ,-4, -5},
    {-7 ,-3, -3 ,-2 ,-9 ,-9},
    {-1, -3, -1, -2 ,-4, -5}
    };
    int sum_of_hour_glass = 0;
    int max_hour_glass = -999999;
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
                sum_of_hour_glass+=vect[y][x+0];
                sum_of_hour_glass+=vect[y][x+1];
                sum_of_hour_glass+=vect[y][x+2];
                sum_of_hour_glass+=vect[y+1][x+1];
                sum_of_hour_glass+=vect[y+2][x+0];
                sum_of_hour_glass+=vect[y+2][x+1];
                sum_of_hour_glass+=vect[y+2][x+2];
            
           
            cout << "sum " << sum_of_hour_glass << endl;
            if (sum_of_hour_glass >= max_hour_glass)
            {
                max_hour_glass = sum_of_hour_glass;
            }
            
            sum_of_hour_glass = 0;
            cout << endl;
        }
       
        x++;
        y=0;
        
       
    }
    cout << "largest hour glass = " << max_hour_glass << endl;
    return 0;
    
}
