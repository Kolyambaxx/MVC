// ЬМС.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>


class Model {
public:
    void setData(const std::string& data) {
        this->data = data;
    }

    std::string getData() const {
        return data;
    }

private:
    std::string data;
};


class View {
public:
    void displayData(const std::string& data) {
        std::cout << "View displays data: " << data << std::endl;
    }
};


class Controller {
public:
    Controller(Model& model, View& view) : model(model), view(view) {}

    void processData(const std::string& newData) {
        model.setData(newData);
        std::string data = model.getData();
        view.displayData(data);
    }

private:
    Model& model;
    View& view;
};

int main() {
 
    Model model;
    View view;
    Controller controller(model, view);

  
    controller.processData("Hello, MVC!");

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
