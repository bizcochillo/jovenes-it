#include <QApplication>
#include <QLabel>
#include <QWidget>

int main(int argc, char *argv[]){
	QApplication app(argc, argv);
	QLabel hello("<center>Welcome to my first Wikihow Qt program");	
	hello.setWindowTitle("My first WikiHow Qt program");
	hello.resize(400, 400);
	hello.show();
	return app.exec();
}
