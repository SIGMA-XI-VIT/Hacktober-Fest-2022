#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int key){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=key;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}
 
void preOrder(struct Node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct Node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

void inOrder(struct Node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }	 	  	 	 		   	    	  	    	     	 	
}

int main(){
    struct Node* head=createNode(2);
    head->left=createNode(7);
    head->left->left=createNode(2);
    head->left->right=createNode(6);
    head->left->right->left=createNode(5);
    head->left->right->right=createNode(11);
    head->right=createNode(5);
    head->right->right=createNode(9);
    head->right->right->left=createNode(4);
    
    for (int i=0;i<3;i++){
        int choice=1;
        switch(choice){
            case 1:
            inOrder(head);
            printf("\n");
            break;
            case 2:
            preOrder(head);
            printf("\n");
            break;
            case 3:
            postOrder(head);
            printf("\n");
            break;
        }
    }
    
    return 0;
}	 	  	 	 		   	    	  	    	     	 	
