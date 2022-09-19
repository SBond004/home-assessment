def getAboveNum (Num, list2):
    for k in list2:
        if k>Num:
            return k
    for l in list2:
        if l<Num and k<Num:
            return -1
            