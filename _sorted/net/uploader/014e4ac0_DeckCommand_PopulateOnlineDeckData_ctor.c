// addr: 0x014e4ac0
// name: DeckCommand_PopulateOnlineDeckData_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeckCommand_PopulateOnlineDeckData_ctor(void * this) */

void * __fastcall DeckCommand_PopulateOnlineDeckData_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a DeckCommand_PopulateOnlineDeckData command object by running its
                       common base constructor, installing the DeckCommand_PopulateOnlineDeckData
                       vtable, and clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016afb23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DeckCommand_ctor(this);
  *(undefined ***)this = DeckCommand_PopulateOnlineDeckData::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}

