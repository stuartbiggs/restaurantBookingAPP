/* 
 * File:   main.cpp
 * Author: stuartbiggs
 *
 * Created on 19 December 2017, 13:20
 */
#include <iostream>
#include <string>
#include "Table.h" 


int main() {

    Table myTable; // table instance
    
  
    
    myTable.displayMessage(); // display the welcome message of the table
    
    cout << "\nPlease enter number of people at table: " << endl;
    getline( cin, CliNum );
   
    myTable.displayTableState();
    
    return 0;
} //end function main

