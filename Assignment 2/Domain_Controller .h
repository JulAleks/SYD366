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
#ifndef DOMAIN_CONTROLLER_H_
#define DOMAIN_CONTROLLER_H_

#include <iostream>
#include <string>
#include "CreateCustomerOrder.h"

class DomainController{
    // Notice how there are no member variables!
public:
    void setDueDate(time_t dueDate); 
    void setPickUpTime(time_t pickUpTime);
    void setOrderInfo(std::string instruction, int quantity);
    void setTotal(double totalPrice);
    
    Customer* retrieveCustomers();
    BakedGood* retrieveBakedGoods();
   
    OrderDetail getOrderDetail();
    OrderDetail createOrderDetail();
    Customer retrieveCustomer(int customerID);
    Order getOrder();
    BakedGood* getBakedGoods();

    void save(Order& o);
    bool saveOrderDetail(OrderDetail& od);
};


#endif