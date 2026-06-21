// addr: 0x007613f0
// name: Deep_PrimitiveManager_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_PrimitiveManager_ctor(void * this, void * owner) */

void * __thiscall Deep_PrimitiveManager_ctor(void *this,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Deep::PrimitiveManager, initializes base/container state, stores
                       the owner pointer, and sets default allocation capacities of 0x4000. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01556316;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = Deep::PrimitiveManager::vftable;
  FUN_0075fb80(uVar1);
  local_4 = 0;
  *(void **)((int)this + 0x28) = owner;
  FUN_00761330();
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x388) = 0x4000;
  *(undefined4 *)((int)this + 0x390) = 0x4000;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  ExceptionList = local_c;
  return this;
}

