/* 
 * File:   main.cpp
 * Author: stuartbiggs
 *
 * Created on 19 December 2017, 13:20
 */

#include <iostream>
#include <string>
#include "Table.h" 

int peopleTemp;

int main() {

    Table myTable(peopleTemp); // table instance called myTable

    myTable.displayMessage(); // display the welcome message of the table

    // prompts for no of clients at table
    cout << "\nPlease enter number of people at table: " << endl;
    cin >> peopleTemp;
    myTable.setClientNumber(peopleTemp); // stores number of clients at table 
    // in peopleTemp variable

    myTable.checkTableStatus(); // checks table status 


    myTable.displayTableState(); // displays table status

    return 0;
} //end function main

// another comment

