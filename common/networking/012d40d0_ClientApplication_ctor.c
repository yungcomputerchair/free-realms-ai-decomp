// addr: 0x012d40d0
// name: ClientApplication_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientApplication_ctor(void * this) */

void * __fastcall ClientApplication_ctor(void *this)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ClientApplication, initializes multiple owned members, creates the
                       NetworkService singleton/member, and sets default timers/flags. Evidence:
                       explicit ClientApplication::vftable and call to NetworkService_getSingleton.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016703b1;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = ClientApplication::vftable;
  uVar2 = FUN_012d19e0(uVar1);
  *(undefined4 *)((int)this + 0x14) = uVar2;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_4 = 0;
  FUN_005258fb();
  local_4._0_1_ = 1;
  FUN_005258fb();
  local_4._0_1_ = 2;
  FUN_005258fb();
  local_4._0_1_ = 3;
  FUN_005258fb();
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  local_4._0_1_ = 5;
  FUN_005258fb();
  *(undefined4 *)((int)this + 0xdc) = 0xf;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined1 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  local_4 = CONCAT31(local_4._1_3_,10);
  *(undefined4 *)((int)this + 4) = 0;
  pvVar3 = NetworkService_getSingleton();
  *(void **)((int)this + 8) = pvVar3;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x8c) = 400;
  *(undefined1 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  ExceptionList = local_c;
  return this;
}

