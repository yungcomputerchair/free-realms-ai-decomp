// addr: 0x00ae2d50
// name: AppUtil_FileRep_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AppUtil_FileRep_ctor(void * this) */

void * __fastcall AppUtil_FileRep_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an AppUtil::FileRep by running a base/helper initializer and
                       installing AppUtil::FileRep::vftable. Evidence is the explicit vftable
                       assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015cb998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0073b300(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = AppUtil::FileRep::vftable;
  ExceptionList = local_c;
  return this;
}

