#include "Bureaucrat.hpp"

// Default constructor
Bureaucrat::Bureaucrat(void){
    std::cout << "(Bureaucrat) Default constructor called" << std::endl;
    return ;
}

// Parametric constructor
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
    std::cout << "(Bureaucrat) Parametric constructor called" << std::endl;
    return ;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &other){
    std::cout << "(Bureaucrat) Copy constructor called" << std::endl;
    (void) other;
    return ;
}

// Assignment operator overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
    std::cout << "(Bureaucrat) Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Destructor
Bureaucrat::~Bureaucrat(void){
    std::cout << "(Bureaucrat) Destructor called" << std::endl;
    return ;
}

