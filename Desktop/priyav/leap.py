import datetime
y1= datetime.date.today().year
y2 = int(input("enter the final year:"))
if y1>y2:
    print("final year must be greater than or equal to the current year.")
else:
    print (f"leap years from (current_year) to (final_year)")
    for year in range(y1,y2+ 1):
        if (year % 4==0 and year % 100 !=0) or (year %400== 0):
            print(year)
       
