//
// Created by m.parsapour@dastan.co on 9/30/25.
//

#include "../db/UserProduct.h"
#include <boost/uuid/uuid.hpp>

#include "Database.h"

namespace Relationship
{
    Relationship::UserProduct::UserProduct(const boost::uuids::uuid& userId, const boost::uuids::uuid& productId, const int& quantity) : userId(userId), productId(productId), quantity(quantity) {}

    const int& UserProduct::get_quantity() const
    {
        return quantity;
    }

    void UserProduct::add_quantity(const int& newQuantity)
    {
        quantity = quantity + newQuantity;
    }

    bool UserProduct::subtract_quantity(const int& newQuantity)
    {
        // If new quantity is less than zero, the quantity can't be changed so modification is invalid
        if (newQuantity < 0) return false;

        quantity = quantity - newQuantity;

        // Checks if new quantity is less than zero, it means the vendor is out of stock so new quantity will be zero
        if (quantity < 0) quantity = 0;
        return true;
    }

} // Relationship