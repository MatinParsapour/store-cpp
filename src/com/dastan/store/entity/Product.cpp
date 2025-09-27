//
// Created by dastan on 9/27/25.
//

#include "Product.h"
using namespace std;

namespace Product {

    Product::Product::Product(const string& name, const string& title, const string& description, const double& price, const int& stock): id(boost::uuids::random_generator()()), name(name), title(title), description(description), price(price), stock(stock) {}

    const boost::uuids::uuid& Product::get_id() const {
        return id;
    }

    const string& Product::get_name() const {
        return name;
    }

    const string& Product::get_title() const {
        return title;
    }

    const string& Product::get_description() const {
        return description;
    }

    const double& Product::get_price() const {
        return price;
    }

    const int& Product::get_stock() const {
        return stock;
    }

    void Product::set_name(const string& name) {
        this -> name = name;
    }

    void Product::set_description(const string& description) {
        this -> description = description;
    }

    void Product::set_title(const string& title) {
        this -> title = title;
    }

    void Product::set_price(const double& price) {
        this -> price = price;
    }

    void Product::set_stock(const int& stock) {
        this -> stock = stock;
    }

} // Product