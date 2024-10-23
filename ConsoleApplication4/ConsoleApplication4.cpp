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
        else cout << "�������: ������ �� ���� ���� ��'�����\n";
    }

    void setWidth(float w) {
        if (w >= 0) width = w;
        else cout << "�������: ������ �� ���� ���� ��'�����\n";
    }

    void setColor(string c) { color = c; }

    float getHeight() const { return height; }
    float getWidth() const { return width; }
    string getColor() const { return color; }

    float calculateArea() const { return height * width; }
    float calculatePerimeter() const { return 2 * (height + width); }

    void printInfo() const {
        cout << "\n���������� ��� �����������:"
            << "\n������: " << height
            << "\n������: " << width
            << "\n����: " << color
            << "\n�����: " << calculateArea()
            << "\n��������: " << calculatePerimeter() << "\n";
    }
};

int main() {
    system("chcp 1251");

    Rectangle r1;
    Rectangle r2(5.0f, 3.0f);
    Rectangle r3(4.0f, 6.0f, "����");

    cout << "\n=== ���������� ������������ ===";
    r1.printInfo();
    r2.printInfo();
    r3.printInfo();

    cout << "\n=== ���������� ������ ������������ ������� ===";
    r1.setHeight(2.5f);
    r1.setWidth(3.5f);
    r1.setColor("��������");
    r1.printInfo();

    cout << "\n=== ���������� ��������� ������� ===";
    cout << "\n������ r2: " << r2.getHeight()
        << "\n������ r2: " << r2.getWidth()
        << "\n���� r2: " << r2.getColor() << "\n";

    cout << "\n=== ���������� ����������� ������� ===";
    r1.setHeight(-5.0f);
    r1.setWidth(-3.0f);
    r1.printInfo();

    cout << "\n=== ��������� �������� ������������ ===\n";
    Rectangle userRect;
    float height, width;
    string color;

    cout << "������ ������ ������������: ";
    cin >> height;
    userRect.setHeight(height);

    cout << "������ ������ ������������: ";
    cin >> width;
    userRect.setWidth(width);

    cout << "������ ���� ������������: ";
    cin >> color;
    userRect.setColor(color);

    cout << "\n��� �����������:";
    userRect.printInfo();

    return 0;
}
