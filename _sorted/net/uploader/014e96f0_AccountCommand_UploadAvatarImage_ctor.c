// addr: 0x014e96f0
// name: AccountCommand_UploadAvatarImage_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AccountCommand_UploadAvatarImage_ctor(void * this) */

void * __fastcall AccountCommand_UploadAvatarImage_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a AccountCommand_UploadAvatarImage command object: runs the common
                       command base constructor, installs the AccountCommand_UploadAvatarImage
                       vtable, and initializes command-specific fields/containers to empty defaults.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b0b28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01407af0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = AccountCommand_UploadAvatarImage::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

