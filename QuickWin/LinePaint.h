#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#ifndef LINEPAINT_H
#define LINEPAINT_H

#include <QLine>
#include <QPen>

class LinePaint : public QLine
{
public:
	LinePaint(const QLine &line, const QPen &pen);
	LinePaint(const QLine &line);
	~LinePaint();

	void setPen(const QPen &pen);
	const QPen& getPen() const;

private:
	QPen _pen;
};

#endif // LINEPAINT_H
