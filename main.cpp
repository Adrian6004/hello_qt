#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMessageBox msgBox;
    msgBox.setWindowTitle("Hello");
    msgBox.setText("Hello World");
    msgBox.setStandardButtons(QMessageBox::Ok);

    msgBox.exec();

    return 0;
}
