

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  /*Finish enqueue */
  new_node->data=x;
  new_node->nextPtr=NULL;
  if(q->size==0)/*Node แรก*/
  { q->headPtr = new_node;}
   else q->tailPtr->nextPtr = new_node;
  q->tailPtr = new_node;  
    q->size++;  
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
  if(q->size>0){
   if(t){
   int value= t->data;
       /*Finish dequeue */
        

  if(q->size==1) q->tailPtr=NULL; //ขยับtail กรณีโหนดสุดท้าย
  q->headPtr=q->headPtr->nextPtr;
  free(t);
  q->size--;
  
   return value;
   } 
  }
   
}

