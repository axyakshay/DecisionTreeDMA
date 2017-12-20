
from sklearn import tree
clf = tree.DecisionTreeClassifier(criterion="entropy",min_impurity_split=0.02 ,min_samples_split=370)
ll=[]
tcpORudp=[]
with open('traceDMA.txt') as f:
    content = f.readlines()
# you may also want to remove whitespace characters like `\n` at the end of each line
content = [x.strip() for x in content]

for i in range(len(content)):
    l = []
    a,b,c=content[i].split()
    #print(a)
    l.append(a)
    #print(b)
    l.append(b)
    #print(c)

    ll.append(l)
    tcpORudp.append(c)
print("XXXXXXXXX")
#print (ll)
#print (tcpORudp )
clf = clf.fit(ll, tcpORudp)
#prediction = clf.predict([[80, 1480]])
#print(prediction)

import graphviz
featurenames= ["PORT","SIZE"]
targetnames= ["TCP","UDP"]
dot_data = tree.export_graphviz(clf,feature_names=featurenames,class_names=targetnames,filled=True,out_file=None)
graph = graphviz.Source(dot_data)
graph.render("outputee")


