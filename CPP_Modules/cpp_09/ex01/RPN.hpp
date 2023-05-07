#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN {

public:
	
	RPN( void );
	RPN( char *expression );
	RPN( const RPN& obj );
	RPN& operator= ( const RPN& obj );
	~RPN( void );

	bool	is_operand( char tkn );
	bool	is_operator( char tkn );
	int		exec_op( int a, char op, int b );
	int		convertToNbr( char tkn );
	void	ft_error( int err_no );

private:

	std::stack<int>	stack;
	char	*expression;
	int		a;
	int		b;
};

#endif