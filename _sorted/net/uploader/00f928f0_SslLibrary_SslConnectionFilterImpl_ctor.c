// addr: 0x00f928f0
// name: SslLibrary_SslConnectionFilterImpl_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SslLibrary_SslConnectionFilterImpl_ctor(void * this) */

void * __fastcall SslLibrary_SslConnectionFilterImpl_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs SslLibrary::SslConnectionFilterImpl, installing its vtable,
                       initializing report-handler adapter storage, flags, and an IString field. The
                       vtable symbol directly identifies the class. */
  puStack_8 = &LAB_01629e48;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  local_4 = 0;
  *(undefined ***)this = SslLibrary::SslConnectionFilterImpl::vftable;
  FUN_00f93bc0(uVar1);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)((int)this + 0x14) = SslLibrary::ReportHandlerAdapter::vftable;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x201c) = 0;
  *(undefined4 *)((int)this + 0x2020) = 0;
  *(undefined4 *)((int)this + 0x2024) = 0;
  *(undefined4 *)((int)this + 0x2028) = 0;
  *(undefined4 *)((int)this + 0x202c) = 0;
  *(undefined1 *)((int)this + 0x2030) = 0;
  *(undefined1 *)((int)this + 0x2031) = 0;
  *(undefined1 *)((int)this + 0x2032) = 0;
  *(undefined1 *)((int)this + 0x2033) = 0;
  *(undefined1 *)((int)this + 0x2034) = 0;
  *(undefined ***)((int)this + 0x2038) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x203c) = &DAT_01cb40f8;
  *(undefined4 *)((int)this + 0x2044) = 0;
  *(undefined4 *)((int)this + 0x2040) = 0;
  *(undefined4 *)((int)this + 0x2048) = 0;
  *(undefined4 *)((int)this + 0x204c) = 0;
  ExceptionList = local_c;
  return this;
}

