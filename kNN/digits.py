# -*- coding: utf-8 -*-
"""
Created on Sat Aug 16 21:03:44 2014

@author: 郭强
"""

import kNN
from numpy import *
import operator
def img2vector(filename):
    returnVect=zeros((1,1024))
    fr=open(filename)
    for i in range(32):
        lineStr=fr.readline()
        #for j in range(32):
           # returnVect[0,32*i+j]=int(lineStr[j])
        print lineStr
    #return returnVect
