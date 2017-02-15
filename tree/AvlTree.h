#ifndef _AvlTree_H

struct AvlNode;
typedef struct AvlNode *Position;
typedef struct AvlNode *AvlTree;

AvlTree MakeEmpty(AvlTree T);
Position Find(ElementType X, AvlTree T);
Position FindMin(AvlTree T);
Position FindMax(AvlTree T);
AvlTree Insert(ElementType X, AvlTree T);
AvlTree Delete(ElementType X, AvlTree T);
ElementType Retrieve(Position P);

#endif /* AvlTree */

struct AvlNode{
    ElementType Element;
    AvlTree Left;
    AvlTree Right;
    int Height;
};

/* 计算一个节点的高度，空节点高度定义为-1。该方法为私有方法 */
static int Height(Position P){
    if(P==NULL){
        return -1;
    }
    return P->Height;
}

/* 清空一棵树 */
AvlTree MakeEmpty(AvlTree T){
    if(T!=NULL){
        MakeEmpty(T->Left);
        MakeEmpty(T->Right);
        free(T);
    }
}

/* 搜索一棵树 */
Position Find(ElementType X, AvlTree T){
    if(T==NULL){
        return NULL;
    }

    if(X>T->Element){
        return Find(X, T->Right);
    }else if(X<T->Element){
        return Find(X, T->Left);
    }else{
        return T;
    }
}

Position FindMin(AvlTree T){
    if(T==NULL){
        return NULL;
    }
    if(T->Left!=NULL){
        return FindMin(T->Left);
    }
    return T;
}

Position FindMax(AvlTree T){
    if(T==NULL){
        return NULL;
    }
    if(T->Right!=NULL){
        return FindMax(T->Right);
    }
    return T;
}

AvlTree Insert(ElementType X, AvlTree T){
    //空树的情况
    if(T==NULL){
        T = malloc(sizeof(struct AvlNode));
        if(T==NULL){
            // out of space error
            return NULL;
        }
        T->Element = X;
        T->Right = NULL;
        T->Left = NULL;
        T->Height = 0;
        return T;
    }
    
    if(X<T->Element){
        T->Left = Insert(X, T->Left);
        if(T->Left->Height-T->Right->Height>1){
            if(X<T->Left->Element){
                T = SingleRotateWithLeft(T);
            }else{

            }
        }
    }
}

AvlTree Delete(ElementType X, AvlTree T){
}

//左转
static Position SingleRotateWithLeft(Position K2){
    
}

static Position SingleRotateWithRight(Position K2){

}

static Position DoubleRotateWithLeft(Position K3){

}

static Position DoubleRotateWithRight(Position K3){

}

