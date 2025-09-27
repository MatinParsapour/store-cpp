#include <iostream>

#include "src/com/dastan/store/entity/Product.h"
#include "src/com/dastan/store/entity/User.h"
#include <boost/lexical_cast.hpp>

using namespace std;

int main() {
    User::User user("Matin","Parsapour","matinparsapour","SomePassword");
    cout << user.get_m_first_name() << " " << user.get_m_last_name() << endl;

    Product::Product product("Show","A new show from addidass", "This new show can make you walk better", 23.5, 30);
    cout << product.get_name() << " " << product.get_description() << " " << product.get_title() << " " << product.get_price() << " " << product.get_stock() << "\n";

    product.set_name("Shirt");
    product.set_title("New cool shirt");
    product.set_description("This new shirt can make you sweat less");
    product.set_price(98.5);
    product.set_stock(23);
    cout << product.get_name() << " " << product.get_description() << " " << product.get_title() << " " << product.get_price() << " " << product.get_stock() << "\n";
}
