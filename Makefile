run-graph:
	g++ graph-test.cpp graph.cpp -o graph
	./graph

run-list:
	g++ list-test.cpp linkedlist.cpp listnode.cpp -o list
	./list

run-tree:
	g++ tree-test.cpp binarytree.cpp treenode.cpp -o tree
	./tree