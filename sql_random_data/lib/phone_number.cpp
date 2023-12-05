#include "phone_number.hpp"

SQL_RANDOM_DATA_BEGIN
std::wstring PhoneNumber::create_random() {
    std::wstring result = L"0";
    for (int i = 0; i < 9; i++) {
        int random_number = random(0, 9);
        result += std::to_wstring(random_number);
	}
	return result;
}
SQL_RANDOM_DATA_END