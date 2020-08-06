#ifndef _ALLINFO_
#define _ALLINFO_

#include "stdafx.h"
#include "Authors.h"

class AllInfo
{
private:
    std::string name;
    std::string date;
    std::string description;
    Authors author;

public:
    AllInfo();
    ~AllInfo();
    void setInfo(std::string name, std::string date, std::string description);
    void setAut(int numAuthors, std::vector<std::string> nameAuthor);
    std::string getName() const;
    std::string getDate() const;
    std::string getDescrip() const;
    Authors getAllAut() const;
};

#endif // !_ALLINFO_