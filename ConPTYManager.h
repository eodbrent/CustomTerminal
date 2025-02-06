#ifndef CONPTYMANAGER_H
#define CONPTYMANAGER_H

#include <windows.h>
#include <processthreadsapi.h>
#include <wincon.h>
#include <consoleapi.h>

#include <QObject>

class ConPTYManager : public QObject {
    Q_OBJECT

public:
    explicit ConPTYManager(QObject *parent = nullptr);
    virtual ~ConPTYManager();
    bool startShell();                        // Start a shell session
    void writeToShell(const QString &input);  // Send user input
    void resizeShell(int width, int height);  // Resize terminal
    void closeShell();                        // Close shell properly

signals:
    void shellOutputReceived(const QString &output);

private:
    HANDLE hInputWrite;  // Pipe for user input
    HANDLE hOutputRead;  // Pipe for shell output
    HPCON hConPTY;
    PROCESS_INFORMATION pi; // info for shell

    void readShellOutput();  // process shell output
};

#endif // CONPTYMANAGER_H
