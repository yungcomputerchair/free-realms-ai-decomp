// addr: 0x0108c790
// name: YouTube_YouTubeUploader_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * YouTube_YouTubeUploader_ctor(void * this) */

void * __fastcall YouTube_YouTubeUploader_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a YouTube_YouTubeUploader object: installs the class vtable/base
                       state and initializes owned fields. It initializes YouTube uploader state and
                       an empty IString member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016420f6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = YouTube::YouTubeUploader::vftable;
  FUN_0108f6d0(uVar1);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined **)((int)this + 0xc) = PTR_01884620;
  *(undefined ***)((int)this + 0x10) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x14) = &DAT_01cb845c;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return this;
}

