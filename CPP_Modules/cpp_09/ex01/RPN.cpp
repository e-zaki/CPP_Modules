#include "RPN.hpp"

RPN::RPN( void ) : expression(NULL) {}

RPN::RPN( char	*line ) : expression(line), a(-1), b(-1)
{
	int i = 0;
	while (line[i])
	{
		if (is_operand(line[i])) // found a number
		{
			int nb = convertToNbr(line[i]);
			stack.push(nb);
		}
		else if (is_operator(line[i]))
		{
			if (stack.empty())
				ft_error(4);

			b = stack.top();
			stack.pop();

			if (stack.empty())
				ft_error(5);

			a = stack.top();
			stack.pop();

			stack.push(exec_op(a, line[i], b));
		}
		else if (line[i] != ' ')
			ft_error(7);
		i++;
	}
	if (stack.size() != 1)
		ft_error(6);
	std::cout << stack.top() << "\n";
}

bool RPN::is_operator( char tkn )
{
	std::string operations = "+-*/";

	size_t pos = operations.find(tkn);

	if (pos == std::string::npos)
		return false;
	return true;
}

bool RPN::is_operand( char tkn )
{
	if (std::isdigit(tkn))
		return true;
	return false;
}

int	RPN::exec_op( int nb1, char op, int nb2 )
{
    if (op == '+')
        return nb1 + nb2;
    else if (op == '-')
        return nb1 - nb2;
    else if (op == '*')
        return nb1 * nb2;
    else if (op == '/')
    {
        if (nb2 == 0)
        {
            std::cerr << "Error: can't devide by zero\n";
            exit(2);
        }
        return a / b;
    }
	return 0;
}

int		RPN::convertToNbr( char tkn )
{
	return (tkn - '0');
}


void RPN::ft_error( int err_no )
{
	std::cerr << "Error\n";
	exit(err_no);
}

RPN::RPN( const RPN& obj )
{
	if (this != &obj) {
		*this = operator=(obj);
	}
}

RPN& RPN::operator= ( const RPN& obj )
{
	if (this != &obj) {
		expression = obj.expression;
		stack = obj.stack;
	}

	return *this;
}

RPN::~RPN( void )
{
	// Clear the stack
	while (!stack.empty()) {
		stack.pop();
	}
}
