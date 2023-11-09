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

#ifndef UI_CONTROLLER_H_
#define UI_CONTROLLER_H_

#include <iostream>
#include <string>
#include "CreateCustomerOrder.h"


class UIController{
    //no member variables!
public:
    void requestNewOrder();
    void requestCustomers();
    void enterDueDate(date dueDate);
    void enterPickUpTime(time pickUpTime);
    void enterOrderInfo(std::string ininstruction, int quantity);

    Customer & selectCustomer(int customerID);
    BakedGoods& selectBakedGood(int goodID);

    ArrayList<BakedGoods> requestBakedGoods();
   
    bool confirmOrderDetail(OrderDetails& od);
    bool confirm(Order& o);
};

#endif