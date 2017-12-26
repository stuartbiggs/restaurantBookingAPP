/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>
#include "Table.h"

using namespace std;

   
    Table::Table() //Constructor 
    {
        int TableNum = 0;
        string TableState = "empty";
    }
    
    //function that sets the table number
    void Table::setTableNumber( int tableNumber ) 
    {
        tableNumber = TableNum;
    } //end function setTableNumer
    
    //function that gets the table number
    int Table::getTableNumber() const
    {
        return TableNum;
    } //end function getTableNumber
    
    //function that sets the Table state
    void Table::setTableState( string tableState )
    {
        tableState = TableState;
    } //end function setTableState
     
    //function that gets the Table state
    string Table::getTableState() const
    {
        return TableState;
    } // end function getTableState
    
  
   
    void Table::setClientNumber(int ClientNumber) 
    {
        CliNum = ClientNumber;
    }
    
    int Table::getClientNumber() const
    {
        return CliNum;
    }
    
    
    
    
    //function that displays a welcome message
    void Table::displayMessage() const
    {
        cout << "This is the Table Application " << endl; // table message
        
        cout << "\nThe table number is: " << getTableNumber()
                << endl;
    } //end function displayMessage
    
    //function that displays the table state
    void Table::displayTableState() const
    {
        cout << "\nThe table status is: " << getTableState() 
                << endl;
    } //end function displayTableState
    
   