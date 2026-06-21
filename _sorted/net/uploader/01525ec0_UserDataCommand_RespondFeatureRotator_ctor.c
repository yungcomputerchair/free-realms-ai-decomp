// addr: 0x01525ec0
// name: UserDataCommand_RespondFeatureRotator_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_RespondFeatureRotator_ctor(void * this) */

void * __fastcall UserDataCommand_RespondFeatureRotator_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UserDataCommand_RespondFeatureRotator command object: runs the
                       common command base constructor, installs the
                       UserDataCommand_RespondFeatureRotator vtable, and initializes
                       command-specific fields/containers to empty defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b9205;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01528920(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UserDataCommand_RespondFeatureRotator::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  ExceptionList = local_c;
  return this;
}

