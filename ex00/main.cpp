#include "Bureaucrat.hpp"

int main(){

    try{
        Bureaucrat bureaucrat("Suzy", 150);
       
        /* will throw an exception */
       
        Bureaucrat bureaucrat2("Carl", 151);
        Bureaucrat bureaucrat3("Jin", 0);

       /* member function test*/ 

        bureaucrat.downGrade();
        std::cout << bureaucrat;
        bureaucrat.upGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
    return 0; 
}