#ifndef SUBTEACHERWINDOW_H
#define SUBTEACHERWINDOW_H

#include <QMainWindow>

#include <Phonon>
#include <phonon/VideoPlayer>
using namespace Phonon;

namespace Ui {
class SubteacherWindow;
}
class SettingsWindow;
class WordBaseWindow;
class QFileDialog;
class NewMediaWindow;
class LoadMediaWindow;
class SubTeacherThread;
class SubManager;
class QShortcut;

class SubteacherWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit SubteacherWindow(QWidget *parent = 0);
    ~SubteacherWindow();

    void initWidgets();
    void initSlotsAndSignals();
    
private:    
    Ui::SubteacherWindow *ui;
    SettingsWindow *settingsWindow;
    WordBaseWindow *wordBaseWindow;
    QFileDialog *fileWindow;
    NewMediaWindow *newMediaWindow;
    LoadMediaWindow *loadMediaWindow;    

    QShortcut *checkShortcut;
    QShortcut *hintShortcut;
    QShortcut *playShortcut;

    VideoPlayer *vp;
    SubManager *sm;
    SubTeacherThread *stt;

    void noSubWarning();
    void noMediaWarning();

public slots:
    void showSettings();
    void showWordBase();
    void showLoadWindow();
    void save();
    void showNewMediaWindow();

    void playLast();
    void checkAnswer();
    void help();
    void showSubs(bool b);       
    void loadMedia(int i=-1);
    void addMedia();

    void setPlayButtonChecked(bool c);
};

#endif // SUBTEACHERWINDOW_H
