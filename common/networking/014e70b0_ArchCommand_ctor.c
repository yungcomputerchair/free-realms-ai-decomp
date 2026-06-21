// addr: 0x014e70b0
// name: ArchCommand_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ArchCommand_ctor(void * this) */

void * __fastcall ArchCommand_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the ArchCommand base by calling NetworkCommand_ctor, installing
                       ArchCommand vtable, and zeroing a scalar field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b01c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = ArchCommand::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = local_c;
  return this;
}

