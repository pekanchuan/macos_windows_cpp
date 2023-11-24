//
// Created by Chia on 2023/11/24.
//

#include "Account.h"

using std::string;

const string Account::accountType("Savings Account");
double Account::interestRate = initRate();

void Account::rate(double newRate) {
    interestRate = newRate;
}