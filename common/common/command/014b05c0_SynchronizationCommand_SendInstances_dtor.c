// addr: 0x014b05c0
// name: SynchronizationCommand_SendInstances_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_SendInstances_dtor(void * this) */

void __fastcall SynchronizationCommand_SendInstances_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destructor for SynchronizationCommand_SendInstances, cleaning base/member
                       command state. */
  puStack_8 = &LAB_016a6d9e;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_SendInstances::vftable;
  local_4 = 1;
  FUN_012c2de0(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_012c2de0();
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

