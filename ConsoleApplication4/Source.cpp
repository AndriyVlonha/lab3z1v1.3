#include <iostream>    // Підключення бібліотеки для введення/виведення
#include <string>      // Підключення бібліотеки для роботи з рядками

// Оголошення класу Прямокутник
class Rectangle {
private:
    double height;     // Поле для зберігання висоти
    double width;      // Поле для зберігання ширини
    std::string color; // Поле для зберігання кольору

public:
    // Конструктор за замовчуванням - створює прямокутник з нульовими розмірами та білим кольором
    Rectangle() : height(0), width(0), color("white") {}

    // Конструктор з параметрами - створює прямокутник із заданими розмірами та кольором
    Rectangle(double h, double w, std::string c) {
        setHeight(h);  // Встановлення висоти
        setWidth(w);   // Встановлення ширини
        setColor(c);   // Встановлення кольору
    }

    // Метод для обчислення площі прямокутника
    double getArea() const {
        return height * width;
    }

    // Метод для обчислення периметру прямокутника
    double getPerimeter() const {
        return 2 * (height + width);
    }

    // Метод для встановлення висоти з перевіркою на коректність
    void setHeight(double h) {
        if (h >= 0) {
            height = h;
        }
        else {
            std::cout << "Помилка: Висота не може бути від'ємною\n";
        }
    }

    // Метод для встановлення ширини з перевіркою на коректність
    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        }
        else {
            std::cout << "Помилка: Ширина не може бути від'ємною\n";
        }
    }

    // Метод для встановлення кольору з перевіркою на коректність
    void setColor(std::string c) {
        if (!c.empty()) {
            color = c;
        }
        else {
            std::cout << "Помилка: Колір не може бути порожнім\n";
        }
    }

    // Методи для отримання значень полів (геттери)
    double getHeight() const { return height; }     // Повертає висоту
    double getWidth() const { return width; }       // Повертає ширину
    std::string getColor() const { return color; }  // Повертає колір

    // Метод для виведення всіх даних про прямокутник
    void print() const {
        std::cout << "Властивості прямокутника:\n";
        std::cout << "Висота: " << height << "\n";
        std::cout << "Ширина: " << width << "\n";
        std::cout << "Колір: " << color << "\n";
        std::cout << "Площа: " << getArea() << "\n";
        std::cout << "Периметр: " << getPerimeter() << "\n";
    }
};

// Головна функція програми
int main() {
    // Тестування конструктора за замовчуванням
    Rectangle rect1;
    std::cout << "Прямокутник за замовчуванням:\n";
    rect1.print();
    std::cout << "\n";

    // Тестування конструктора з параметрами
    Rectangle rect2(5.0, 3.0, "синій");
    std::cout << "Прямокутник зі встановленими параметрами:\n";
    rect2.print();
    std::cout << "\n";

    // Тестування методів встановлення значень
    Rectangle rect3;
    rect3.setHeight(4.0);    // Встановлення висоти
    rect3.setWidth(6.0);     // Встановлення ширини
    rect3.setColor("червоний"); // Встановлення кольору
    std::cout << "Змінений прямокутник:\n";
    rect3.print();
    std::cout << "\n";

    // Тестування перевірки некоректних значень
    rect3.setHeight(-2.0);   // Має вивести помилку
    rect3.setWidth(-3.0);    // Має вивести помилку
    rect3.setColor("");      // Має вивести помилку

    return 0;  // Завершення програми
}

