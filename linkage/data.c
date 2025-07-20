static int internalLinkageVar = 10;

static int internalLinkageFun(){
    return internalLinkageVar;
} 


//Note: just comment out below part when compiling, gcc internal.c data.c 

/*
int externalLinkageVar = 20;

int externalLinkageFun(){
    return externalLinkageVar;
}
*/