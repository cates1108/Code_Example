#include "stdio.h"
#include "Linklist.h"
#include "stdlib.h"

Link* InitNode(int Value)
{
	Link* temp;

	temp = (Link*)malloc(sizeof(Link));
	if (temp == NULL)
	{
		printf("Node init Fail..\n");
		return NULL;
	}
	temp->Value = Value;
	temp->LinkNode = NULL;
	return temp;
}


void InsertNode(int Value,Link** HeadNode)
{
	Link* temp;

	printf("create node..\n");

	temp = (Link*)malloc(sizeof(Link));
	temp->Value = Value;
	temp->LinkNode = NULL;
	(*HeadNode)->LinkNode = temp;
	*HeadNode = temp;
	
}

void DeleteNode(Link** Head)
{

}
/*
int _GetNodeNum(Link root)
{
	Link temp;
	int count;
	temp = root;

	while(temp != NULL)
	{
		count++;
		temp = temp->LinkNode;
	}	
	retunr count;
}
*/
void Show(Link* root)
{
	//int count = _GetNodeNum(root)	
	Link* temp = root;

	while(temp != NULL)
	{
		printf("%d ",temp->Value);
		temp = temp->LinkNode;
	}	
}

