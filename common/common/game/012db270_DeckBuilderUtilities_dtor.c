// addr: 0x012db270
// name: DeckBuilderUtilities_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckBuilderUtilities_dtor(void * this) */

void __fastcall DeckBuilderUtilities_dtor(void *this)

{
  undefined4 uStack00000004;
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* Destroys a DeckBuilderUtilities object, resets the global singleton pointer
                       if it points at this object, and frees several vector/string/tree members.
                       The vtable assignment names DeckBuilderUtilities directly. */
  puStack_8 = &LAB_01671062;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = DeckBuilderUtilities::vftable;
  if (this == DAT_01cbd6a8) {
    DAT_01cbd6a8 = (void *)0x0;
  }
  local_4 = (void *)0x4;
  if (*(void **)((int)this + 0x50) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  local_4 = (void *)0x3;
  if (*(void **)((int)this + 0x40) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x40));
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  local_4 = (void *)0x2;
  StdRbTree_destroyAndFree((void *)((int)this + 0x30));
  if (*(void **)((int)this + 0x24) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x24));
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  StdRbTree_destroyAndFree((void *)((int)this + 0x14));
  uStack00000004 = 0xffffffff;
  if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_4;
  return;
}

