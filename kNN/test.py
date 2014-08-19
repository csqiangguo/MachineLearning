# -*- coding: utf-8 -*-
"""
Created on Sat Aug 16 11:28:02 2014

@author: 郭强
"""

import kNN
import matplotlib
import matplotlib.pyplot as plt
'''
group,labels=kNN.createDataSet()
print kNN.classify0([0,0],group,labels,3)
datingDataMat,datingLabels=kNN.file2matrix('datingTestSet2.txt')

fig=plt.figure()
ax=fig.add_subplot(111)
ax.scatter(datingDataMat[:,0],datingDataMat[:,1],15.0*array(datingLabels),15.0*array(datingLabels))
plt.show()

normMat,ranges,minVals=kNN.autoNorm(datingDataMat)
kNN.datingClassTest()
'''
kNN.classifyPerson()