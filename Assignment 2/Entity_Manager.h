/*
Schedule Module
Group 2 - NEE
2023-11-09
Julia Alekseev 051292134
Audrey Duzon 019153147
Minji Kim 112030226
Evelyn Kim 119561223
Hyeri Jang 115328221
*/

#ifndef ENTITY_MANAGER_H_
#define ENTITY_MANAGER_H_

#include <iostream>
#include "CreateCustomerOrder.h"

class EntityManager{
    // Notice how there are no member variables!
public:
    Customers& getCustomers(); 
    Orders& getOrder(date dueDate);   
    BakedGoods & getBakedGoods();
    std::string getSpecialInstructions();

    ArrayList<BakedGoods> createBakedGoodsList();
    ArrayList<BakedGoods> getIBakedGoodsList(BakedGoods& bg);

    ArrayList<Orders> createOrderList();
    ArrayList<Orders> getOrderList(Orders& o);

    ArrayList<Customer> createCustomerList();
    ArrayList<Customer> getCustomerList();

    bool persist(Order& o);
};

#endif