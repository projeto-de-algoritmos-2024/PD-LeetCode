## #10. Regular Expression Matching

![image](https://github.com/user-attachments/assets/3618646b-f17c-463c-8810-345ec7b53d24)

[Link para a questão](https://leetcode.com/problems/regular-expression-matching/description/)

### Gravação

Link para a Gravação: [Clique Aqui](https://youtu.be/_asjFKIr08A)

#### Dificuldade: Difícil

### Enunciado

Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:

- '.' Matches any single character.​​​​
- '*' Matches zero or more of the preceding element.

The matching should cover the entire input string (not partial).

Example 1:

- Input: s = "aa", p = "a"
- Output: false
- Explanation: "a" does not match the entire string "aa".

Example 2:

- Input: s = "aa", p = "a*"
- Output: true
- Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".

Example 3:

- Input: s = "ab", p = ".*"
- Output: true
- Explanation: ".*" means "zero or more (*) of any character (.)".


Constraints:

- 1 <= s.length <= 20
- 1 <= p.length <= 20
- s contains only lowercase English letters.
- p contains only lowercase English letters, '.', and '*'.
- It is guaranteed for each appearance of the character '*', there will be a previous valid character to match.


### Submissões: 
![image](https://github.com/user-attachments/assets/1d49a192-191e-4bc9-bfa6-16aa8bdb6b6b)
![image](https://github.com/user-attachments/assets/a1b9d54d-40d2-4dbf-a60b-b8696a07e014)






