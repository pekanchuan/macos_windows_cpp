//
// Created by Chia on 2023/11/20.
//

#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data&rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}



std::istream& read(std::istream&is, Sales_data&item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream& print(std::ostream&os, const Sales_data&item) {
    os << item.isbn() << " " << item.units_sold << " "
            << item.revenue << " " << item.avg_price();
    return os;
}
