#pragma once
#include <iostream>
#include <string>
#include "Account.h"

class I_Printable {
	friend std::ostream& operator<<(std::ostream& os, const I_Printable& account);
public:
	virtual void print(std::ostream& os) const = 0;
	virtual ~I_Printable() = default;
};

std::ostream& operator<<(std::ostream& os, const I_Printable& account)
{
	account.print(os);
	return os;
}