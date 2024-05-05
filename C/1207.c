Yut = list(range(4))
Yut = input().split()
Yut_len = len(Yut)

for i in range(0, Yut_len):
    Yut[i] = int(Yut[i])
for i in range(0, Yut_len):
    if Yut[i] == 1:
        continue
    elif Yut[i] == 0:
        continue
    else : exit(0)

result = 0
for i in range(0, Yut_len):
    result = result + Yut[i]
    
if result == 0:
    print("모")
elif result == 1:
    print("도")
elif result == 2:
    print("개")
elif result == 3:
    print("걸")
elif result ==4:
    print("윷")


