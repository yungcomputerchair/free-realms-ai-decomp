// addr: 0x0097a460
// name: FUN_0097a460
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void destroyPointerAndIntMapHolder(void * this) */

void __fastcall destroyPointerAndIntMapHolder(void *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Tears down an owned polymorphic pointer, calls a cleanup routine, and
                       destroys a SoeUtil::Map<int,int> node tree. Class identity for the holder is
                       unknown. */
  puStack_8 = &LAB_01598446;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)this)(1,DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  }
  *(undefined4 *)this = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00fc45a0();
  local_4 = 0xffffffff;
  iVar1 = *(int *)((int)this + 0x14);
  *(int *)((int)this + 0x10) = (int)SoeUtil::Map<int,int,-1,0>::vftable;
  if (iVar1 != 0) {
    FUN_008234e0(*(undefined4 *)(iVar1 + 0xc));
    FUN_008234e0(*(undefined4 *)(iVar1 + 0x10));
    (**(code **)(*(int *)((int)this + 0x10) + 0xc))(iVar1);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return;
}

