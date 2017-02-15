##### 4.1

a. Which node is the root?
A

b. Which nodes are leaves?
G,H,I,L,M,k

##### 4.2

node|parent|children|siblings|depth|height
----|------|--------|--------|-----|------
A|NULL|B,C|NULL|0|4
B|A|D,E|C|1|3
C|A|F|b|1|2
D|B|G,H|E|2|1
E|B|I,J|D|2|2
F|C|K|NULL|2|1
G|D|NULL|H|3|0
H|D|NULL|G|3|0
I|E|NULL|J|3|0
J|E|L,M|I|3|1
K|F|NULL|NULL|3|0
L|J|NULL|M|4|0
M|J|NULL|L|4|0

##### 4.3

What is the depth of the tree?

4

##### 4.4

Show that a binary tree of N nodes, there is N+1 NULL pointers representing children.

N个节点构成的二叉树，必然有2N个子节点，其中除了根节点，每个节点都是另一个节点的子节点（N-1），所以空的节点必然有 2N - (N-1) = N+1 个。

##### 4.5

Show that the maximum number of nodes in a binary tree of heigth H is 2^(H+1) - 1.

归纳法。

