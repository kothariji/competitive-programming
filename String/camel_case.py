def to_camel_case(text):
    s=''
    a=0
    for i in text:
        if a==0:
            if i.isalnum()==True:
                s+=i
            else:
                a=1
        else:
            s+=i.upper()
            a=0
    return s
text=input()
to_camel_case(text)