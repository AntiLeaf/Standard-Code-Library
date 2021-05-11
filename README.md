# Standard Code Library

> ***最大的罪行往往源自贪婪而非贫穷。***

---

- 图论
  - [ ] 最短路
    - [ ] Floyd
    - [ ] 差分约束
  - [ ] Tarjan算法
    - [ ] 强连通分量
    - [ ] 割点，点双
    - [ ] 桥，边双
  - [ ] 欧拉回路
  - [x] 动态最小生成树
  - [x] 可持久化可并堆求k短路
  - [ ] 二分图
    - [ ] 二分图最大匹配
      - [ ] 匈牙利算法
      - [ ] Hopcroft-Karp
      - [ ] Dinic
    - [ ] 二分图最大权匹配
      - [x] KM
    - [ ] 二分图原理
  - [ ] 一般图匹配
    - [x] 一般图最大匹配
      - [x] 高斯消元
      - [x] 带花树
    - [ ] 一般图最大权匹配
      - [ ] 带权带花树
  - [ ] 最小树形图（+可并堆）
  - [ ] 支配树
  - [ ] 2-SAT
  - [ ] 最大流
    - [x] Dinic
    - [x] ISAP
    - [ ] HLPP（最高标号预流推进）
  - [ ] 费用流
    - [x] SPFA费用流
    - [ ] Dijkstra费用流
    - [ ] zkw费用流
    - [ ] 原始-对偶
  - [ ] 网络流原理
    - [ ] 最大流
    - [ ] 最小割
    - [ ] 费用流
    - [ ] 常见建图方法
    - [ ] 例题
  - [ ] 弦图，完美消除序列，最大势算法
  - [ ] 斯坦纳树
  - [ ] Stoer-Wagner全局最小割
  - [ ] 最小割树
  - [ ] 仙人掌
  - [ ] 最大团搜索（+独立集子集DP）
- 字符串
  - [ ] 字符串原理
  - [x] AC自动机
  - [ ] 后缀数组
    - [ ] SA-IS
    - [ ] SAMSA
  - [ ] 后缀平衡树
  - [x] 后缀自动机
  - [x] 回文树
  - [ ] 最小循环表示
  - [ ] 序列自动机
  - [ ] Hash Killer I
  - [x] Manacher
  - [ ] KMP
  - [x] ex-KMP
  - [ ] 子串最长公共子序列（All Substring LCS）
- 数学

  - [x] FWT
  - [x] 牛顿插值
  - [x] 拉格朗日插值
  - [ ] 多项式
    - [x] FFT
    - [x] NTT
    - [ ] 任意模数卷积
      - [x] 三模数NTT
      - [ ] 毛梯梯
    - [x] 多项式操作
      - [ ] 求逆，开根，取对数，exp
      - [ ] 取模，除法
      - [ ] 多点求值，快速插值
    - [ ] 多项式原理
      - [ ] 拉格朗日反演
      - [ ] $n^2$多项式复合，多项式复合逆
    - [ ] 分治FFT与半在线卷积
  - [x] 单纯形
  - [ ] 线性代数
    - [ ] 高斯消元，自由元搜索
      - [ ] 秩，行列式，逆矩阵
      - [ ] 任意模数高斯消元
    - [ ] 线性基
    - [ ] 线性代数知识
  - [ ] 自适应Simpson积分
  - [ ] Karatsuba分治乘法
  - [ ] 常见结论
    - [ ] 齐次递推求通项
- 数论
  - [ ] 数论理论
  - [ ] 扩展欧几里德
  - [x] $O(n)$预处理逆元
  - [ ] 中国剩余定理
  - [ ] ex-CRT
  - [x] 杜教筛
  - [x] 扩展线性筛
  - [ ] min_25筛（洲阁筛太麻烦了）
  - [ ] 原根
  - [ ] BSGS（离散对数）
  - [ ] ex-BSGS
  - [x] Miller-Rabin
  - [x] Pollard's Rho
  - [ ] 线段下整点个数（真·扩展欧几里德）
  - [ ] 组合数模$p^k$
  - [ ] 阶乘取模
- 数据结构
  
  - [ ] 哈希表
  - [ ] 树状数组
  - [ ] 线段树
    - [ ] 非递归线段树（标记永久化太麻烦了）
    - [ ] 主席树
  - [ ] 陈丹琦分治
  - [ ] 整体二分
  - [ ] 块状链表
  - [ ] Treap
    - [ ] 暴力重构维护tag
    - [ ] 范浩强Treap
    - [ ] 可持久化Treap
  - [x] Splay
  - [ ] 树套树
  - [ ] 树链剖分
  - [ ] 树分治
    - [ ] 静态树分治
    - [x] 动态树分治
    - [ ] 紫荆花之恋
  - [ ] LCT
    - [x] 不换根
    - [x] 换根
      - [ ] LCT维护最小/最大生成树
    - [x] LCT维护子树信息
      - [ ] 模板题：QTREE4（询问树上相距最远点，转化成维护最大子段和）
  - [ ] K-D树
    - [ ] 动态K-D树
  - [ ] 树分块
  - [ ] 树上莫队
  - [x] 长链剖分
  - [x] 可并堆（参见k短路）
  - [ ] 自带数据结构
    - [ ] STL
    - [ ] pb_ds
    - [ ] rope
  - [ ] 常见根号思路
- DP

  - [x] 决策单调性$O(n\log n)$
  - [ ] 斜率优化
    - [ ] 静态斜率优化
    - [ ] 动态斜率优化（CDQ分治）
  - [ ] 插头DP
  - [ ] 数位DP（从低位到高位）
  - [ ] 例题
- 杂の算法
  
  - [x] $O(1)$快速乘
    - [x] long double 快速乘
    - [x] 指令集快速乘
  - [ ] bitset
  - [ ] xorshift，其他随机函数
  - [ ] 常见搜索方法
  - [ ] 近似算法
    - [ ] 爬山算法
    - [ ] 模拟退火
    - [ ] 遗传算法
  - [ ] 乱搞一般图最大权匹配
  - [ ] 树哈希
  - [ ] 图哈希
  - [ ] __builtin系列函数及其手动实现
- 杂の参考资料

  - [ ] gedit配置清单
  - [ ] 计数原理
  - [ ] 常见反演
  - [ ] 常见数列
    - [ ] 自然数幂次和公式
    - [ ] 卡特兰数
      - [ ] 类卡特兰数
    - [x] 伯努利数
    - [ ] 斯特林数
    - [ ] 错排数
    - [ ] 拆分数

  - [ ] prufer序列

  - [ ] 线性规划对偶原理
  - [ ] 蔡勒公式（计算星期几）
  - [x] 常用NTT素数及原根
  - [ ] 常用素数（用于字符串hash或者哈希表等）
  - [ ] c++11随机数
  - [ ] 卡常技巧
    - [ ] 原理
      - [ ] cache
    - [ ] 常见技巧

  - [ ] 开O3/开栈代码
  - [ ] 编译选项
  - [ ] linux命令行
- 注意事项

  - [ ] 常见下毒手法
  - [ ] 场外相关
  - [ ] 做题策略与心态调节