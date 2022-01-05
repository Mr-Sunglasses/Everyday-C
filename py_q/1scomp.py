n = int(input("Please Enter the number you want to check ones complement = "))
bin_N = bin(n)
copy_bin = bin_N[2:len(bin_N)]
ones = ""
for i in copy_bin:
    if i=='0':
        i = '1'
        ones+=i
    elif i=='1':
        i='0'
        ones+=i

newbin = "0b" + ones
newbin = int(newbin,2)
print("The ones complement of {} is {}".format(n,newbin))

