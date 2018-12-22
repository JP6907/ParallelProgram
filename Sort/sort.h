//
// Created by zjp on 18-12-21.
//

#ifndef PARALLELPROGRAM_SORT_H
#define PARALLELPROGRAM_SORT_H

#include <string>

/**
 * 秩排序
 * 统计出小于每个被选数的个数，个数值即为被选择的数在序列中的位置
 * @param a
 * @param len
 */
void rankSort(int *a,int len);

/**
 * 快速排序
 * @param a
 * @param low
 * @param high
 */
void quickSort(int *a, int low, int high);
int partion(int *a, int low, int high);

/**
 * 位图排序算法
 * 必须保证待排序列中不存在重复的数据，否则输出结果中重复的数据只会输出一个
 * @param maxNum 待排序数中的最大数
 * @param unsort_filename
 * @param sort_filename
 */
void bitsetSort_file(const int maxNum,std::string unsort_filename,std::string sort_filename);

#endif //PARALLELPROGRAM_SORT_H
