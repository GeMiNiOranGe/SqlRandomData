#include <ctime>
#include <fcntl.h>
#include <io.h>
#include <iomanip>
#include <iostream>

#include <name.hpp>
#include <phone_number.hpp>

int main() {
    srand((int)time(NULL));
    _setmode(_fileno(stdout), _O_U16TEXT);
    int count;
    std::wcout << L"Input count: ";
    std::wcin >> count;
    std::wcout << std::left;
    for (auto i = 0; i < count; i++) {
        sql_random_data::Sex _sex = static_cast<sql_random_data::Sex>(rand() % 2);
        sql_random_data::Name _name;
        sql_random_data::PhoneNumber _phone_number;
        _name.create_random_full_name(_sex);
        // std::wcout << (_sex == sql_random_data::Sex::MALE ? L"Nam" : L"Nữ") << '\t';
        std::wcout << std::setw(36) << L"(N'" + _name.get_last_name() + L' ' + (_name.get_middle_name().empty() ? std::wstring() : _name.get_middle_name() + L' ') + _name.get_first_name() + L"',";
        std::wcout << std::setw(16) << _phone_number.create_random() + L",)," << std::endl;
    }
    return 0;
}