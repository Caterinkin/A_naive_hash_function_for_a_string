#include <iostream>
#include <string>

// Функция для вычисления наивного хэша строки
int simple_string_hash(std::string s)
{
    int hash = 0;  // Инициализируем переменную для хранения хэша
    
    // Проходим по каждому символу строки
    for (char c : s)
    {
        hash += static_cast<int>(c);  // Добавляем код символа к хэшу
    }
    return hash;  // Возвращаем вычисленный хэш
}

int main()
{
    setlocale(LC_ALL, "rus");
    std::string input;  // Переменная для хранения ввода пользователя
    do
    {
        std::cout << "Введите строку: ";
        std::getline(std::cin, input);  // Считываем строку от пользователя

        // Вычисляем хэш введенной строки и выводим его
        int hash = simple_string_hash(input);
        std::cout << "Наивный хэш строки " << input << " = " << hash << std::endl;

    } while (input != "exit");  // Продолжаем цикл, пока пользователь не введет "exit"

    return EXIT_SUCCESS;
}