
/* 
 * File:   Table.h
 * Author: stuartbiggs
 *
 * Created on 21 December 2017, 02:03
 */



#include <iostream>
#include <string>

using namespace std;

#ifndef Table_H
#define Table_H

class Table {
public:
    //Default Constructor
    Table();
    
    //Overload Constructor
    Table(int);
    
    void setTableNumber(int tableNumber);
    int getTableNumber() const;
    void setTableState(string tableState);
    string getTableState() const;
    void setClientNumber(int Number);
    int getClientNumber() const;
    string checkTableStatus();
    void displayMessage() const;
    void displayTableState() const;

private:
    //Member Variables 
    int TableNum;
    string TableState;
    int CliNum;
};

#endif

