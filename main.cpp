/* 
 * File:   main.cpp
 * Author: stuartbiggs
 *
 * Created on 19 December 2017, 13:20
 */

#include <iostream>
#include <string>
using namespace std;

class Table
{
public:
    //function that sets the table number
    void setTableNumber( int tableNumber ) 
    {
        tableNumber = TableNum;
    } //end function setTableNumer
    
    //function that gets the table number
    int getTableNumber() const
    {
        return TableNum;
    } //end function getTableNumber
    
    //function that sets the Table state
    void setTableState( string tableState )
    {
        tableState = TableState;
    } //end function setTableState
     
    //function that gets the Table state
    string getTableState() const
    {
        return TableState;
    } // end function getTableState
    
  
    //function that displays a welcome message
    void displayMessage() const
    {
        cout << "This is the table Application " << endl; // table message
        cout << "\nThe table number is: " << getTableNumber()
                << endl;
    } //end function displayMessage
    
    //function that displays the table state
    void displayTableState() const
    {
        cout << "The table status is: " << getTableState() 
                << endl;
    } //end function displayTableState
    
   
    
private:
    int TableNum = 1;
    string TableState = "empty";
};

/*
 * 
 */
int main() {

    Table myTable; // table instance
    
    myTable.displayMessage(); // display the welcome message of the table
    myTable.displayTableState();
    
    return 0;
} //end function main

