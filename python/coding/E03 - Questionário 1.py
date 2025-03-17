lesmas_c1 = []  
lesmas_c2 = []
lesmas_c3 = []

qt = int(input())

for i in range(qt):
    lesma = int(input())
    if lesma < 10:
        lesmas_c1.append(lesma)
    elif (lesma < 20 and lesma >= 10):
        lesmas_c2.append(lesma)
    else:
        lesmas_c3.append(lesma)

if len(lesmas_c1) == 0:
    lesmas_c1.append(0)
if len(lesmas_c2) == 0:
    lesmas_c2.append(0)
if len(lesmas_c3) == 0:
    lesmas_c3.append(0)
    
print(max(lesmas_c1), max(lesmas_c2), max(lesmas_c3))