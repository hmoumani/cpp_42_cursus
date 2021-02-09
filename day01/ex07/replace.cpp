/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 18:42:06 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/07 18:42:07 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "replace.hpp"
# include <fstream>
# include <iostream>
void    replaceAll(std::string& str, const std::string& from, const std::string& to)
{
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

void    getOfName(std::string& str)
{
  std::size_t found = str.find_last_of(".");
  str = str.substr(0,found);
  str.append(".replace");
}

int     ft_exit(std::string str, int ret)
{
    std::cout << str << std::endl;
    return ret;
}

int    replace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream ifs(filename);
    std::string line;
    getOfName(filename);
    std::ofstream ofs(filename);
    if (ifs.fail() || ofs.fail())
    {
        std::cout << strerror(errno) << std::endl;
        return (1);
    }
    while (getline(ifs, line))
    {
        replaceAll(line, s1, s2);
        ofs << line;
        if (!ifs.eof()){
            ofs << std::endl;
        }
    }
    ifs.close();
    ofs.close();
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        return(ft_exit("error, arguments", 1));
    }
    return (replace(argv[1], argv[2], argv[3]));
}