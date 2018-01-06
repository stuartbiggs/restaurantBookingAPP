/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "Table.h"

using namespace std;

//Default Constructor 
Table::Table() {
    int TableNum = 0;
    string TableState = "empty";
    int CliNum = 0;
}

Table::Table(int peopleTemp) {
    peopleTemp = 0;
}

Table::~Table() {
    
}

//Function that sets the table number
void Table::setTableNumber(int tableNumber) {
    tableNumber = TableNum;
} //end function setTableNumer

//Function that gets the table number
int Table::getTableNumber() const {
    return TableNum;
} //end function getTableNumber

//Function that sets the Table state
void Table::setTableState(string tableState) {
    tableState = TableState;
} //end function setTableState

//Function that gets the Table state
string Table::getTableState() const {
    return TableState;
} // end function getTableState


//Function to set the client number
void Table::setClientNumber(int ClientNumber) {
    CliNum = ClientNumber;
} //end function set Client number

//Function to get Client number
int Table::getClientNumber() const {
    return CliNum;
} //end function get Client number

//Function that displays a welcome message
void Table::displayMessage() const {
    cout << "This is the Table Application " << endl; // table message

    cout << "\nThe table number is: " << getTableNumber()
            << endl;
} //end function displayMessage

//Function to check table status
string Table::checkTableStatus() {
    // str1 stored the text to put inserted into TableState when client 
    // number becomes greater than 0
    // str2 is set to the original text of TableState before it is changed
    string str1 = "Table in use";
    string str2 = TableState;
    string str3 = "Table is not in use.";

    if (CliNum > 0) {

        //cout << "\n" << CliNum << endl;
        //cout << "\n" << TableState << endl;


        str1.swap(str2);
        TableState = str2;
        TableState.swap(str2);
    } else {
        str3.swap(str2);
        TableState = str2;
        TableState.swap(str2);
    }
} //end function check table status

//Function that displays the table state
void Table::displayTableState() const {
    cout << "\nThe table status is: " << getTableState()
            << endl;
} //end function displayTableState

