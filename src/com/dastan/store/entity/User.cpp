//
// Created by dastan on 9/21/25.
//

#include "User.h"
#include <iostream>
using namespace std;

namespace User {

    User::User::User(const string& firstName, const string& lastName, const string& username, const string& password) : m_id(boost::uuids::random_generator()()), m_firstName(firstName), m_lastName(lastName), m_username(username), m_password(password) {}

    const boost::uuids::uuid& User::get_m_id() const {
        return m_id;
    }

    const string& User::User::get_m_first_name() const {
        return m_firstName;
    }

    const string& User::User::get_m_last_name() const {
        return m_lastName;
    }

    const string& User::get_m_username() const {
        return m_username;
    }

    const string& User::get_m_password() const {
        return m_password;
    }

    void User::set_m_first_name(const string& firstName) {
        m_firstName = firstName;
    }

    void User::set_m_last_name(const string &lastName) {
        m_lastName = lastName;
    }

    void User::set_m_username(const string &username) {
        m_username = username;
    }

    void User::set_m_password(const string &password) {
        m_password = password;
    }
} // User