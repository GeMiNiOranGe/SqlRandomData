#include <date.hpp>
#include <iostream>

SQL_RANDOM_DATA_BEGIN
const int &Date::get_day() {
    return this->day;
}
const int &Date::get_month() {
    return this->month;
}
const int &Date::get_year() {
    return this->year;
}

void Date::set_day(const int &_day) {
    this->day = _day;
}
void Date::set_month(const int &_month) {
    this->month = _month;
}
void Date::set_year(const int &_year) {
    this->year = _year;
}

bool Date::is_leap_year() {
    return (get_year() % 400 == 0) || (get_year() % 4 == 0 && get_year() % 100 != 0);
}

bool Date::has_30_days_in_month() {
    return get_month() == 4 || get_month() == 6 || get_month() == 9 || get_month() == 11;
}

int Date::get_last_day_of_month() {
    bool has_30_days = has_30_days_in_month();
    if (has_30_days)
        return 30;
    if (!has_30_days && get_month() != 2)
        return 31;
    return is_leap_year() ? 29 : 28;
}

void Date::create_random(int age_from, int age_to) {
}
SQL_RANDOM_DATA_END