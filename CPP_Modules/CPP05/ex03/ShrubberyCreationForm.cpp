#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("", 145, 137), _target("") {

}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: Form(target, 145, 137), _target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& form ) {

	operator=(form);
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= ( const ShrubberyCreationForm& form ) {

	if (this != &form)
	{
		_target = form._target;
		Form::operator=(form);
	}

	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {

}

void	ShrubberyCreationForm::execute(Bureaucrat const & executer) const {
	
	Form::execute(executer);

	std::ofstream	outf ( _target + "_shrubbery" );

	if (!outf)
	{
		std::cerr << "\033[1;31m"
				  << "Uh oh, "
				  << _target << "_shrubbery"
				  << " could not be opened for writing!"
				  << "\033[0;37m\n";
        exit(1);
	}

	std::string tree;

	tree =	"	          v .   ._, |_  .,\n";
	tree +=	"           `-._\\/  .  \\ /    |/_\n";
	tree +=	"               \\  _\\, y | \\//\n";
	tree +=	"         _\\_.___\\, \\/ -.\\||\n";
	tree +=	"           `7-,--.`._||  / / ,\n";
	tree +=	"           /'     `-. `./ / |/_.'\n";
	tree +=	"                     |    |//\n";
	tree +=	"                     |_    /\n";
	tree +=	"                     |-   |\n";
	tree +=	"                     |   =|\n";
	tree +=	"                     |    |\n";
	tree +=	"--------------------/ ,  . \\--------._\n";

	outf << "\n\n\n";
	outf << tree;

	std::cout << "\033[1;32m"
			  << _target << "_shrubbery" 
			  << " written Successfully :)"
			  << "\033[0;37m"
			  << std::endl;

	outf.close();

}