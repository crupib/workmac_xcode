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
    while (y+3<=vect[0].size())
    {
        cout << "row " << y << endl;
        
        for (int j = y; j < y+3; j++) {
            for (int i = x; i < x+3; i++){
                cout << vect[j][i] << " ";
            }
            cout << endl;
        }
        y++;
        cout << endl;
        
    }
    x++;
    y=0;
    while (y+3<=vect[0].size())
    {
        cout << "row " << y << endl;
        
        for (int j = y; j < y+3; j++) {
            for (int i = x; i < x+3; i++){
                cout << vect[j][i] << " ";
            }
            cout << endl;
        }
        y++;
        cout << endl;
    }
    x++;
    y=0;
    while (y+3<=vect[0].size())
    {
        cout << "row " << y << endl;
        
        for (int j = y; j < y+3; j++) {
            for (int i = x; i < x+3; i++){
                cout << vect[j][i] << " ";
            }
            cout << endl;
        }
        y++;
        cout << endl;
    }
    x++;
    y=0;
    while (y+3<=vect[0].size())
    {
        cout << "row " << y << endl;
        
        for (int j = y; j < y+3; j++) {
            for (int i = x; i < x+3; i++){
                cout << vect[j][i] << " ";
            }
            cout << endl;
        }
        y++;
        cout << endl;
    }
    
    return 0;
    
}
/*
 x = 1;
 for (int j = y; j < y+3; j++) {
 for (int i = 1; i < x+3; i++){
 cout << vect[j][i] << " ";
 if (i == 2)
 sum_of_hour_glass_1 += vect[j][i];
 }
 
 cout << endl;
 }
 cout << endl;
 x = 2;
 for (int j = y; j < y+3; j++) {
 for (int i = 2; i < x+3; i++){
 cout << vect[j][i] << " ";
 sum_of_hour_glass_1 += vect[j][i] ;
 }
 cout << endl;
 }
 cout << endl;
 x = 3;
 for (int j = y; j < y+3; j++) {
 for (int i = 3; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 x = 0;
 if ((y+3) > vect[0].size())
 {
 goto done;
 }
 for (int j = y; j < y+3; j++) {
 for (int i = 0; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 cout << endl;
 x = 1;
 
 for (int j = y; j < y+3; j++) {
 for (int i = 1; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 cout << endl;
 x = 2;
 
 for (int j = y; j < y+3; j++) {
 for (int i = 2; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 cout << endl;
 
 x = 3;
 
 for (int j = y; j < y+3; j++) {
 for (int i = 3; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 cout << endl;
 
 cout << "next rows 3" << endl <<endl;
 
 y = 2;
 x = 0;
 if ((y+3) > vect[0].size())
 {
 goto done;
 }
 for (int j = y; j < y+3; j++) {
 for (int i = 0; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 cout << endl;
 x = 1;
 
 for (int j = y; j < y+3; j++) {
 for (int i = 1; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 cout << endl;
 x = 2;
 
 for (int j = y; j < y+3; j++) {
 for (int i = 2; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 cout << endl;
 
 x = 3;
 
 for (int j = y; j < y+3; j++) {
 for (int i = 3; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 cout << endl;
 
 cout << "next rows 4" << endl <<endl;
 
 if ((y+3) > vect[0].size())
 {
 goto done;
 }
 y = 3;
 x = 0;
 for (int j = y; j < y+3; j++) {
 for (int i = 0; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 cout << endl;
 x = 1;
 
 for (int j = y; j < y+3; j++) {
 for (int i = 1; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 cout << endl;
 x = 2;
 
 for (int j = y; j < y+3; j++) {
 for (int i = 2; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 cout << endl;
 
 x = 3;
 
 for (int j = y; j < y+3; j++) {
 for (int i = 3; i < x+3; i++){
 cout << vect[j][i] << " ";
 }
 cout << endl;
 }
 cout << endl;
 }
 done:
 
 
 
 
 
 
 
 
*/
