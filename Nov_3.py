#OPPS
# class car:
#     colour="pink"
#     brand="range rover"
# Car1=car()
# print(" colour of car is ",Car1.colour)
# print(" brand of car is ",Car1.brand)

class student:
    
    #default constructors
    def __init__(self) : 
        print("adding new student to the new database")

    def __init__(self,name, marks) : #__init__ is the constructors
        self.name=name
        self.marks=marks
        print("adding new student to the new database")

s1=student("shravani",23)
print(s1.name,s1.marks)


s2=student("mahesh",41)
print(s2.name,"is the of the student and he/her marks =",s2.marks)







