// addr: 0x01407670
// name: FUN_01407670
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_01407670(void * factory) */

void * __fastcall FUN_01407670(void *factory)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory/registration wrapper allocating 0x24 bytes, constructing via
                       FUN_014075e0, and registering with a virtual method. Class unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169173b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  puVar2 = Mem_Alloc(0x24);
  puVar3 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = AccountCommand_SetChallengeStatus_ctor(puVar2);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(puVar3,uVar1);
  ExceptionList = puVar2;
  return puVar3;
}

