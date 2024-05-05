a, b, c = input().split()
a = int(a)  #변수 a에 저장되어있는 값을 정수로 바꾸어 다시 변수 a에 저장
b = int(b)
c = int(c)
if a<=b and a <= c:
    print(a)
elif b<=a and b <=c:
    print(b)
else :
    print(c)

