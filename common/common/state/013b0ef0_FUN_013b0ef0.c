// addr: 0x013b0ef0
// name: FUN_013b0ef0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_013b0ef0(int *param_1,undefined4 param_2)

{
  void *pvVar1;
  void *map;
  void *pvVar2;
  int key_;
  void *pvVar3;
  undefined1 *puVar4;
  undefined1 local_5c [4];
  void *local_58;
  void *local_54;
  undefined4 local_4c;
  undefined1 local_48 [56];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687420;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_5c;
  ExceptionList = &local_c;
  puVar4 = local_5c;
  local_4c = param_2;
  FUN_012cfde0(puVar4,DAT_01b839d8 ^ (uint)&stack0xffffff94);
  FUN_012cf120(puVar4);
  pvVar3 = local_58;
  local_4 = 0;
  if (local_54 < local_58) {
    FUN_00d83c2d();
  }
  pvVar1 = local_54;
  if (local_54 < local_58) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x5c) {
      FUN_00d83c2d();
    }
    if (pvVar3 == pvVar1) break;
    if (&stack0x00000000 == (undefined1 *)0x5c) {
      FUN_00d83c2d();
    }
    if (local_54 <= pvVar3) {
      FUN_00d83c2d();
    }
    FUN_012a2b50(pvVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar4 = local_48;
    LobbyAccount_ensureSingleton();
    FUN_012dedd0(puVar4);
    LobbyAccount_ensureSingleton();
    pvVar2 = LobbyServiceAccountMap_findValue(map,key_);
    if (pvVar2 != (void *)0x0) {
      (**(code **)(*param_1 + 4))(pvVar2,local_4c);
    }
    local_4 = local_4 & 0xffffff00;
    FUN_012a2730();
    if (local_54 <= pvVar3) {
      FUN_00d83c2d();
    }
    pvVar3 = (void *)((int)pvVar3 + 0x38);
  }
  local_4 = 0xffffffff;
  pvVar3 = local_58;
  if (local_58 != (void *)0x0) {
    for (; pvVar3 != local_54; pvVar3 = (void *)((int)pvVar3 + 0x38)) {
      FUN_012a2730();
    }
                    /* WARNING: Subroutine does not return */
    _free(local_58);
  }
  ExceptionList = local_c;
  return;
}

