## #887. Super Egg Drop

![image](https://github.com/user-attachments/assets/e50e3914-177c-4d30-b652-f3a4068110aa)

[Link para a questão](https://leetcode.com/problems/super-egg-drop/description/)

### Gravação

Link da gravação: [Clique aqui](https://youtu.be/aBmTzXPNL9c?feature=shared)

#### Dificuldade: Difícil

### Enunciado

You are given k identical eggs and you have access to a building with n floors labeled from 1 to n.

You know that there exists a floor f where 0 <= f <= n such that any egg dropped at a floor higher than f will break, and any egg dropped at or below floor f will not break.

Each move, you may take an unbroken egg and drop it from any floor x (where 1 <= x <= n). If the egg breaks, you can no longer use it. However, if the egg does not break, you may reuse it in future moves.

Return the minimum number of moves that you need to determine with certainty what the value of f is.

Example 1:

Input: k = 1, n = 2 <br>
Output: 2 <br>
Explanation: 
Drop the egg from floor 1. If it breaks, we know that f = 0.
Otherwise, drop the egg from floor 2. If it breaks, we know that f = 1.
If it does not break, then we know f = 2.
Hence, we need at minimum 2 moves to determine with certainty what the value of f is.

Example 2:

Input: k = 2, n = 6<br>
Output: 3

Example 3:


Input: k = 3, n = 14<br>
Output: 4


Constraints:

- 1 <= k <= 100
- 1 <= n <= 10^4




### Submissões: 
![image](https://github.com/user-attachments/assets/47de9ec3-388f-4c6f-ac0b-3d6eed4cfd1e)
![image](https://github.com/user-attachments/assets/c8bdf4e0-bdfb-49a7-b56e-225f9c04cb3b)







