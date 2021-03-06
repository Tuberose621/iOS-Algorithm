//
//  insertSort.h
//  sort
//
//  Created by junl on 2019/7/18.
//  Copyright © 2019 junl. All rights reserved.
//

#ifndef insertSort_hpp
#define insertSort_hpp

#include <stdio.h>

/*
 思路:
 取未排序的元素，依次插入到已排序数组中合适的位置
 */


void insertSort(int nums[], int n){
    if (n <= 1) {
        return;
    }
    for (int i=1; i<n; i++) {
        //
        int t = nums[i];
        int j=i-1;
        for (; j>=0; j--) {
            if (nums[j]>t) {
                nums[j+1] = nums[j];//依次向后移，为插入位置腾出空
            }else{
                break; //重要，避免无谓的循环.
            }
        }
        nums[j+1] = t;//插入到有序数组的中间
    }
}
#endif /* insertSort_hpp */
