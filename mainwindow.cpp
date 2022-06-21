#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDesktopServices"
#include "QUrl"
#include "settings.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_3->setText("https://wiki.biligame.com/ys/首页");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString nmspace_rd = ui->comboBox->currentText();
    QString edit_rd = ui->comboBox_2->currentText();
    QString folder_rd = ui->lineEdit_2->text();
    if (nmspace_rd=="通用"){
        if (folder_rd==""){
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+labeled;
                    QDesktopServices::openUrl(QUrl(target));
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+labeled+"&action=edit";
                QDesktopServices::openUrl(QUrl(target));
            }
        }
        else{
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+labeled+"/"+folder_rd;
                    QDesktopServices::openUrl(QUrl(target));
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+labeled+"/"+folder_rd+"&action=edit";
                QDesktopServices::openUrl(QUrl(target));
        }

        }}
    else{
        if (folder_rd==""){
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+nmspace_rd+":"+labeled;
                    QDesktopServices::openUrl(QUrl(target));
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+nmspace_rd+":"+labeled+"&action=edit";
                QDesktopServices::openUrl(QUrl(target));
            }
        }
        else{
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+nmspace_rd+":"+labeled+"/"+folder_rd;
                    QDesktopServices::openUrl(QUrl(target));
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+nmspace_rd+":"+labeled+"/"+folder_rd+"&action=edit";
                QDesktopServices::openUrl(QUrl(target));
        }

        }}

}


void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    QString nmspace_rd = ui->comboBox->currentText();
    QString edit_rd = ui->comboBox_2->currentText();
    QString folder_rd = ui->lineEdit_2->text();
    if (nmspace_rd=="通用"){
        if (folder_rd==""){
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+labeled;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+labeled+"&action=edit";
                ui->lineEdit_3->setText(target);
            }
        }
        else{
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+labeled+"/"+folder_rd;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+labeled+"/"+folder_rd+"&action=edit";
                ui->lineEdit_3->setText(target);
        }

        }}
    else{
        if (folder_rd==""){
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+nmspace_rd+":"+labeled;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+nmspace_rd+":"+labeled+"&action=edit";
                ui->lineEdit_3->setText(target);
            }
        }
        else{
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+nmspace_rd+":"+labeled+"/"+folder_rd;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+nmspace_rd+":"+labeled+"/"+folder_rd+"&action=edit";
                ui->lineEdit_3->setText(target);
        }

        }}
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    QString nmspace_rd = ui->comboBox->currentText();
    QString edit_rd = ui->comboBox_2->currentText();
    QString folder_rd = ui->lineEdit_2->text();
    if (nmspace_rd=="通用"){
        if (folder_rd==""){
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+labeled;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+labeled+"&action=edit";
                ui->lineEdit_3->setText(target);
            }
        }
        else{
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+labeled+"/"+folder_rd;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+labeled+"/"+folder_rd+"&action=edit";
                ui->lineEdit_3->setText(target);
        }

        }}
    else{
        if (folder_rd==""){
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+nmspace_rd+":"+labeled;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+nmspace_rd+":"+labeled+"&action=edit";
                ui->lineEdit_3->setText(target);
            }
        }
        else{
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+nmspace_rd+":"+labeled+"/"+folder_rd;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+nmspace_rd+":"+labeled+"/"+folder_rd+"&action=edit";
                ui->lineEdit_3->setText(target);
        }

        }}
}


void MainWindow::on_comboBox_2_editTextChanged(const QString &arg1)
{
    QString nmspace_rd = ui->comboBox->currentText();
    QString edit_rd = ui->comboBox_2->currentText();
    QString folder_rd = ui->lineEdit_2->text();
    if (nmspace_rd=="通用"){
        if (folder_rd==""){
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+labeled;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+labeled+"&action=edit";
                ui->lineEdit_3->setText(target);
            }
        }
        else{
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+labeled+"/"+folder_rd;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+labeled+"/"+folder_rd+"&action=edit";
                ui->lineEdit_3->setText(target);
        }

        }}
    else{
        if (folder_rd==""){
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+nmspace_rd+":"+labeled;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+nmspace_rd+":"+labeled+"&action=edit";
                ui->lineEdit_3->setText(target);
            }
        }
        else{
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+nmspace_rd+":"+labeled+"/"+folder_rd;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+nmspace_rd+":"+labeled+"/"+folder_rd+"&action=edit";
                ui->lineEdit_3->setText(target);
        }

        }}
}


void MainWindow::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    QString nmspace_rd = ui->comboBox->currentText();
    QString edit_rd = ui->comboBox_2->currentText();
    QString folder_rd = ui->lineEdit_2->text();
    if (nmspace_rd=="通用"){
        if (folder_rd==""){
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+labeled;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+labeled+"&action=edit";
                ui->lineEdit_3->setText(target);
            }
        }
        else{
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+labeled+"/"+folder_rd;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+labeled+"/"+folder_rd+"&action=edit";
                ui->lineEdit_3->setText(target);
        }

        }}
    else{
        if (folder_rd==""){
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+nmspace_rd+":"+labeled;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+nmspace_rd+":"+labeled+"&action=edit";
                ui->lineEdit_3->setText(target);
            }
        }
        else{
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+nmspace_rd+":"+labeled+"/"+folder_rd;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+nmspace_rd+":"+labeled+"/"+folder_rd+"&action=edit";
                ui->lineEdit_3->setText(target);
        }

        }}
}


void MainWindow::on_lineEdit_2_textEdited(const QString &arg1)
{
    QString nmspace_rd = ui->comboBox->currentText();
    QString edit_rd = ui->comboBox_2->currentText();
    QString folder_rd = ui->lineEdit_2->text();
    if (nmspace_rd=="通用"){
        if (folder_rd==""){
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+labeled;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+labeled+"&action=edit";
                ui->lineEdit_3->setText(target);
            }
        }
        else{
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+labeled+"/"+folder_rd;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+labeled+"/"+folder_rd+"&action=edit";
                ui->lineEdit_3->setText(target);
        }

        }}
    else{
        if (folder_rd==""){
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+nmspace_rd+":"+labeled;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+nmspace_rd+":"+labeled+"&action=edit";
                ui->lineEdit_3->setText(target);
            }
        }
        else{
            if (edit_rd=="否"){
                    QString labeled = ui->lineEdit->text();
                    QString target = "https://wiki.biligame.com/ys/"+nmspace_rd+":"+labeled+"/"+folder_rd;
                    ui->lineEdit_3->setText(target);
        }
        else{
                QString labeled = ui->lineEdit->text();
                QString target = "https://wiki.biligame.com/ys/index.php?title="+nmspace_rd+":"+labeled+"/"+folder_rd+"&action=edit";
                ui->lineEdit_3->setText(target);
        }

        }}
}


void MainWindow::on_prefrence_window_triggered()
{
    settings *set = new settings;
    set->show();
}

