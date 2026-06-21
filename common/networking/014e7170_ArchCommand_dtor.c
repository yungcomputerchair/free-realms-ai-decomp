// addr: 0x014e7170
// name: ArchCommand_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_dtor(void * this) */

void __fastcall ArchCommand_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for ArchCommand; restores ArchCommand vtable and
                       calls NetworkCommand_dtor. */
  puStack_8 = &LAB_016b01f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = ArchCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

