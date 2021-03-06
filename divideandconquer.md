# 分治算法

分治算法的核心思想就是分而治之。将原问题划分成n个规模较小，并且结构与原问题相似的子问题，然后递归的求解这些子问题，再将子问题的解合并成结果，就得到了原问题的解。


分治算法能解决的问题，一般要满足下面几个条件:

1. 原问题和分解的小问题具有相同的求解模式.
2. 分解的子问题可以独立求解，子问题之间没有任何关联，这是分治和动态规划最明显的区别
3. 具有分解的终止条件，也就是说当问题足够小时，可以直接求解.
4. 可以将子问题的求解合并成原问题，而这个合并操作的复杂度不能太高，否则就起不到减少算法总体的复杂度恶效果了。




## <font color=red>经典题型</font>


| &emsp;题型&emsp; |  答案链接 | 完成度 |
| :--: | :----------------------------------------------------------- | :--------: |
|  求一组数据里面的逆序对 | [reversedOrderPairs](./divideandconquer/reversedOrderPairs.h)|✅|
|  二维平面上有n个点，如何快速求出最近的两个点之间的距离  | [closestPair](./divideandconquer/closestPair.h)| ❌ |

## leetcode
| &emsp;题号&emsp; | 题目链接&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;| 答案链接&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;| &emsp;难度&emsp;  | &emsp;完成度&emsp;  |
| :--: | :--: | :----------------------------------------------------------- | :-----------------------------------------------------------  | :------: |
|  17   | [电话号码的字母组合](https://leetcode-cn.com/problems/letter-combinations-of-a-phone-number/)| --| ✨✨ | ❌ |
|  50   | [Pow(x, n)](https://leetcode-cn.com/problems/powx-n/description/)| --| ✨✨ | ❌ |
|  78   | [子集](https://leetcode-cn.com/problems/subsets/solution/hui-su-jie-fa-by-jawhiow/)| --| ✨✨ | ❌ |
|  169   | [求众数](https://leetcode-cn.com/problems/majority-element/description/)| --| ✨ | ❌ |