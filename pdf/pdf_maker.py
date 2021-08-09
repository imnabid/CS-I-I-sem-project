from fpdf import FPDF
import datetime
import random
import os

WIDTH = 210
HEIGHT = 297

def read_data():
    with open("..\storage.txt",'r') as myfile:
        values = myfile.read().replace('\n','')

    holder = values.split(',')
    return(holder)
data = read_data() 


def text(pdf,dictionary):
    for key,item in dictionary.items():
        
        pdf.cell(15)
        pdf.cell(40, 7, key)
        pdf.cell(0,7,': '+item,ln=1)

# VALUES
COURSE_NO = ['MATH 101','PHYS 101','CHEM 101','COMP 102','ENGG 111','ENGG 101','EDRG 101','Total']
COURSE_T = ['Calculus & Linear Algebra','General Physics I','General Chemistry','Computer Programming','Elements of Engineering','Engineering Project Preparation','Engineering Drawing I','']
CREDIT = ['3','3','3','3','3','2','2','19']
GRADE = data[-8:-1]
GRADE.append('')
GRADE_V  = data[3:10]
GRADE_V.append('')
GRADE_P  = data[10:17]
m = [float(i) for i in GRADE_P]
GRADE_P.append(str(sum(m))[:5])
CGPA = data[-1]
REMARKS = ['' for i in range(8)]
headers = ['Course','Course Title','Credit','Grade','Grade.V','Grade.P','Remarks']
W = [22.3,58.4,13.7,13.6,15.6,15.6,17.8]      
ROW = [COURSE_NO,COURSE_T,CREDIT,GRADE,GRADE_V,GRADE_P,REMARKS]  


dictionary ={ 
    'Level':data[0],
    'Name of the student':data[1],
    'Registration No.':f'{random.randint(71111,79999)}',
    'Examination Roll No.':data[2]
}


pdf = FPDF('P', 'mm', 'A4')
pdf.add_page()
pdf.set_font('Times', '', 12)

pdf.cell(0,10,ln=1)
text(pdf,dictionary)
      
# Table
# head head
pdf.cell(15)
pdf.cell(WIDTH-53,10,'Year I : Semester I'+90*' '+f'{datetime.date.today()}',border=1,ln=1)

# Head
pdf.cell(15)
for i in range(7):
    pdf.cell(W[i],8,headers[i],border=1,align='C', ln= 1 if i==6 else 0)
# Body


for j in range(8):
    pdf.cell(15)
    for i in range(7):
        pdf.cell(W[i],8,ROW[i][j],border=1,align='C',ln= 1 if i==6 else 0)
pdf.cell(15)
pdf.cell(48, 7, 'GPA (Grade Point Average)')
pdf.cell(0,7,f' = {data[-1]}')

pdf.output('marksheet.pdf', 'F')
# auto open pdf
os.startfile('marksheet.pdf')