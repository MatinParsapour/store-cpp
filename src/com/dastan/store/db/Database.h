//
// Created by m.parsapour@dastan.co on 9/30/25.
//

#ifndef STORE_DATABASE_H
#define STORE_DATABASE_H
#include <vector>
#include <map>
#include "../entity/User.h"
#include "../entity/Product.h"
#include "./UserProduct.h"
#include <boost/uuid/uuid.hpp>

namespace Schema {
    class Database {
    public:
        const map<boost::uuids::uuid, User::User>& get_users();
        const map<boost::uuids::uuid, Product::Product>& get_products();
        const std::pmr::vector<Relationship::UserProduct>& get_users_products();

    private:
        map<boost::uuids::uuid, User::User> users;
        map<boost::uuids::uuid, Product::Product> products;
        std::pmr::vector<Relationship::UserProduct> users_products;

        Database();
    };
} // Schema

#endif //STORE_DATABASE_H