// addr: 0x0135fb90
// name: CardActionList_pushBack
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CardActionList_pushBack(void * this, void * action) */

void CardActionList_pushBack(void *this,void *action)

{
  int in_ECX;
  void **unaff_retaddr;
  
                    /* Small wrapper that pushes one pointer-sized action entry into a vector. */
  PointerVector_pushBack((void *)(in_ECX + 0x1b0),&this,unaff_retaddr);
  return;
}

