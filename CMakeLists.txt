cmake_minimum_required(VERSION 4.0)
project(store)

set(CMAKE_CXX_STANDARD 26)

add_executable(store main.cpp
        src/com/dastan/store/entity/User.cpp
        src/com/dastan/store/entity/User.h
        src/com/dastan/store/entity/Product.cpp
        src/com/dastan/store/entity/Product.h
        src/com/dastan/store/db/Database.cpp
        src/com/dastan/store/db/Database.h
        src/com/dastan/store/db/UserProduct.cpp
        src/com/dastan/store/db/UserProduct.h)
