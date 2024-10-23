#include <iostream>
#include <string>
using namespace std;

class Rectangle {
private:
    float height;
    float width;
    string color;

public:
    Rectangle() : height(0), width(0), color("none") {}

    Rectangle(float h, float w) : height(0), width(0), color("none") {
        setHeight(h);
        setWidth(w);
    }

    Rectangle(float h, float w, string c) : height(0), width(0), color("none") {
        setHeight(h);
        setWidth(w);
        setColor(c);
    }

    void setHeight(float h) {
        if (h >= 0) height = h;
        else cout << "Помилка: висота не може бути від'ємною\n";
    }

    void setWidth(float w) {
        if (w >= 0) width = w;
        else cout << "Помилка: ширина не може бути від'ємною\n";
    }

    void setColor(string c) { color = c; }

    float getHeight() const { return height; }
    float getWidth() const { return width; }
    string getColor() const { return color; }

    float calculateArea() const { return height * width; }
    float calculatePerimeter() const { return 2 * (height + width); }

    void printInfo() const {
        cout << "\nІнформація про прямокутник:"
            << "\nВисота: " << height
            << "\nШирина: " << width
            << "\nКолір: " << color
            << "\nПлоща: " << calculateArea()
            << "\nПериметр: " << calculatePerimeter() << "\n";
    }
};

int main() {
    system("chcp 1251");

    Rectangle r1;
    Rectangle r2(5.0f, 3.0f);
    Rectangle r3(4.0f, 6.0f, "синій");

    cout << "\n=== Тестування конструкторів ===";
    r1.printInfo();
    r2.printInfo();
    r3.printInfo();

    cout << "\n=== Тестування методів встановлення значень ===";
    r1.setHeight(2.5f);
    r1.setWidth(3.5f);
    r1.setColor("червоний");
    r1.printInfo();

    cout << "\n=== Тестування отримання значень ===";
    cout << "\nВисота r2: " << r2.getHeight()
        << "\nШирина r2: " << r2.getWidth()
        << "\nКолір r2: " << r2.getColor() << "\n";

    cout << "\n=== Тестування некоректних значень ===";
    r1.setHeight(-5.0f);
    r1.setWidth(-3.0f);
    r1.printInfo();

    cout << "\n=== Створення власного прямокутника ===\n";
    Rectangle userRect;
    float height, width;
    string color;

    cout << "Введіть висоту прямокутника: ";
    cin >> height;
    userRect.setHeight(height);

    cout << "Введіть ширину прямокутника: ";
    cin >> width;
    userRect.setWidth(width);

    cout << "Введіть колір прямокутника: ";
    cin >> color;
    userRect.setColor(color);

    cout << "\nВаш прямокутник:";
    userRect.printInfo();

    return 0;
}
