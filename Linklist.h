typedef struct Node Link;

struct Node
{
	int Value;
	Link* LinkNode;	
};

Link* InitNode(int Value);

void InsertNode(int Value, Link* HeadNode);

void DeleteNode(Link** HeadNode);

void Show(Link* HeadNode);
