#include "include/AllInfo.h"

AllInfo::AllInfo() {}

AllInfo::~AllInfo() {}

void AllInfo::setInfo(std::string name, std::string date,
                        std::string description)
{
    AllInfo::name = name;
    AllInfo::date = date;
    AllInfo::description = description;
}

void AllInfo::setAut(int numAuthors, std::vector<std::string> nameAuthor)
{
    AllInfo::author.setAuthors(numAuthors, nameAuthor);
}

std::string AllInfo::getName() const
{
    return name;
}

std::string AllInfo::getDate() const
{
    return date;
}

std::string AllInfo::getDescrip() const
{
    return description;
}

Authors AllInfo::getAllAut() const
{
    return author;

}