#include <name.hpp>

SQL_RANDOM_DATA_BEGIN
const std::wstring &Name::get_last_name() {
    return this->last_name;
}
const std::wstring &Name::get_middle_name() {
    return this->middle_name;
}
const std::wstring &Name::get_first_name() {
    return this->first_name;
}

std::wstring Name::create_random_first_name(Sex _sex) {
    int size, index;
    switch (_sex) {
    case Sex::MALE:
        size = sizeof(male_first_names) / sizeof(male_first_names[0]);
        index = rand() % size;
        return male_first_names[index];
    case Sex::FEMALE:
        size = sizeof(female_first_names) / sizeof(female_first_names[0]);
        index = rand() % size;
        return female_first_names[index];
    default:
        return std::wstring();
    }
}

std::wstring Name::create_random_last_name() {
    int size = sizeof(last_names) / sizeof(last_names[0]);
    // Random in range [0, array_size - 1]
    int index = rand() % size;
    return last_names[index];
}

// Randomly generate Vietnamese first and last name
void Name::create_random_full_name(Sex _sex) {
    int8_t fullname_length = random(2, 5);

    this->first_name = create_random_first_name(_sex);
    this->last_name = create_random_last_name();
    this->middle_name = [&]() -> std::wstring {
        if (fullname_length == 2)
            return std::wstring();
        if (fullname_length == 3)
            return create_random_first_name(_sex);

        std::wstring middle_name = create_random_last_name();
        for (int8_t i = 0; i < fullname_length - 3; i++)
            middle_name += L' ' + create_random_first_name(_sex);
        return middle_name;
    }();
}
SQL_RANDOM_DATA_END