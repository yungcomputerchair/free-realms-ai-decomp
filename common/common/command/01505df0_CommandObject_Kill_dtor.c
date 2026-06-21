// addr: 0x01505df0
// name: CommandObject_Kill_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Kill_dtor(void * this) */

void __fastcall CommandObject_Kill_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_Kill: releases the owned object pointer at field
                       +0x124 if present. It then installs/chains through normal CommandObject
                       destruction. */
  puStack_8 = &LAB_016b4f08;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_Kill::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Kill::vftable;
  local_4 = 0;
  if (*(undefined4 **)((int)this + 0x124) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x124))(1,uVar1);
    *(undefined4 *)((int)this + 0x124) = 0;
  }
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

