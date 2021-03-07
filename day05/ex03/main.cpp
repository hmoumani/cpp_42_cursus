/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:14:03 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/03 18:14:05 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat	test("Arta", 1);
	Bureaucrat	test2("Lydeka", 150);
	std::cout << "** Created Bureaucrat Arta, grade 1 **" << std::endl << test << std::endl <<
		"** Created Bureaucrat Lydeka, grade 150 **" << std::endl << test2 << std::endl;

	Intern	intern;
	std::cout << "** Created new Intern, will now proceed to make forms with intern **" << std::endl << std::endl;

	Form	*ftest;

	std::cout << "** Creating shrubbery creation form with target Mary_Jane with Intern **" << std::endl;
	ftest = intern.makeForm("shrubbery creation", "Mary_Jane");
	std::cout << "** Now having Arta signed the form (should succeed), and Lydeka execute form (should fail) **" << std::endl;
	ftest->beSigned(test);
	test2.executeForm(*ftest);

	Form	*ftest2;

	std::cout << std::endl << "** Creating Robotomy Request form with target Gundam with Intern **" << std::endl;
	ftest2 = intern.makeForm("Robotomy Request", "Gundam");

	std::cout << "** Now having Arta signed the form (should succeed), and Lydeka execute form (should fail) **" << std::endl;
	ftest2->beSigned(test);
	test2.executeForm(*ftest2);

	Form	*ftest3;

	std::cout << std::endl << "** Creating presidential pardon form with target Obama with Intern **" << std::endl;
	ftest3 = intern.makeForm("presidential pardon", "Obama");

	std::cout << "** Now having Arta signed the form (should succeed), and Lydeka execute form (should fail) **" << std::endl;
	ftest3->beSigned(test);
	test2.executeForm(*ftest3);

	Form *ftest4;
	std::cout << std::endl << "** Creating Non Existent form with target Whatever with Intern, should fail **" << std::endl;
	ftest4 = intern.makeForm("Non Existent", "Whatever");

	delete ftest;
	delete ftest2;
	delete ftest3;
	delete ftest4;

	return (0);
}