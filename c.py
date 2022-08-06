n = 7
b = True
i = 1
while i < n:
        if(n % i == 0):
            b = False
            break
        i += 1
if(b == False):
    print("NAO EH PRIMO")
else:
    print("PRIMO")
