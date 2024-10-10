#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private :
	
		std::string		_target;


    public:

        PresidentialPardonForm(void);
		PresidentialPardonForm(const AForm & target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
        ~PresidentialPardonForm();

};

#endif

