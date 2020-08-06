#ifndef _AUTHORS_
#define _AUTHORS_

#include "stdafx.h"

class Authors
{
private:
    int numAuthors;
    std::vector<std::string> nameAuthor;
public:
    Authors(/* args */);
    ~Authors();
    void setAuthors(int numAuthors, std::vector<std::string> nameAuthor);
    int getNumAuthors() const;
    std::vector<std::string> getNameAuthor() const;
};
#endif // !_AUTHORS_