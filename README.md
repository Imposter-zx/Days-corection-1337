# 1337 / 42 C Corrections

This repository contains various C programming exercises from the 1337/42 Piscine, organized by modules (C00 to C09). Every file has been analyzed to ensure it meets both logical requirements and coding standards.

## 📂 Project Structure

| Module  | Focus Area              | Key Exercises                                 |
| :------ | :---------------------- | :-------------------------------------------- |
| **C00** | Basics of Shell & C     | `ft_putchar`, `ft_putnbr`, `ft_print_comb`    |
| **C01** | Pointers & Memory       | `ft_ft`, `ft_swap`, `ft_rev_int_tab`          |
| **C02** | Strings & Manipulations | `ft_strcpy`, `ft_strcapitalize`, `ft_strlcpy` |
| **C03** | Standard String Libs    | `ft_strcmp`, `ft_strstr`, `ft_strncat`        |
| **C04** | Strings & Math          | `ft_strlen`, `ft_putnbr`, `ft_atoi`           |
| **C05** | Recursion & Math        | `ft_factorial`, `ft_sqrt`, `ft_is_prime`      |
| **C06** | Program Arguments       | `ft_print_params`, `ft_rev_params`            |
| **C07** | Memory Allocation       | `ft_strdup`, `ft_range`, `ft_ultimate_range`  |

## 🛠️ Analysis & Quality Control

The following standards were used to evaluate the files in this repository:

### 1. The Norm (Norminette)

- **Indentation**: All files must use **Tabs** for indentation, not spaces.
- **Headers**: Every file should include the standard **42 Header** (manually removed in the current version).
- **Function Limit**: Functions must not exceed 25 lines.
- **Global Variables**: Use of global variables is forbidden unless specified.

### 2. Logic & Precision

- **Pointers**: Proper dereferencing and null checks in exercises like `ft_strcpy`.
- **Edge Cases**:
  - `ft_putnbr`: Specifically handles `INT_MIN` (`-2147483648`).
  - `ft_atoi`: Correctly skips whitespaces and handles multiple signs (e.g., `--+42`).
  - `ft_sqrt`: Handles values that don't have an integer square root.
- **Recursion**: Stack safety in `ft_factorial` and `ft_putnbr` recursion.

## 🚀 How to Use

To compile and test any exercise, use `gcc` with the standard 42 flags:

```bash
gcc -Wall -Wextra -Werror <file.c> -o <output_name>
```

---

_Created and analyzed by [Imposter-zx](https://github.com/Imposter-zx)._
