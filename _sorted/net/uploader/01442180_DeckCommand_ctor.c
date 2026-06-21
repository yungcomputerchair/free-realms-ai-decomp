// addr: 0x01442180
// name: DeckCommand_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeckCommand_ctor(void * this) */

void * __fastcall DeckCommand_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the DeckCommand base by invoking a parent command initializer and
                       installing DeckCommand vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01698e68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = DeckCommand::vftable;
  ExceptionList = local_c;
  return this;
}

