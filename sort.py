h = [100,17,35,18,77]

#初期値出力
for i in h:
    print(str(i),end=' ')

print("")

k=0
i=0
number=0
min=0

for k in range(5):
    min = h[k]
    number = k
    #仮の最小値
    #number=kが大事

    for i in range(k+1,5):
        if min >h[i]:
            min = h[i]
            number = i
            #徐々にminの精度が高まっていく
        else:
            pass
    print("最小値は" + str(min) )

    print("これから{}と{}を入れ替えます".format(min,h[k]) )
    h[number] = h[k]
    h[k] = min

    for i in h:
        print(i,end=' ')
    print("")
    print("---------------")


