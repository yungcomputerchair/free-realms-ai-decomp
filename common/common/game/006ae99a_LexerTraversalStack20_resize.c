// addr: 0x006ae99a
// name: LexerTraversalStack20_resize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LexerTraversalStack20_resize(void * this, int newSize) */

void __thiscall LexerTraversalStack20_resize(void *this,int newSize)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Shrinks a traversal stack whose records are 0x14 bytes wide, releasing
                       non-empty handles in discarded entries. */
  iVar2 = *(int *)((int)this + 0x40);
  if (newSize < iVar2) {
    iVar3 = iVar2 * 0x14;
    iVar2 = iVar2 - newSize;
    do {
      iVar1 = *(int *)(iVar3 + 4 + *(int *)((int)this + 0x3c));
      if (iVar1 != -1) {
        RbTree006a_insertUnique(iVar1);
      }
      iVar3 = iVar3 + -0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)((int)this + 0x40) = newSize;
  return;
}

