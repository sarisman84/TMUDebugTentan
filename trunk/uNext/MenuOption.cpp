#include "MenuOption.h"

/* ******************************************** */

MenuOption::MenuOption(const std::string& sText, int iXPos, int iYPos) {
	this->sText = sText;
	this->iXPos = iXPos;
	this->iYPos = iYPos;
}


MenuOption::~MenuOption(void) {

}

/* ******************************************** */

std::string MenuOption::getText() {
	return sText;
}

void MenuOption::setText(std::string sText) {
	this->sText = sText.c_str();
}

int MenuOption::getXPos() {
	return iXPos;
}

int MenuOption::getYPos() {
	return iYPos;
}