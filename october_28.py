#default arguments
'''
def great(name,msg="have good day"):
    print("hello",name,msg)
    #funtion calling
#non-default argument follows default argument

great("swaraj")
great("swaraj","wattamwar")
'''
#example of varible length argruments
'''
def add(*nums):
    sum=0
    for i in nums:
        sum+=i
    print(sum)
add()
add(10)
add(10,20,30,40)
add(10,20,30)
'''
# example of varible keyward argument to the function using **kwargs
'''
def func_kwargs(**data):
    print("\nData type of argument",type(data))

    for key,value in data.items():
        print("{} is {}".format(key,value))

func_kwargs(first_name="swaraj",age=20,college="itm")
'''




