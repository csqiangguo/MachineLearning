# -*- coding: utf-8 -*-
"""
Created on Sun Aug 17 16:00:41 2014

@author: gq
"""

import trees
myDat,labels=trees.createDataSet()
print myDat
#print trees.splitDataSet(myDat,0,1)
#print trees.splitDataSet(myDat,0,0)
#print trees.calcShannonEnt(myDat)
#print trees.chooseBestFeatureToSplit(myDat)
print trees.createTree(myDat,labels)