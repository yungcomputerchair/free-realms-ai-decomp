// addr: 0x014e5b40
// name: ArchCommand_SetEnabledArchetypes_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ArchCommand_SetEnabledArchetypes_ctor(void * this) */

void * __fastcall ArchCommand_SetEnabledArchetypes_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ArchCommand_SetEnabledArchetypes command object by running its
                       common base constructor, installing the ArchCommand_SetEnabledArchetypes
                       vtable, and clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016afdc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ArchCommand_ctor(this);
  *(undefined ***)this = ArchCommand_SetEnabledArchetypes::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}

