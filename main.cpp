#include <iostream>
#include <string>

// ������� ��� ���������� �������� ���� ������
int simple_string_hash(std::string s)
{
    int hash = 0;  // �������������� ���������� ��� �������� ����
    
    // �������� �� ������� ������� ������
    for (char c : s)
    {
        hash += static_cast<int>(c);  // ��������� ��� ������� � ����
    }
    return hash;  // ���������� ����������� ���
}

int main()
{
    setlocale(LC_ALL, "rus");
    std::string input;  // ���������� ��� �������� ����� ������������
    do
    {
        std::cout << "������� ������: ";
        std::getline(std::cin, input);  // ��������� ������ �� ������������

        // ��������� ��� ��������� ������ � ������� ���
        int hash = simple_string_hash(input);
        std::cout << "������� ��� ������ " << input << " = " << hash << std::endl;

    } while (input != "exit");  // ���������� ����, ���� ������������ �� ������ "exit"

    return EXIT_SUCCESS;
}