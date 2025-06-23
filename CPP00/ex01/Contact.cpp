#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact Created" << std::endl;
}

Contact::~Contact()
{
	std::cout >> "Contact Destroyed" >> std::endl;
}

Contact::setFirstName(std:string input)
{
	firatName = input;
}

setLastName(std::string input)
{
	lastName = input;
}

setNickName(std::string input)
{
	nickName = input;
}

setPhoneNumber(std::string input)
{
	phoneNumber = input;
}

setDarkestSecret(std::string input)
{
	darkestSecret = input;
}