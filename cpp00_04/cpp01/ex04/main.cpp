#include <iostream>
#include <string>
#include <fstream>

void    fill_file(std::ifstream &input_file, std::ofstream &output_file, char **argv)
{
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::string str;
    size_t      index;
    while (1)
    {
        getline(input_file, str);
        index = str.find(s1);
        while (s1 != s2 and index != std::string::npos)
        {
            str = str.erase(index, s1.size());
            str = str.insert(index, s2);
            index = str.find(s1);
        }
        output_file << str;
        if (input_file.eof())
            break ;
        output_file << std::endl;
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "The program must have 3 parameters\n";
        return (0);
    }
    std::string filename(argv[1]);
    std::ifstream    input_file(filename.c_str());
    filename += ".replace";
    std::ofstream    output_file(filename.c_str());
    if (input_file.fail() or output_file.fail())
    {
        std::cerr << "Problem with the input/output file\n";
        return (0);
    }
    fill_file(input_file, output_file, argv);
}