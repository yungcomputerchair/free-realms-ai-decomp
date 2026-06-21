// addr: 0x005f52f1
// name: RbTreeNode_allocWithParent_005f52f1
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RbTreeNode_allocWithParent_005f52f1(void * tree, bool attachParent) */

void * __thiscall RbTreeNode_allocWithParent_005f52f1(void *this,void *tree,bool attachParent)

{
  void *pvVar1;
  void *local_8;
  
  local_8 = this;
                    /* Allocates a 0x28-byte tree node, initializes its fields, and optionally
                       attaches it to the tree parent/root metadata. */
  pvVar1 = Mem_Alloc(0x28);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    *(undefined4 *)((int)pvVar1 + 0x10) = 0;
    *(undefined4 *)((int)pvVar1 + 0x14) = 0;
    *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x20) = 0;
    *(undefined4 *)((int)pvVar1 + 0x24) = 0;
  }
  if (tree == (void *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = 0;
  }
  else {
    *(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)this + 0x14);
    local_8 = pvVar1;
    StdVectorDword_pushBack((void *)((int)this + 4),(uint)&local_8);
  }
  return pvVar1;
}

