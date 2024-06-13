#pragma once

#ifndef ANNOTATION_DOCK_HPP
#define ANNOTATION_DOCK_HPP

#include <QFrame>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QTimer>
#include <obs-frontend-api.h>

class AnnotationDock : public QFrame {
	Q_OBJECT

public:
	AnnotationDock(QWidget *parent = nullptr);
	~AnnotationDock();

public slots:
	void onSaveAnnotationButton();

private:
	void setupUI();
	void setupConnections();

	QTextEdit *annotationEdit;
	QPushButton *saveButton;
	QLabel *feedbackLabel;
	QTimer feedbackTimer;

	QString chapterFilePath;

public:
	void setChapterFilePath(const QString &filePath);
};

#endif // ANNOTATION_DOCK_HPP