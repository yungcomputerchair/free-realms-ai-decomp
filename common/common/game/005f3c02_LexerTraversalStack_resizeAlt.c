// addr: 0x005f3c02
// name: LexerTraversalStack_resizeAlt
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LexerTraversalStack_resizeAlt(void * this, int newSize) */

void __fastcall LexerTraversalStack_resizeAlt(void *this,int newSize)

{
  int iVar1;
  int extraout_EDX;
  int iVar2;
  int in_stack_00000004;
  
                    /* Alternate copy of the traversal-stack shrink routine that releases handles
                       from discarded 16-byte entries and updates the size. */
  iVar1 = *(int *)((int)this + 0x40);
  if (in_stack_00000004 < iVar1) {
    iVar2 = iVar1 << 4;
    iVar1 = iVar1 - in_stack_00000004;
    do {
      if (*(int *)(iVar2 + 4 + *(int *)((int)this + 0x3c)) != -1) {
        LexerTraversalStack_removePage((void *)((int)this + 8),newSize);
        newSize = extraout_EDX;
      }
      iVar2 = iVar2 + -0x10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(int *)((int)this + 0x40) = in_stack_00000004;
  return;
}

