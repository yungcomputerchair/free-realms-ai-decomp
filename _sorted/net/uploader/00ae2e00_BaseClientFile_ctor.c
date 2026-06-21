// addr: 0x00ae2e00
// name: BaseClientFile_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * BaseClientFile_ctor(void * this) */

void * __fastcall BaseClientFile_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs BaseClientFile from AppUtil_FileRep, installs the vtable, clears
                       file state fields, and initializes an embedded component. Vtable identifies
                       the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015cb9de;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  AppUtil_FileRep_ctor(this);
  *(undefined ***)this = BaseClientFile::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 1;
  FUN_007039b0(uVar1);
  ExceptionList = local_c;
  return this;
}

