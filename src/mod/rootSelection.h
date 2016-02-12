//
// Created by dp on 16-2-10.
//

#ifndef LINUXC_ROOTSELECTION_H
#define LINUXC_ROOTSELECTION_H

#include "./absSelection.h"
class RootSelection: public AbsSelection {
public:
    RootSelection(){
        m_items[0]="Create Account";//开通账户
        m_items[1]="Show Account Info";//显示账户内容
        printItems();
    }
    virtual ~RootSelection(){}
    virtual void action(unsigned int index) override;
};//根选择列表


#endif //LINUXC_ROOTSELECTION_H
