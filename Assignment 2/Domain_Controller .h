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
#ifndef DOMAIN_CONTROLLER_H_
#define DOMAIN_CONTROLLER_H_

#include <iostream>
#include <string>
#include "CreateCustomerOrder.h"

class DomainController{
    // Notice how there are no member variables!
public:
    void setDueDate(date dueDate); 
    void setPickUpTime(time_t pickUpTime);
    void setOrderInfo(std::string instruction, int quantity);
    void setTotal(double totalPrice);
    
    ArrayList<Customers> retrieveCustomers();
    ArrayList<BakedGoods> retrieveBakedGoods();
   
    OrderDetails & getOrderDetail();
    OrderDetails & createOrderDetail();
    Customer&retrieveCustomer(int customerID);
    Order &getOrder();
    BakedGoods& getBakedGoods();

    bool save(Order& o);
    bool saveOrderDetail(Order& od);
};


#endif