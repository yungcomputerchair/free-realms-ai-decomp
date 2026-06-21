// addr: 0x006acd30
// name: BlockAllocator8192_getAllocationSpan
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int BlockAllocator8192_getAllocationSpan(void * this, int key) */

int __thiscall BlockAllocator8192_getAllocationSpan(void *this,int key)

{
  bool bVar1;
  void *this_00;
  int iVar2;
  int *key_00;
  undefined1 local_14 [8];
  int local_c [2];
  
                    /* Looks up a key in the 0x2000-block allocator's tree and returns current_end
                       minus key when found, otherwise zero. */
  RbTreeIterator_ctorFromNode_006a(*(undefined4 *)((int)this + 0x28),(void *)((int)this + 0x24));
  key_00 = local_c;
  StdRbTreeInt_find_006a((void *)((int)this + 0x24),local_14,&key,key_00);
  bVar1 = RbTreeIterator_equalsChecked(this_00,key_00);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x20) - key;
  }
  return iVar2;
}

