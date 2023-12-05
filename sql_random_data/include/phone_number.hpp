#pragma once
#ifndef PHONE_NUMBER_HPP
#define PHONE_NUMBER_HPP

#include <string>

#include <macros.hpp>
#include <miscellaneous.hpp>

SQL_RANDOM_DATA_BEGIN
class PhoneNumber {
private:
public:
    std::wstring create_random();
};
SQL_RANDOM_DATA_END

#endif // end PHONE_NUMBER_HPP