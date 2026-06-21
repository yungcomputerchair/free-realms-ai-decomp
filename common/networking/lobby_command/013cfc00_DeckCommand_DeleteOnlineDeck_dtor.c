// addr: 0x013cfc00
// name: DeckCommand_DeleteOnlineDeck_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_DeleteOnlineDeck_dtor(void * this) */

void __fastcall DeckCommand_DeleteOnlineDeck_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for DeckCommand_DeleteOnlineDeck: installs its vtable, releases an
                       owned std::string, then calls the DeckCommand base destructor. Evidence is
                       DeckCommand_DeleteOnlineDeck::vftable and base dtor call. */
  puStack_8 = &LAB_0168ab83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = DeckCommand_DeleteOnlineDeck::vftable;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  local_4 = 0xffffffff;
  DeckCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

