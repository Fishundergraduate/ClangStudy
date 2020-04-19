year = int(input("オリンピックイヤーかどうかを判定します．西暦年を入力："))
if year == int(2021):
    print("実はオリンピックが開催されています．\n")
elif year % 2 == 1:
    print("オリンピックは開催されていません．\n")
elif year %4 == 0:
    print("夏季オリンピックが開催されます．\n")
elif year %4==2:
    print("冬季オリンピックが開催されます．\n")
else:
    print("入力したのが整数値かを確認してください．")
