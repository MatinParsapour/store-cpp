//
// Created by dastan on 9/21/25.
//

#ifndef STORE_USER_H
#define STORE_USER_H
#include <iostream>
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid.hpp>
using namespace std;

namespace User {
    class User {
    public:
        User(const string& firstName, const string& lastName, const string& username, const string& password);
        ~User()= default;

        [[nodiscard]] const boost::uuids::uuid& get_m_id() const;
        [[nodiscard]] const string& get_m_first_name() const;
        [[nodiscard]] const string& get_m_last_name() const;
        [[nodiscard]] const string& get_m_username() const;
        [[nodiscard]] const string& get_m_password() const;

        void set_m_first_name(const string& firstName);
        void set_m_last_name(const string& lastName);
        void set_m_username(const string& username);
        void set_m_password(const string& password);

    private:
        boost::uuids::uuid m_id;
        string m_firstName;
        string m_lastName;
        string m_username;
        string m_password;


    };
} // User

#endif //STORE_USER_H