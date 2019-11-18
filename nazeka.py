a = [11,21,22,34,43,45,58,99,0]
b = [12,18,21,28,29,38,44,45,99]
#     0  1  2  3  4  5  6  7  8

c = []

k=0

#とりあえずcにデータを入れる
for i in range(len(a)):
    if a[i]!=99 and b[i]!=99:
        c.append(a[i])
        c.append(b[i])
    else:
        c.append(99)
        break

#確認出力
cnt=0
for i in c:
    print(i,end=' ')

#ｃを昇順に並び替える
min = 0
number = 0
for k in range(15): 

    min = c[k]
    number = k
    for i in range(k+1,15):
        if min > c[i]:
            #なぜここがc[k]ではだめで、minならうまくいくのか
            #c[k]だとc[k]より小さい一番最後にくる数がminになってしまう
            #c[k]より小さいことは保証されるが、最小値とは限らない
            min = c[i]
            number = i
        else:
            pass
    c[number] = c[k]
    c[k] = min

print("")
for k in c:
    print(k,end=' ')

