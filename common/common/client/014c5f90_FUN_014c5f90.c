// addr: 0x014c5f90
// name: FUN_014c5f90
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014c5f90(int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *this;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aaddb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x46);
  DisplayActionBuilder_addIntArg(pvVar2,*(int *)(param_1 + 8));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar2);
  uVar3 = *(undefined4 *)(param_1 + 8);
  FUN_012cfde0(uVar3);
  pvVar2 = (void *)FUN_012cc6b0(uVar3);
  if (pvVar2 != (void *)0x0) {
    DisplayActionManager_ensureSingleton();
    ClientApplication_setLobby(this,pvVar2);
  }
  ExceptionList = local_c;
  return 1;
}

