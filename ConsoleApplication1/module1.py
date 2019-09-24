
#import PyPDF4
#from pdfminer.pdfparser import PDFParser
#from pdfminer.pdfdocument import PDFDocument
#from pdfminer.pdfpage import PDFPage
#from pdfminer.pdfpage import PDFTextExtractionNotAllowed
#from pdfminer.pdfinterp import PDFResourceManager
#from pdfminer.pdfinterp import PDFPageInterpreter
#from pdfminer.pdfdevice import PDFDevice

number123 = 123

def summarizePDF():
    print('hi from module1')
    #pdfMiner
    #stream = open("BridgewaterLease.pdf", 'rb')
    #parser = PDFParser(stream)
    #document = PDFDocument(parser, "")

    #if not document.is_extractable:
    #    raise PDFTextExtractionNotAllowed

    #rsrcmgr = PDFResourceManager()

    #device = PDFDevice(rsrcmgr)

    #interpreter = PDFPageInterpreter(rsrcmgr, document)

    #for i, page in enumerate(PDFPage.create_pages(document)):
    #    interpreter.process_page(page)
    
    #pyPDF4 stuff
    print('pyPDF4')
    pdfObject = PyPDF4.PdfFileReader(open("BridgewaterLease.pdf", 'rb'))
    pdfObject.decrypt("")
    docInfo = pdfObject.getDocumentInfo()
    print('titile: ', docInfo.title)
    print('subject: ', docInfo.subject)
    print('author: ', docInfo.author)
    print('bye from module1')

def printy():
    print("howdy")
    return [];


#import modClassImp

def GetInstance():
    print("hello world")
    return plugin()

class plugin(object):
    def __init__(self):
        print("initializing")
        self.hello()

    def hello(self):
        print("my pythonic hello")
