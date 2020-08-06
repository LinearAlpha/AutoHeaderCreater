#include "include/Authors.h"

Authors::Authors() {} // deafual Constructor

Authors::~Authors() {} // unresgister de-constructor

void Authors::setAuthors(int numAuthors, std::vector<std::string> nameAuthor)
{
    Authors::numAuthors = numAuthors;
    Authors::nameAuthor = nameAuthor;
}
int Authors::getNumAuthors() const
{
    return numAuthors;
}
std::vector<std::string> Authors::getNameAuthor() const
{
    return nameAuthor;

}