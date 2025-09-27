//
// Created by dastan on 9/27/25.
//

#ifndef STORE_PRODUCT_H
#define STORE_PRODUCT_H
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/random_generator.hpp>
#include <utility>

using namespace std;

namespace Product {
    class Product {
    public:
        Product(const string& name, const string& title, const string& description, const double& price, const int& stock);
        ~Product()=default;

        [[nodiscard]] const boost::uuids::uuid& get_id() const;
        [[nodiscard]] const string& get_name() const;
        [[nodiscard]] const string& get_title() const;
        [[nodiscard]] const string& get_description() const;
        [[nodiscard]] const double& get_price() const;
        [[nodiscard]] const int& get_stock() const;

        void set_name(const string& name);
        void set_title(const string& title);
        void set_description(const string& description);
        void set_price(const double& price);
        void set_stock(const int& stock);



    private:
        boost::uuids::uuid id;
        string name;
        string title;
        string description;
        double price;
        int stock;
    };
} // Product

#endif //STORE_PRODUCT_H