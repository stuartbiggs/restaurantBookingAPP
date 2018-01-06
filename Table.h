
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
    
    //Destructor
    ~Table();
    
    //Accessor Functions
    int getTableNumber() const;
    string getTableState() const;
    int getClientNumber() const;
    
    //Mutator Functions
    void setTableNumber(int tableNumber);
    void setTableState(string tableState);
    void setClientNumber(int Number);
   
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

