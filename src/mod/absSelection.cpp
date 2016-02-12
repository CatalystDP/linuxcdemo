//
// Created by dp on 16-2-10.
//

#include "absSelection.h"
void AbsSelection::printItems() const
{
    std::map<int,std::string>::const_iterator it;
    for(it=m_items.begin();it!=m_items.end();++it){
        std::cout<<it->first<<":"<<it->second<<std::endl;
    }
}