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
	Link* temp = *HeadNode;


	if(HeadNode == NULL)
	{
		printf("HeadNode Null..create..\n");
		temp = (Link*)malloc(sizeof(Link));
	
		temp->Value = Value;
		temp->LinkNode = NULL;
	}
	else
	{		
		printf("create node..\n");
		Link* temp2;

		temp2 = (Link*)malloc(sizeof(Link));
		temp2->Value = Value;
		temp2->LinkNode = NULL;
		temp->LinkNode = temp2;
		*HeadNode = temp2;
	}
}

void DeleteNode(void)
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
void show(Link* root)
{
	//int count = _GetNodeNum(root)	
	Link* temp = root;

	while(temp != NULL)
	{
		printf("%d ",temp->Value);
		temp = temp->LinkNode;
	}	
}

