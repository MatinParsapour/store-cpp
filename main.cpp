#include <iostream>

#include "src/com/dastan/store/entity/User.h"

using namespace std;

int main() {
    User::User user("Matin","Parsapour","matinparsapour","SomePassword");
    cout << user.get_m_first_name() << " " << user.get_m_last_name() << endl;

}