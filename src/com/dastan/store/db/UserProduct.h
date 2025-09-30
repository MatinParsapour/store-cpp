//
// Created by m.parsapour@dastan.co on 9/30/25.
//

#ifndef STORE_USERPRODUCT_H
#define STORE_USERPRODUCT_H
#include <boost/uuid/uuid.hpp>

namespace Relationship
{
    class UserProduct
    {
    protected:
        UserProduct(const boost::uuids::uuid& userId, const boost::uuids::uuid& productId, const int& quantity);

        const int& get_quantity() const;
        void add_quantity(const int& newQuantity);
        bool subtract_quantity(const int& newQuantity);

    private:
        boost::uuids::uuid userId;
        boost::uuids::uuid productId;
        int quantity;

    };
} // Relationship

#endif //STORE_USERPRODUCT_H