a,b,c = input().split()
a = int(a)
b = int(b)
c = int(c)

for i in range(0,c-1): # 7번 반복.
   a = a * b                  # a = 2 * 3
                                  # a = 6 * 3
                                  # a = 18 * 3
                                  # a = 1
print(a)
