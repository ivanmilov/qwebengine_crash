#include <QApplication>
#include <QQuickWindow>
#include <QWebEngineView>
#include <QMainWindow>

int main(int argc, char *argv[])
{
	// Causing the crash on open/close lid or change display configuration
	QQuickWindow::setGraphicsApi(QSGRendererInterface::Software);

	QApplication a(argc, argv);

	QMainWindow w{};
	QWebEngineView webEngineView{&w};
	w.show();

	return a.exec();
}
