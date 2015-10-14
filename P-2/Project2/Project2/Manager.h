/*****************************************
** File:    Manager.h
** Project: CMSC 341 Project 2, Fall 2015
** Author:  Zafar Mamarakhimov
** Date:
** Section: 5
** E-mail:  mzafar2@umbc.edu
**
** Header file for Manager class
**
***********************************************/

#ifndef MANAGER_H
#define MANAGER_H
#include "Store.h"
#include "Orders.h"

class Manager
{
public:
	Manager();
	Manager(char* store, char* order);

	void createStore(std::string filename);
	void createOrders(std::string filename);
	void fillOrders(std::ofstream& stream);
	void printStatus(std::ofstream& stream);

private:
	Store m_store;
	Orders m_orders;
	std::string outputFile = "results.txt";
	std::ofstream output;


	//~Manager();
};

#endif