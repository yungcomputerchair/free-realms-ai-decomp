// addr: 0x013cffd0
// name: DeckCommand_AddOnlineDeck_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_AddOnlineDeck_dtor(void * this) */

void __fastcall DeckCommand_AddOnlineDeck_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for DeckCommand_AddOnlineDeck. It releases the owned pointer at
                       word 2 if present, then destructs the base command state. */
  puStack_8 = &LAB_0168ac38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = DeckCommand_AddOnlineDeck::vftable;
  local_4 = 0;
  if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  local_4 = 0xffffffff;
  DeckCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

