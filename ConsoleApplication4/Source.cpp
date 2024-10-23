#include <iostream>    // ϳ��������� �������� ��� ��������/���������
#include <string>      // ϳ��������� �������� ��� ������ � �������

// ���������� ����� �����������
class Rectangle {
private:
    double height;     // ���� ��� ��������� ������
    double width;      // ���� ��� ��������� ������
    std::string color; // ���� ��� ��������� �������

public:
    // ����������� �� ������������� - ������� ����������� � ��������� �������� �� ���� ��������
    Rectangle() : height(0), width(0), color("white") {}

    // ����������� � ����������� - ������� ����������� �� �������� �������� �� ��������
    Rectangle(double h, double w, std::string c) {
        setHeight(h);  // ������������ ������
        setWidth(w);   // ������������ ������
        setColor(c);   // ������������ �������
    }

    // ����� ��� ���������� ����� ������������
    double getArea() const {
        return height * width;
    }

    // ����� ��� ���������� ��������� ������������
    double getPerimeter() const {
        return 2 * (height + width);
    }

    // ����� ��� ������������ ������ � ��������� �� ����������
    void setHeight(double h) {
        if (h >= 0) {
            height = h;
        }
        else {
            std::cout << "�������: ������ �� ���� ���� ��'�����\n";
        }
    }

    // ����� ��� ������������ ������ � ��������� �� ����������
    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        }
        else {
            std::cout << "�������: ������ �� ���� ���� ��'�����\n";
        }
    }

    // ����� ��� ������������ ������� � ��������� �� ����������
    void setColor(std::string c) {
        if (!c.empty()) {
            color = c;
        }
        else {
            std::cout << "�������: ���� �� ���� ���� �������\n";
        }
    }

    // ������ ��� ��������� ������� ���� (�������)
    double getHeight() const { return height; }     // ������� ������
    double getWidth() const { return width; }       // ������� ������
    std::string getColor() const { return color; }  // ������� ����

    // ����� ��� ��������� ��� ����� ��� �����������
    void print() const {
        std::cout << "���������� ������������:\n";
        std::cout << "������: " << height << "\n";
        std::cout << "������: " << width << "\n";
        std::cout << "����: " << color << "\n";
        std::cout << "�����: " << getArea() << "\n";
        std::cout << "��������: " << getPerimeter() << "\n";
    }
};

// ������� ������� ��������
int main() {
    // ���������� ������������ �� �������������
    Rectangle rect1;
    std::cout << "����������� �� �������������:\n";
    rect1.print();
    std::cout << "\n";

    // ���������� ������������ � �����������
    Rectangle rect2(5.0, 3.0, "����");
    std::cout << "����������� � ������������� �����������:\n";
    rect2.print();
    std::cout << "\n";

    // ���������� ������ ������������ �������
    Rectangle rect3;
    rect3.setHeight(4.0);    // ������������ ������
    rect3.setWidth(6.0);     // ������������ ������
    rect3.setColor("��������"); // ������������ �������
    std::cout << "������� �����������:\n";
    rect3.print();
    std::cout << "\n";

    // ���������� �������� ����������� �������
    rect3.setHeight(-2.0);   // �� ������� �������
    rect3.setWidth(-3.0);    // �� ������� �������
    rect3.setColor("");      // �� ������� �������

    return 0;  // ���������� ��������
}

