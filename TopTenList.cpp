//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
    _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
    _list.insert(_list.begin()+index, link);
}

Hyperlink TopTenList::get(int index)
{
    return _list.at(index+1);
}
