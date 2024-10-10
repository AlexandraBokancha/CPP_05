#include "RobotomyRequestForm.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm(void) : AForm(), _target("foo")
{
    std::cout << "(Robotomy) Default constructor called" << std::endl;
    return ;
}

// Parametric constructor
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45), _target(target)
{
    std::cout << "(Robotomy) Parametric constructor called" << std::endl;
    return ;
}
// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other._target, 72, 45), _target(other._target)
{
    std::cout << "(Robotomy) Copy constructor called" << std::endl;
    return ;
}

// Assignment operator overload
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "(Robotomy) Assignment operator called" << std::endl;
    if (this != &other)
		AForm::operator=(other);
    return (*this);
}

/**
 * @brief Check that the forme is signed and that the grade of
 * the bureaucrat is high enough. Otherwise, throw an appropriate 
 * exception.
 * 
 * In case of success, makes some drilling noises. 
 * Then, informs that <target> has been robotomized
 * successfully 50% of the time.
 */
void RobotomyRequestForm::execute(const Bureaucrat & executor) const{
	if (getStatus() == false)
		throw AForm::NotSignedException();
	if (executor.getGrade() > getGradeToExecute())
	 	throw AForm::GradeTooLowException();
	std::cout << _target << " makes some drilling noises" << std::endl;
	std::cout << _target << " has been robotomized successfully 50" << "% " << "of the time" << std::endl;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "(Robotomy) Destructor called" << std::endl;
    return ;
}

