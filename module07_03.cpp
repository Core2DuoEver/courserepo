#include <iostream>
#include <vector>

void print(int value) {
    std::cout << "Type: int, Value : " << value;
}

void print(float value) {
    std::cout << "Type: float, Value : " << value;
}

void print(const std::string value) {
    std::cout << "Type: string, Value : " << value;
}

void print(const char* value) {
    std::cout << "Type: const char*, Value : " << value;
}

void print(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Type: int* arr, Value : " << arr[i] << " ";
    }
}

void print(std::vector<int> vec) {
    for (int vec_i : vec) {
        std::cout << "Type: std::vector<int>, Value : " << vec_i << " ";
    }
}

// Для std::shared_ptr<int>
void print(const std::shared_ptr<int>& ptr) {
    if (ptr) {
        std::cout << "Type: std::shared_ptr<int>, Value : " << *ptr;
    }
    else {
        std::cout << "Type: std::shared_ptr<int>, Value: nullptr" << std::endl;
    }
}

// Для std::unique_ptr<double>
void print(const std::unique_ptr<double>& ptr) {
    if (ptr) {
        std::cout << "Type: std::unique_ptr<double>, Value: " << *ptr << std::endl;
    }
    else {
        std::cout << "Type: std::unique_ptr<double>, Value: nullptr" << std::endl;
    }
}
int main() {
    std::cout << "=== Демонстрация перегруженных функций print() ===" << std::endl;

    int int_val = 1;
    print(int_val);

    float float_val = 3.14;
    print(float_val);

    std::string str_val = "Hello, World!";
    print(str_val);

    const char* cstr_val = "C-style string";
    print(cstr_val);

    int int_arr[] = { 1, 2, 3, 4, 5 };
    print(int_arr, 5);

    std::vector<int> vec = { -1, -2, -3, -4, -5};
    print(vec);

    std::shared_ptr<int> shared_val = std::make_shared<int>(100);
    print(shared_val);

    std::shared_ptr<int> shared_val2 = shared_val;
    std::cout << "После создания второй ссылки:" << std::endl;
    print(shared_val);

    std::unique_ptr<double> unique_val = std::make_unique<double>(3.144444);
    print(unique_val);

    std::shared_ptr<int> null_shared;
    print(null_shared);

    std::unique_ptr<double> null_unique;
    print(null_unique);

    return 0;
}