#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
	
		std::string		_target;


    public:

        RobotomyRequestForm(void);
		RobotomyRequestForm(const AForm & target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        ~RobotomyRequestForm();

		void	robotomize(const AForm & target) const;
};

#endif

