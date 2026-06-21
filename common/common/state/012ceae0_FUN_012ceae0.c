// addr: 0x012ceae0
// name: FUN_012ceae0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_012ceae0(int param_1,void *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  void *value;
  void *pvVar7;
  void *map;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic game/lobby/deserialization helper with insufficient direct naming
                       evidence; behavior is broader than a specific state method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166fb18;
  local_c = ExceptionList;
  value = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  pvVar7 = (void *)FUN_012d0920();
  if (pvVar7 != (void *)0x0) {
    LobbyAccount_ensureSingleton();
    local_18 = (int *)0x0;
    local_14 = (int *)0x0;
    local_10 = 0;
    local_4 = 0;
    PropertyAggregate_collectChildValues(pvVar7,local_1c);
    piVar1 = *(int **)(param_1 + 0x34);
    piVar2 = (int *)*piVar1;
    while( true ) {
      if (param_1 == -0x30) {
        FUN_00d83c2d();
      }
      if (piVar2 == piVar1) break;
      bVar4 = true;
      if (param_1 == -0x30) {
        FUN_00d83c2d();
      }
      if (piVar2 == (int *)*(int *)(param_1 + 0x34)) {
        FUN_00d83c2d();
      }
      piVar3 = (int *)piVar2[7];
      if (piVar3 < (int *)piVar2[6]) {
        FUN_00d83c2d();
      }
      if (piVar2 == (int *)*(int *)(param_1 + 0x34)) {
        FUN_00d83c2d();
      }
      piVar9 = (int *)piVar2[6];
      if ((int *)piVar2[7] < piVar9) {
        FUN_00d83c2d();
      }
      for (; (piVar9 != piVar3 && (*piVar9 != param_3)); piVar9 = piVar9 + 1) {
      }
      if (piVar2 == (int *)*(int *)(param_1 + 0x34)) {
        FUN_00d83c2d();
      }
      piVar3 = (int *)piVar2[7];
      if (piVar3 < (int *)piVar2[6]) {
        FUN_00d83c2d();
      }
      if (piVar2 == (int *)0xffffffec) {
        FUN_00d83c2d();
      }
      if (piVar9 != piVar3) {
        if (piVar2 == (int *)*(int *)(param_1 + 0x34)) {
          FUN_00d83c2d();
        }
        piVar3 = (int *)piVar2[7];
        if (piVar3 < (int *)piVar2[6]) {
          FUN_00d83c2d();
        }
        if (piVar2 == (int *)*(int *)(param_1 + 0x34)) {
          FUN_00d83c2d();
        }
        piVar9 = (int *)piVar2[6];
        if ((int *)piVar2[7] < piVar9) {
          FUN_00d83c2d();
        }
        while( true ) {
          if (piVar2 == (int *)0xffffffec) {
            FUN_00d83c2d();
          }
          if (piVar9 == piVar3) break;
          if (piVar2 == (int *)0xffffffec) {
            FUN_00d83c2d();
          }
          if ((int *)piVar2[7] <= piVar9) {
            FUN_00d83c2d();
          }
          if (-1000 < *piVar9) {
            if ((int *)piVar2[7] <= piVar9) {
              FUN_00d83c2d();
            }
            piVar5 = local_14;
            if (local_14 < local_18) {
              FUN_00d83c2d();
            }
            piVar10 = local_18;
            if (local_14 < local_18) {
              FUN_00d83c2d();
            }
            piVar6 = local_14;
            if (piVar10 != piVar5) {
              do {
                if (*piVar10 == *piVar9) break;
                piVar10 = piVar10 + 1;
              } while (piVar10 != piVar5);
            }
            if (local_14 < local_18) {
              FUN_00d83c2d();
            }
            if (&stack0x00000000 == (undefined1 *)0x1c) {
              FUN_00d83c2d();
            }
            if (piVar10 == piVar6) {
LAB_012ced26:
              bVar4 = false;
            }
            else if (bVar4) {
              if ((int *)piVar2[7] <= piVar9) {
                FUN_00d83c2d();
              }
              pvVar7 = LobbyServiceAccountMap_findValue(map,*piVar9);
              if ((pvVar7 == (void *)0x0) ||
                 ((iVar8 = FUN_013a37a0(), iVar8 != 2 && (iVar8 = FUN_013a37a0(), iVar8 != 3))))
              goto LAB_012ced26;
            }
          }
          if ((int *)piVar2[7] <= piVar9) {
            FUN_00d83c2d();
          }
          piVar9 = piVar9 + 1;
        }
        if (bVar4) {
          if (piVar2 == (int *)*(int *)(param_1 + 0x34)) {
            FUN_00d83c2d();
          }
          StdRbTree_insertValueMaybeRebalance(param_2,piVar2 + 3,value);
        }
      }
      FUN_012cb480();
    }
    local_4 = 0xffffffff;
    if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return;
}

