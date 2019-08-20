import datetime

result = 0
p = datetime.datetime.now() + datetime.timedelta(seconds=1)
print("start")

while p > datetime.datetime.now():
    result = result + 1

print(result)
print("end")
