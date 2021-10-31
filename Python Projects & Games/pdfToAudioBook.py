import os
import sys

# to read pdf files, pip install PyPDF2
from PyPDF2 import PdfFileReader
# text to speech, pip install pyttsx3
import pyttsx3


# give the file path as command line argument
# eg: pdfToAudioBook.py path/to/abc.pdf
if len(sys.argv) < 2:
    print("No File Name Given.")
    print("Give absolute aur relative file path.")
    sys.exit(1)


# check if path leads to a valid pdf
pdf_path = sys.argv[1]
if not os.path.isfile(pdf_path):
    print("Invalid file path.")
    sys.exit(1)
elif pdf_path[-3:] != 'pdf':
    print("The file is not a PDF.")
    sys.exit(1)


book = open(pdf_path, 'rb')
reader = PdfFileReader(book)

speaker = pyttsx3.init()
speaker.setProperty('rate', 140)

# extract text from each page and convert it to speeh.
for pg in reader.pages:
    text = pg.extractText()
    text = ' '.join(text.split('\n'))
    speaker.say(text)
    speaker.runAndWait()

book.close()
