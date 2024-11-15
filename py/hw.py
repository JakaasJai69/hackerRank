"""
input: 4567, 565656
output: 6745, 656565
"""

a = int(input("Enter No: "))

if len(str(a))%2 == 0:
    middle = len(str(a))/2
    mod = int ("1" + "0" * middle)
    last = a % mod
    first = int(a / mod)
    print((last * mod) + first)

else:
    middle = (len(str(a))-1)/2
    mod = int(str("1" + "0" * middle))
    last = a % mod
    first = int(a / mod)
    print((last * mod) + first)


