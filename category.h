#ifndef CATEGORY_H
#define CATEGORY_H
#include<string>

using namespace std;

class Category
{
private:
    int id;
    string categoryName;
public:
    Category();
    ~Category();

    int getId();
    void setId(int id);

    string getCategoryName();
    void setCategoryName(string categoryName);
};


#endif // CATEGORY_H
