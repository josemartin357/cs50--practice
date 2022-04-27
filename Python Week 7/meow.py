# Comparing C and Python

### C VERSION 1 ###
#include <stdio.h>
# int main(void)
# {
#     printf("meow\n");
#     printf("meow\n");
#     printf("meow\n");
# }

### PYTHON VERSION 1 ###
# print("meow")
# print("meow")
# print("meow")

### C VERSION 2 ###
# // Better design
# #include <stdio.h>
# int main(void)
# {
#     for (int i = 0; i < 3; i++)
#     {
#         printf("meow\n");
#     }
# }

### PYTHON VERSION 2 ###
# # Better design
# for i in range(3):
#     print("meow")


### C VERSION 3 ###
# // Abstraction
# #include <stdio.h>
# void meow(void);
# int main(void)
# {
#     for (int i = 0; i < 3; i++)
#     {
#         meow();
#     }
# }
# // Meow once
# void meow(void)
# {
#     printf("meow\n");
# }


### PYTHON VERSION 3 ###
# # Abstraction
# def main():
#     for i in range(3):
#         meow()
# # Meow once
# def meow():
#     print("meow")
# main()


### C VERSION 4 ###
# // Abstraction with parameterization
# #include <stdio.h>
# void meow(int n);
# int main(void)
# {
#     meow(3);
# }
# // Meow some number of times
# void meow(int n)
# {
#     for (int i = 0; i < n; i++)
#     {
#         printf("meow\n");
#     }
# }

### PYTHON VERSION 4 ###
# Abstraction with parameterization
def main():
    meow(3)
# Meow some number of times
def meow(n):
    for i in range(n):
        print("meow")
main()