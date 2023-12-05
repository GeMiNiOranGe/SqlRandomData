#pragma once
#ifndef ADDRESS_HPP
#define ADDRESS_HPP

#include <string>

#include <macros.hpp>
#include <miscellaneous.hpp>

SQL_RANDOM_DATA_BEGIN
class Address {
private:
    std::wstring apartment_number, street, district, city;

public:
    const std::wstring &get_apartment_number();
    const std::wstring &get_street();
    const std::wstring &get_district();
    const std::wstring &get_city();

    std::wstring create_random_apartment_number();
    std::wstring create_random_street();
    std::wstring create_random_district();
    std::wstring create_random_city();
    void create_random();
};
SQL_RANDOM_DATA_END

#endif // end ADDRESS_HPP