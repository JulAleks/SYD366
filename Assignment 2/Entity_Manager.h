/*
Schedule Module
Group 2 - NEE
2023-11-11
Julia Alekseev 051292134
Audrey Duzon 019153147
Minji Kim 112030226
Evelyn Kim 119561223
Hyeri Jang 115328221
*/

#ifndef ENTITY_MANAGER_H_
#define ENTITY_MANAGER_H_

#include <iostream>
#include <string>
#include "CreateCustomerOrder.h"

class EntityManager{
    // Notice how there are no member variables!
public:
    Customer* getCustomers(); 
    Order* getOrders(time_t dueDate);   
    BakedGood* getBakedGoods();
    std::string getSpecialInstruction();

    BakedGood* createBakedGoods();
    BakedGood* getBakedGoods(BakedGood* bg);

    Order* createOrders();
    Order* getOrders(Order* o);

    Customer* createCustomers();
    Customer* getCustomers();

    void persist(Order& o);
};

#endif