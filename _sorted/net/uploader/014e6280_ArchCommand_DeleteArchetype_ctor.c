// addr: 0x014e6280
// name: ArchCommand_DeleteArchetype_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ArchCommand_DeleteArchetype_ctor(void * this) */

void * __fastcall ArchCommand_DeleteArchetype_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ArchCommand_DeleteArchetype, invoking its base constructor,
                       assigning ArchCommand_DeleteArchetype::vftable, and initializing default
                       fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aff68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ArchCommand_ctor(this);
  *(undefined ***)this = ArchCommand_DeleteArchetype::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

