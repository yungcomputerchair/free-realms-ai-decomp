// addr: 0x014e4ff0
// name: ArchCommand_ValidateUsername_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ArchCommand_ValidateUsername_ctor(void * this) */

void * __fastcall ArchCommand_ValidateUsername_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ArchCommand_ValidateUsername command object by running its
                       common base constructor, installing the ArchCommand_ValidateUsername vtable,
                       and clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016afbe3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ArchCommand_ctor(this);
  *(undefined ***)this = ArchCommand_ValidateUsername::vftable;
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

