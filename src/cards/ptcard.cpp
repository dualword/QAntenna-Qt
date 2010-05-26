
/***************************************************************************
 *   Copyright (C) 2007 by                                                 *
 *   Lisandro Damián Nicanor Pérez Meyer - perezmeyer en/at gmail.com      *
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

#include "ptcard.h"

PTCard::PTCard(int thePrintControl, int theTagNumberToPrint)
{
	printControl = thePrintControl;
	tagNumberToPrint = theTagNumberToPrint;
	cardType = "PT";
}

PTCard::PTCard(int thePrintControl, int theTagNumberToPrint,
							 int theEqualToM, int theEqualToN)
{
	printControl = thePrintControl;
	tagNumberToPrint = theTagNumberToPrint;
	equalToM = theEqualToM;
	equalToN = theEqualToN;
	cardType = "PT";
}

int PTCard::getPrintControl() const
{
	return printControl;
}

int PTCard::getTagNumberToPrint() const
{
	return tagNumberToPrint;
}

int PTCard::getEqualToM() const
{
	return equalToM;
}
int PTCard::getEqualToN() const
{
	return equalToN;
}

QString PTCard::getCard()
{
	return cardType + QString(" %1 %2 %3 %4\n")
	       .arg(printControl)
	       .arg(tagNumberToPrint)
	       .arg(equalToM)
	       .arg(equalToN);
}

