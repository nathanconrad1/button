#include <QApplication>
#include <QPushButton>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QPushButton button("Click me!");
    button.show();

    QObject::connect(&button, &QPushButton::clicked, []() {
        // Code to execute when the button is clicked
        qDebug() << "Button clicked!";
    });

    return app.exec();
}
