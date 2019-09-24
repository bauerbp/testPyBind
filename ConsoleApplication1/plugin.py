import modClassImp
#import inspect
#from modClassImp import *

def GetInstance():
    print("hello world")
    return plugin()

class plugin(object):
    def __init__(self):
        #ClassImp.__init__(self)
        
        impl = modClassImp.ClassImp()
        print("initializing")
        self.hello()

    def hello(self):
        print("my pythonic hello")
        #print(__dict__)