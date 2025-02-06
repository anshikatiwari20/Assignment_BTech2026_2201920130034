# Problem 1: Time Machine

## Problem Statement

Chef is currently in the year `X` in Chefland. He has a time machine that allows him to travel at most 25 years into the future, but he can use it only once.

Determine whether Chef can reach the year 2050 with a single use of the time machine.

### Input Format
- A single integer `X`, representing the current year in Chefland.

### Output Format
- Print `YES` if Chef can reach the year 2050, otherwise print `NO`.

### Solution Approach
1. **Understanding the Problem**: Chef can only travel 25 years forward in time. We need to check if adding 25 to the current year `X` will allow Chef to reach or surpass the year 2050.
   
2. **Comparison**: If `X + 25 >= 2050`, print `YES`, otherwise print `NO`.

---

# Problem 2: Small Palindrome

## Problem Statement

Chef has `X` ones (1s) and `Y` twos (2s) in his collection. He wants to arrange all of them into the smallest possible palindrome number using all of these ones and twos.

A palindromic number is a number that remains the same when its digits are reversed.

### Input Format
- The first line of input will contain a single integer `T`, denoting the number of test cases.
- The second line of each test case contains two space-separated integers `X` and `Y` — the amount of ones (1s) and twos (2s) respectively.

### Output Format
- For each test case, output on a new line the smallest possible palindrome number using `X` ones (1s) and `Y` twos (2s).

### Solution Approach
1. **Understanding the Problem**: The task is to construct the smallest palindrome number using the given ones and twos. Since `X` and `Y` are both even, we can arrange half of the ones and twos on the left and the other half will automatically go to the right to form the palindrome.

2. **Strategy**: 
   - Half of the ones will be placed on the left side and the other half on the right.
   - All of the twos can be placed in the middle.
   - This will create the smallest possible palindrome.

---

# Problem 3: Nim Game

## Problem Statement

You are playing the following Nim Game with your friend:

- Initially, there is a heap of stones on the table.
- You and your friend will alternate taking turns, and you go first.
- On each turn, the person whose turn it is will remove 1 to 3 stones from the heap.
- The one who removes the last stone is the winner.

Given `n`, the number of stones in the heap, return `true` if you can win the game assuming both you and your friend play optimally, otherwise return `false`.

### Input Format
- A single integer `n`, representing the number of stones in the heap.

### Output Format
- Return `true` if you can win the game, otherwise return `false`.

### Solution Approach
1. **Understanding the Problem**: The key to winning the game lies in making sure that after your move, the remaining stones are in a position that forces your opponent to lose.

2. **Optimal Strategy**: If `n % 4 == 0`, it means that no matter what move you make, your opponent can always play optimally and win. In all other cases, you can win.

3. **Mathematical Insight**: The problem boils down to checking whether `n % 4 == 0`. If so, you cannot win; otherwise, you can.
