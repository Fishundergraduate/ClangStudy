identify_end_of_input = True
is_first_time = True
while identify_end_of_input:
    tmp = int(input("数値を入力してください："))
    if is_first_time:
        max = tmp
        min = tmp
        is_first_time = not is_first_time
    if tmp == -1:
        identify_end_of_input = False
    elif max < tmp or min > tmp:
        if max < tmp:
            max = tmp
        else:
            min = tmp
    else:
        pass
print("maxは",max,"minは",min)