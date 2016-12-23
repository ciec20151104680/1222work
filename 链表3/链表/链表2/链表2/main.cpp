//
//  main.cpp
//  链表2
//
//  Created by cxxxe4680 on 2016/12/23.
//  Copyright © 2016年 cxxxe4680. All rights reserved.
//

#include<stdio.h>
#define N 2
struct Node
{
    char name [40];
    int age;
    struct Node * next;
};
int main()
{
    FILE *fp;
    fp=fopen("caijia.csv","w");
    struct Node * head,* p,* tail;
    int i;
    head=new Node;
    head->next=0;
    tail=head;
    printf("Please input name and age:\n");
    fscanf(fp,"%s",head->name);
    fscanf(fp,"%d",&head->age);
    for(i=0;i<N;i++)
    {
        p=new Node;
        scanf("%s",p->name);
        scanf("%d",&p->age);
        p->next=0;
        tail->next=p;
        tail=p;
        
    }
    p=head;
    
    while(p)
    {
        
        fprintf(fp,"%s %d\n",p->name,p->age);
        p=p->next;
        
    }
    fclose(fp);
    return 0;
}
