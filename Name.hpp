#pragma once
#ifndef NAME_H
#define NAME_H

#include "Macros.hpp"
#include "Miscellaneous.hpp"
#include <string>

SQL_RANDOM_DATA_BEGIN
enum class Sex {
    MALE,
    FEMALE
};

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

const std::wstring male_first_names[] = {
    L"Anh", L"An",
    L"Ân", L"Ấn",
    L"Bình", L"Bảo", L"Bá", L"Bách",
    L"Châu", L"Công", L"Chiến", L"Chấn", L"Chí", L"Cao", L"Cường",
    L"Diệp", L"Danh", L"Dũng", L"Duy", L"Dĩ", L"Dương",
    L"Đan", L"Đức", L"Đăng", L"Đạt", L"Điền", L"Đình", L"Đông", L"Đại",
    L"Gia",
    L"Hải", L"Hiếu", L"Hữu", L"Hùng", L"Huy", L"Hưng", L"Hoàng", L"Hòa", L"Hội", L"Hiệp", L"Hiển", L"Hậu",
    L"Khanh", L"Khánh", L"Kim", L"Khoa", L"Khải", L"Khôi", L"Kiến", L"Kỳ", L"Khải", L"Khang", L"Kiên", L"Khiêm", L"Kiệt",
    L"Linh", L"Lam", L"Lâm", L"Long", L"Luân", L"Lộc", L"Lợi",
    L"Minh", L"Mẫn", L"Mạnh",
    L"Nguyên", L"Nhân", L"Nghĩa", L"Nam", L"Ngọc", L"Nhật", L"Ngân", L"Nhựt",
    L"Phúc", L"Phát", L"Phương", L"Phước", L"Pháp", L"Phi", L"Phong", L"Phú",
    L"Quang", L"Quảng", L"Quân", L"Quốc", L"Quan",
    L"Sơn", L"Sang",
    L"Tuấn", L"Tú", L"Tường", L"Tâm", L"Thiện", L"Tài", L"Thanh", L"Thành", L"Toàn", L"Thắng", L"Trung", L"Thái", L"Trọng", L"Thế", L"Trường", L"Thiên", L"Tùng", L"Trí", L"Triết", L"Tuyên", L"Thông", L"Triệu", L"Tân", L"Tấn", L"Thịnh", L"Thuận", L"Tiến", L"Tín",
    L"Uy",
    L"Việt", L"Vĩ", L"Văn", L"Vinh", L"Vũ", L"Vương", L"Vượng",
    L"Xuân"};
const std::wstring female_first_names[] = {
    L"Anh", L"Ánh", L"Ái", L"An",
    L"Ân",
    L"Bình", L"Bích", L"Bảo",
    L"Chi", L"Châu", L"Châm", L"Cát",
    L"Dung", L"Di", L"Diễm", L"Dương", L"Duyên", L"Diệp", L"Diệu", L"Doanh",
    L"Đào", L"Đan", L"Đoan",
    L"Giang", L"Gia",
    L"Hải", L"Hoa", L"Hân", L"Hà", L"Hương", L"Hồng", L"Huyền", L"Hằng", L"Lan", L"Hạnh", L"Hạ", L"Hiền",
    L"Khánh", L"Kim", L"Kiều", L"Kỳ", L"Khuê", L"Khả",
    L"Linh", L"Lam", L"Loan", L"Ly", L"Lan", L"Liên",
    L"Minh", L"My", L"Mi", L"Mai", L"Mỹ", L"Mẫn",
    L"Nhàn", L"Nga", L"Nhi", L"Ngọc", L"Ngân", L"Như", L"Nghi", L"Nhiên", L"Nhung", L"Nguyệt", L"Nhã", L"Ngà",
    L"Oanh",
    L"Phương", L"Phượng", L"Phụng", L"Phối",
    L"Quỳnh", L"Quyên",
    L"San",
    L"Thương", L"Thảo", L"Trang", L"Thư", L"Thơ", L"Trân", L"Trà", L"Trâm", L"Thy", L"Trúc", L"Tiên", L"Thúy", L"Thùy", L"Thủy", L"Tâm", L"Tú", L"Tuyền", L"Thanh", L"Trinh", L"Tuyết", L"Tường", L"Thắm", L"Thi", L"Tuệ", L"Thục", L"Tố",
    L"Uyên",
    L"Vy", L"Vân",
    L"Xuân",
    L"Yến", L"Ý"};
const std::wstring last_names[] = {
    L"Bùi",
    L"Cao", L"Cơ", L"Cung", L"Cảnh",
    L"Dương", L"Diệp",
    L"Đặng", L"Đỗ", L"Đinh", L"Đường", L"Đàm",
    L"Giêng",
    L"Hoàng", L"Huỳnh", L"Hồ", L"Hứa",
    L"Kiều", L"Khương",
    L"Lê", L"Lý", L"Lương", L"Lâm", L"Lưu", L"Lục", L"Lã", L"Lạc", L"Lôi",
    L"Mai", L"Mã",
    L"Nguyễn", L"Ngô", L"Ngụy",
    L"Phạm", L"Phan", L"Phùng", L"Phó",
    L"Quách",
    L"Trần", L"Trương", L"Tô", L"Trịnh", L"Tống",
    L"Viên", L"Vương", L"Vũ", L"Võ"};
SQL_RANDOM_DATA_END // namespace sql_random_data

#endif // end NAME_H
