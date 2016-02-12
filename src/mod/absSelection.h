//
// Created by dp on 16-2-10.
//

#ifndef LINUXC_ABSSELECTION_H
#define LINUXC_ABSSELECTION_H
#include <string>
#include <map>
#include <iostream>
//选项抽象基类
class AbsSelection {
protected:
    std::string m_title;//标题
    std::map<int,std::string> m_items;//选项
    AbsSelection* pNext;
public:
    AbsSelection(AbsSelection* next=0):pNext(next){}
    virtual ~AbsSelection(){}
    virtual void printItems() const;//输出列表项
    virtual void action(unsigned int index)=0;
    void setNext(AbsSelection* next){
        pNext=next;
    }
    AbsSelection* getNext(){
        return pNext;
    }
    void setTitle(const std::string& title){
        m_title=title;
    }
    std::string getTitle(){
        return m_title;
    }
};


#endif //LINUXC_ABSSELECTION_H
