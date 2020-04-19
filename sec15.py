def maxmin(list):
    temp_list = list
    max = int(list[0])
    min = int(list[0])
    for i in range(len(temp_list)):
        if max < list[i]:
            max = list[i]
        elif min > list[i]:
            min = list[i]
        else:
            pass
    output_list = [max , min]
    return output_list

input_list = []
output_list = []
i = 0
while i < 10:
    temp = int(input("数値を入力："))
    if temp == -1:
        i = 11
    else:
        input_list.append(temp)
        i += 1
output_list += maxmin(input_list)

print("最大値，最小値の順に以下の通りになります．\n")
print(output_list)