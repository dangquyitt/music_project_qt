#ifndef MENU_H
#define MENU_H
#include<string>

using namespace std;
class Menu
{
private:
    int id;
    string url;
    string name;

public:
    Menu();
    ~Menu();

    int getId();
    void setId(int id);

    string getUrl();
    void setUrl(string url);

    string getName();
    void setName(string name);
};


#endif // MENU_H
