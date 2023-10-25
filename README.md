
# 42 project - push_swap

## Optimized sorting algorithm 

This 42 project's goal is to sort a stack of number, ideally, using the lowest possible number of actions.

### Subject details

You have at your disposal a set of integer values, 2 stacks (stack a and stack b), and a set of instructions to manipulate both stacks :
- sa (swap a): Swap the first 2 elements at the top of stack a.
- sb (swap b): Swap the first 2 elements at the top of stack b.
- pa (push a): Take the first element at the top of b and put it at the top of a.
- pb (push b): Take the first element at the top of a and put it at the top of b.
- ra (rotate a): Shift up all elements of stack a by 1.
- rb (rotate b): Shift up all elements of stack b by 1.
- rra (reverse rotate a): Shift down all elements of stack a by 1.
- rrb (reverse rotate b): Shift down all elements of stack b by 1.

### RADIX

I chose to use the "radix" sorting algorithm. In this sort, there is digit by digit sorting which start from the least significant digit to the most significant digit, distributing each elements into buckets accordingly.

Since we only have two buckets, we can use this algorithm by sorting our integers using their binary value. It's an efficient algorithm which taught me to use the bitwise operator and to manipulate right bit-shifting and binary value.
### How to run the program 

Clone the project

```bash
  git clone https://github.com/shikalou/push_swap.git
```

Go to the project directory

```bash
  cd push_swap/
```
MAKE
```bash
  make
```
Run the program
```bash
  ./push_swap [random set of integer]
```
You can either put all the values in one singular parameter as 

``./push_swap "65 7 23 90 44"``

OR 

put each value in separate parameters

``./push_swap 65 7 23 90 44``

![push_swap_screenshot](https://github.com/shikalou/push_swap/assets/94800038/8909b767-f454-4eb0-a5dd-61665330fc33)

### Documentation

some radix detailed explanations:

- [FR - tri radix](http://www.giacomazzi.fr/infor/Tri/TRadix.htm)
- [EN - radix sort](https://www.javatpoint.com/radix-sort)


### More
 - [great push_swap tester and performance checker](https://github.com/anonylouis/42Project---Push_swap-Tester)
