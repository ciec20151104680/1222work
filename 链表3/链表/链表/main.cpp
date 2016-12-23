//
//  main.cpp
//  链表
//
//  Created by cxxxe4680 on 2016/12/23.
//  Copyright © 2016年 cxxxe4680. All rights reserved.
//

#include <iostream>
using namespace std;
class Student
{
public:
    Student(int n,float s):num(n),score(s){}
    void change(int n,float s)
    {
        num=n;
        score=s;
    }
    void display()
    {
        cout<<num<<" "<<score<<endl;
    }
private:
    int num;
    int score;
};
int main()
{
    Student stud(101,78.5);
    stud.display();
    stud.change(101,80.5);
    stud.display();
    return 0;
}
