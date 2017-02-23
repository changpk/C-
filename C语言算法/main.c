//
//  main.c
//  C语言算法
//
//  Created by changpengkai on 15/6/24.
//  Copyright (c) 2015年 changpengkai. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Algorithm.h"
#include "LinkList.h"



int main(int argc, const char * argv[]) {

    LinkList *list = initLinkList();
    insertLinkList(list, 3, 100);
    indexInLinkList(list, 100);
    deleteIndexInLinkList(list, 3);
    emptyLinkList(&list);
    displayLinkList(list);
    


    return 0;
}








