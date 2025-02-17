#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#ifndef TEXTPAINT_H
#define TEXTPAINT_H

#include <QLineEdit>

class TextPaint : public QLineEdit
{
	Q_OBJECT

public:
	TextPaint(QWidget *parent = Q_NULLPTR);
	~TextPaint();

public slots:
	void slt_autoResize();
	void slt_editEnd();
	
};

#endif // TEXTPAINT_H
