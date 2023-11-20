//
// Created by Chia on 2023/11/20.
//

#ifndef SALES_ITEM_H
#define SALES_ITEM_H

#include <iostream>
#include <string>

class Sales_item {
    friend std::istream& operator>>(std::istream&, Sales_item&);

    friend std::ostream& operator<<(std::ostream&, const Sales_item&);

    friend bool operator<(const Sales_item&, const Sales_item&);

    friend bool operator==(const Sales_item&, const Sales_item&);

public:
    Sales_item() = default;

    Sales_item(const std::string&book): bookNo(book) {
    }

    Sales_item(std::istream&is) { is >> *this; }

public:
    Sales_item& operator+=(const Sales_item&);

    std::string isbn() const { return bookNo; }

    double avg_price() const;

private:
    std::string bookNo;
    unsigned unites_sold = 0;
    double revenue = 0.0;
};

inline
bool compareIsbn(const Sales_item&lhs, const Sales_item&rhs) {
    return lhs.isbn() == rhs.isbn();
}

Sales_item operator+(const Sales_item&, const Sales_item&);

inline bool
operator==(const Sales_item&lhs, const Sales_item&rhs) {
    return lhs.unites_sold == rhs.unites_sold &&
           lhs.revenue == rhs.revenue &&
           lhs.isbn() == rhs.isbn();
}

inline bool
operator!=(const Sales_item&lhs, const Sales_item&rhs) {
    return !(lhs == rhs);
}

inline Sales_item& Sales_item::operator+=(const Sales_item&rhs) {
    unites_sold += rhs.unites_sold;
    revenue += rhs.revenue;
    return *this;
}

inline Sales_item operator+(const Sales_item&lhs, const Sales_item&rhs) {
    Sales_item ret(lhs);
    ret += rhs;
    return ret;
}

inline std::istream& operator>>(std::istream&in, Sales_item&s) {
    double price;
    in >> s.bookNo >> s.unites_sold >> price;
    if (in)
        s.revenue = s.unites_sold * price;
    else
        s = Sales_item();
    return in;
}

inline std::ostream& operator<<(std::ostream&out, const Sales_item&s) {
    out << s.isbn() << " " << s.unites_sold << " " << s.revenue << " " << s.avg_price();
    return out;
}

inline double Sales_item::avg_price() const {
    if (unites_sold)
        return revenue / unites_sold;
    else
        return 0;
}


#endif //SALES_ITEM_H
