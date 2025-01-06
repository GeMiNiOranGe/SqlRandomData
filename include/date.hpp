#pragma once
#ifndef DATE_HPP
#define DATE_HPP

#include <macros.hpp>
#include <miscellaneous.hpp>

SQL_RANDOM_DATA_BEGIN
class Date {
private:
    int day, month, year;

protected:
    const int &get_day();
    const int &get_month();
    const int &get_year();

    void set_day(const int &_day);
    void set_month(const int &_month);
    void set_year(const int &_year);

    bool is_leap_year();
    bool has_30_days_in_month();
    int get_last_day_of_month();

public:
    void create_random(int age_from, int age_to);
};
SQL_RANDOM_DATA_END

#endif // end DATE_HPP