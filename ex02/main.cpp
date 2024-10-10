#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

void test4(){

}

void test3(){
}

void test2(){

 
}

void test1(){
	AForm *newForm = new ShrubberyCreationForm("paper");
	Bureaucrat bureacrat("John", 23);
	bureacrat.signForm(*newForm);
	newForm->execute(bureacrat);
}

int main(){

    try{
        test1();
        //test2();
        //test3();
        //test4();
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
    return 0; 
}