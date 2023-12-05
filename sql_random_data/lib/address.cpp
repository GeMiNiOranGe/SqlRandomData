#include <address.hpp>

SQL_RANDOM_DATA_BEGIN
const std::wstring &Address::get_apartment_number() {
    return this->apartment_number;
}
const std::wstring &Address::get_street() {
    return this->street;
}
const std::wstring &Address::get_district() {
    return this->district;
}
const std::wstring &Address::get_city() {
    return this->city;
}

std::wstring Address::create_random_apartment_number() {
    std::wstring result;
    int number_of_alleys = random(1, 3);
    for (int i = 0; i < number_of_alleys; i++) {
        int random_number = random(1, 750);
        result += std::to_wstring(random_number) + ((number_of_alleys - 1 == i) ? L'\0' : L'/');
    }
    return result;
}
std::wstring Address::create_random_street() {
    std::wstring streets[] = {
        L"Cách mạng tháng 8",
        L"Nguyễn thị minh khai",
        L"Điện biên phủ",
        L"Võ thị sáu",
        L"Lê đại hành",
    };
    int streets_size = sizeof(streets) / sizeof(streets[0]);

    int random_street = rand() % streets_size;
    return streets[random_street];
}
std::wstring Address::create_random_district() {
    return L'Q' + std::to_wstring(random(1, 12));
}
std::wstring Address::create_random_city() {
    return L"Tp HCM";
}
void Address::create_random() {
    this->apartment_number = create_random_apartment_number();
    this->street = create_random_street();
    this->district = create_random_district();
    this->city = create_random_city();
}
SQL_RANDOM_DATA_END