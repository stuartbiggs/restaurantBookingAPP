
/* 
 * File:   Table.h
 * Author: stuartbiggs
 *
 * Created on 21 December 2017, 02:03
 */



#include <iostream>
#include <string>
using namespace std;

class Table
{

    
public:    
    explicit Table();
    void setTableNumber( int tableNumber );
    int getTableNumber() const;
    void setTableState( string tableState );
    string getTableState() const;
    void setClientNumber( int Number );
    int getClientNumber() const;
    string checkTableStatus();
    void displayMessage() const;
    void displayTableState() const;
    
private:
    int TableNum = 1;
    string TableState = "Empty";
    int CliNum = 0;
};