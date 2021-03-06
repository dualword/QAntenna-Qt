/***************************************************************************
 *   Copyright (C) 2005 by                                                 *
 *   Lisandro Damián Nicanor Pérez Meyer - perezmeyer en/at gmail.com      *
 *   Gustavo González - gonzalgustavo en/at gmail.com                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef LINE_H
#define LINE_H

#include "primitive.h"
#include <QString>
#include <QVector>
/**
	This class is used to crate each line of the antenna. It inherit its functions
	of primitive class which is a virtual one. It provides all necessary funtions
	to process the lines. It class has a label which indicate this primitive is a
	line, 2 vertex, end1 and end2, to indicate line position. Tag Number contains
	the NEC's line number. Some cards have more parameters that are saved in
	parameter and parameter1. This class has also functions to modify line
	position, how are move reflect, and rotate. Other fuction aren't used in the
	program but complete the class functionality. It's analogous to patch class.
*/
class Line : public Primitive {
public:
	Line();

	/// This overloaded constructor provides a fastest way to initialize a new object.
	Line(QString newLabel, QVector<double> newEnd1, QVector<double> newEnd2,
	     int newTagNumber, int newCardParameter, int newCardParameter1);

	~Line();

	/// Set card label.
	void SetLabel(QString newLabel);

	/// Set tag number.
	void SetTagNumber(int newTagNumber);

	/// Set end1.
	void SetEnd1( double x, double y, double z);

	/// Set end2.
	void SetEnd2( double x, double y, double z);

	/// This function isn't used yet, but are usefull for futures improvements.
	void SetWidth(double newWidth);

	/// This function isn't used yet, but are usefull for futures improvements.
	void SetColor(double newColor);

	/// Set parameter that are used to process card as GM, GX, and others.
	void SetCardParameter(int newCardParameter);

	/// Set parameter that are used to process card as GM, GX, and others.
	void SetCardParameter1(int newCardParameter);

	/// This function rotates the line through the x, y and z axis, ang degrees.
	/// X angle is in ang[0], Y angle in ang[1] and Z angle in ang[3].
	void Rotate(QVector<double> & ang);

	/// This function moves the line to the x, y and z that are in pos[0], pos[1]
	/// and pos[3].
	void Move(QVector<double> & pos);

	/// This function reflect the line along x (reflection in Y-Z plane), y or z.
	void Reflect(bool x, bool y, bool z);

	/// Get label.
	QString GetLabel();

	/// Get tag number.
	int GetTagNumber();

	/// Get card parameter.
	int GetCardParameter();

	/// Get card parameter1.
	int GetCardParameter1();

	/// Get end1.
	QVector<double> GetEnd1();

	/// Get end2.
	QVector<double> GetEnd2();

	/// This function isn't used yet, but are usefull for futures improvements.
	double GetWidth();

	/// This function isn't used yet, but are usefull for futures improvements.
	double GetColor();

	/// This finction calculates the maximum module between end1 and end2.
	double CalculateMaxModule();

private:
	/// This is an auxiliar function used by Rotate(double ang[]).
	void Rotate(double vecIn[], double vecOut[], double ang);

	/// The tag number is used by GM card to move some antenna part or to indicate
	/// the radiating element.
	int tagNumber;

	/// It's a parameter used by some cards as GM, GR, etc.
	int cardParameter;

	/// It's a parameter used by some cards as GM, GR, etc.
	int cardParameter1;

	/// This parameter isn't used yet but is usefull for future improvements.
	double width;

	/// This parameter isn't used yet but is usefull for future improvements (to
	/// draw the current intensity in the wires).
	double color;

	/// Card label.
	QString label;

	/// End line 1.
	QVector<double> end1;

	/// End line 2.
	QVector<double> end2;
};

#endif
