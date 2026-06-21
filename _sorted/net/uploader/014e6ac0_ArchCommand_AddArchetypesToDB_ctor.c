// addr: 0x014e6ac0
// name: ArchCommand_AddArchetypesToDB_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ArchCommand_AddArchetypesToDB_ctor(void * this) */

void * __fastcall ArchCommand_AddArchetypesToDB_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ArchCommand_AddArchetypesToDB, invoking its base constructor,
                       assigning ArchCommand_AddArchetypesToDB::vftable, and initializing default
                       fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b00b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ArchCommand_ctor(this);
  *(undefined ***)this = ArchCommand_AddArchetypesToDB::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}

