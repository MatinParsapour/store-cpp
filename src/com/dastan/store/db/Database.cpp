//
// Created by m.parsapour@dastan.co on 9/30/25.
//

#include "Database.h"
#include <vector>
#include "../entity/User.h"

namespace Schema {

    Database::Database() : users(), products(), users_products(){}

    const map<boost::uuids::uuid, User::User>& Database::get_users()
    {
        return users;
    }

    const map<boost::uuids::uuid, Product::Product>& Database::get_products()
    {
        return products;
    }

    const std::pmr::vector<Relationship::UserProduct>& Database::get_users_products()
    {
        return users_products;
    }



} // Schema