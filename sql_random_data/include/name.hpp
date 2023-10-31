#pragma once
#ifndef NAME_HPP
#define NAME_HPP

#include <cstdint>
#include <string>

#include <config.hpp>
#include <macros.hpp>
#include <miscellaneous.hpp>
#include <sex.hpp>

SQL_RANDOM_DATA_BEGIN
class Name {
private:
    std::wstring last_name, middle_name, first_name;

public:
    Name();
    ~Name();

    const std::wstring &get_last_name();
    const std::wstring &get_middle_name();
    const std::wstring &get_first_name();

    std::wstring create_random_first_name(Sex);
    std::wstring create_random_last_name();
    void create_random_full_name(Sex);
};
SQL_RANDOM_DATA_END // namespace sql_random_data

#endif // end NAME_HPP