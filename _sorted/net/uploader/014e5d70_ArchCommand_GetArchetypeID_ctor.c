// addr: 0x014e5d70
// name: ArchCommand_GetArchetypeID_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ArchCommand_GetArchetypeID_ctor(void * this) */

void * __fastcall ArchCommand_GetArchetypeID_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ArchCommand_GetArchetypeID, invoking its base constructor,
                       assigning ArchCommand_GetArchetypeID::vftable, and initializing default
                       fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016afe48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ArchCommand_ctor(this);
  *(undefined ***)this = ArchCommand_GetArchetypeID::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

