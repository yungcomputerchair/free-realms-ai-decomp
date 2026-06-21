// addr: 0x013b0530
// name: FUN_013b0530
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013b0530(int *param_1,void *param_2,undefined4 param_3)

{
  uint uVar1;
  void *map;
  void *pvVar2;
  int key_;
  void *pvVar3;
  undefined1 local_1c [4];
  void *local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  puStack_8 = &LAB_016871b8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  local_18 = (void *)0x0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 0;
  PropertyAggregate_collectChildValues(param_2,local_1c);
  pvVar3 = local_18;
  if (local_14 < local_18) {
    FUN_00d83c2d(uVar1);
  }
  while( true ) {
    pvVar2 = local_14;
    if (local_14 < local_18) {
      FUN_00d83c2d(uVar1);
    }
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d(uVar1);
    }
    if (pvVar3 == pvVar2) break;
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (local_14 <= pvVar3) {
      FUN_00d83c2d();
    }
    LobbyAccount_ensureSingleton();
    pvVar2 = LobbyServiceAccountMap_findValue(map,key_);
    if (pvVar2 != (void *)0x0) {
      (**(code **)(*param_1 + 4))(pvVar2,param_3);
    }
    if (local_14 <= pvVar3) {
      FUN_00d83c2d();
    }
    pvVar3 = (void *)((int)pvVar3 + 4);
  }
  local_4 = 0xffffffff;
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return;
}

