import csv
with open('emp.csv','r')as file1:
     reader=csv.reader(file1)
     for row in reader:
           print(row)
