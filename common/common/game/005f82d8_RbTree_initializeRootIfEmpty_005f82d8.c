// addr: 0x005f82d8
// name: RbTree_initializeRootIfEmpty_005f82d8
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool RbTree_initializeRootIfEmpty_005f82d8(void * tree, void * key, int value)
    */

bool __thiscall RbTree_initializeRootIfEmpty_005f82d8(void *this,void *tree,void *key,int value)

{
  int iVar1;
  void *pvVar2;
  bool unaff_SI;
  
                    /* Initializes an empty tree by setting metadata, allocating root/sentinel
                       nodes, and linking them. Returns true only when the tree was previously
                       empty. */
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    *(void **)((int)this + 0x14) = key;
    pvVar2 = RbTreeNode_allocWithParent_005f52f1(this,(void *)0x0,unaff_SI);
    *(void **)this = pvVar2;
    pvVar2 = RbTreeNode_allocWithParent_005f52f1(this,(void *)0x1,unaff_SI);
    RbTreeNode_link_005f5346(*(void **)this,tree,pvVar2);
  }
  return iVar1 == 0;
}

