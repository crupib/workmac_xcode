//
//  main.c
//  struc_test
//
//  Created by William Crupi on 10/7/18.
//  Copyright © 2018 William Crupi. All rights reserved.
//
// structure with an array of 10 integers
#include <stdio.h>
struct data{
    int datatint[10];
} data;

int main(int argc, const char * argv[]) {
    // 3 variables two for new and old data and a generic pointer
    struct data *dataptr, olddata, newdata;
    printf("Testing, for Atco!\n");
    
    dataptr = &olddata; // generic pointer pointing to olddata
    // loop to load olddata with all 9's
    for (int i = 0 ; i < 10; i++)
    {
        dataptr->datatint[i] = 9;
    }
    dataptr = &newdata;  // generic pointer pointing to newdata
    //loop to load newdata with 20's
    for (int i = 0 ; i < 10; i++)
    {
        dataptr->datatint[i] = 20;
    }
    
    dataptr = &olddata; //switch back to olddata to print values
    for (int i = 0 ; i < 10; i++)
    {
        printf("datapoint %d,%d \n", i, dataptr->datatint[i]);
    }
    dataptr = &newdata;  //switch back to newdata to print values
    for (int i = 0 ; i < 10; i++)
    {
        printf("datapoint %d,%d \n", i, dataptr->datatint[i]);
    }

    return 0;
}
