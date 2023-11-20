//
// Created by Chia on 2023/11/20.
//

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

struct Sales_data {
    Sales_data() = default;

    Sales_data(const std::string&s): bookNo(s) {
    }

    Sales_data(const std::string&s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) {
    }

    Sales_data(std::istream&);

    std::string isbn() const { return bookNo; }

    Sales_data& combine(const Sales_data&);

    double avg_price() const { return revenue / units_sold; }


    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

std::istream& read(std::istream&is, Sales_data&item);

std::ostream& print(std::ostream&os, const Sales_data&item);


#endif //SALES_DATA_H
