import pyqrcode
import png
def qr_code(s):
    d=pyqrcode.create(s)
    d.png('myScanner.png',scale=8)
    print("Code Executed check the png image for scan")


s=input("Enter what is your secret message")
qr_code(s)
