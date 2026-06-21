// addr: 0x01411750
// name: RuleMatcher_collectMatchingActions
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
RuleMatcher_collectMatchingActions
          (int param_1,undefined4 param_2,undefined4 param_3,void *param_4,void *param_5,
          undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  bool bVar7;
  int *piVar8;
  void **unaff_EDI;
  int local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_4;
  
                    /* Tests candidate actions against event, phase, and integer filters and pushes
                       matching ones into a vector. */
  local_4 = *(undefined4 **)(param_1 + 8);
  local_c = (undefined4 *)*local_4;
  local_10 = param_1 + 4;
  while( true ) {
    puVar5 = local_c;
    iVar4 = local_10;
    if ((local_10 == 0) || (local_10 != param_1 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar5 == local_4) break;
    if (iVar4 == 0) {
      FUN_00d83c2d();
    }
    if (puVar5 == *(undefined4 **)(iVar4 + 4)) {
      FUN_00d83c2d();
    }
    uVar1 = puVar5[3];
    if (puVar5 == *(undefined4 **)(iVar4 + 4)) {
      FUN_00d83c2d();
    }
    uVar2 = puVar5[4];
    cVar6 = RuleMatcher_matchEventId(param_6,uVar1,param_3);
    if ((cVar6 != '\0') && (cVar6 = RuleMatcher_matchPhaseId(param_6,uVar2,param_2), cVar6 != '\0'))
    {
      piVar3 = (int *)puVar5[7];
      if (piVar3 < (int *)puVar5[6]) {
        FUN_00d83c2d();
      }
      piVar8 = (int *)puVar5[6];
      if ((int *)puVar5[7] < piVar8) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (puVar5 == (undefined4 *)0xffffffec) {
          FUN_00d83c2d();
        }
        if (piVar8 == piVar3) break;
        if (puVar5 == (undefined4 *)0xffffffec) {
          FUN_00d83c2d();
        }
        if ((int *)puVar5[7] <= piVar8) {
          FUN_00d83c2d();
        }
        local_14 = *piVar8;
        if ((local_14 != 0) && (bVar7 = IntVector_contains(local_14,param_5), bVar7)) {
          PointerVector_pushBack(param_4,&local_14,unaff_EDI);
        }
        if ((int *)puVar5[7] <= piVar8) {
          FUN_00d83c2d();
        }
        piVar8 = piVar8 + 3;
      }
    }
    FUN_0134f4a0();
  }
  return 1;
}

