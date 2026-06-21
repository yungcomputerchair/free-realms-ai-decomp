// addr: 0x01411880
// name: FUN_01411880
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
FUN_01411880(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  char cVar6;
  int *piVar7;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  piVar1 = *(int **)(param_1 + 8);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (param_1 == -4) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (param_1 == -4) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(param_1 + 8)) {
      FUN_00d83c2d();
    }
    uVar3 = piVar2[3];
    if (piVar2 == (int *)*(int *)(param_1 + 8)) {
      FUN_00d83c2d();
    }
    uVar4 = piVar2[4];
    cVar6 = RuleMatcher_matchEventId(param_6,uVar3,param_4);
    if ((cVar6 != '\0') && (cVar6 = RuleMatcher_matchPhaseId(param_6,uVar4,param_3), cVar6 != '\0'))
    {
      piVar5 = (int *)piVar2[7];
      if (piVar5 < (int *)piVar2[6]) {
        FUN_00d83c2d();
      }
      piVar7 = (int *)piVar2[6];
      if ((int *)piVar2[7] < piVar7) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (piVar2 == (int *)0xffffffec) {
          FUN_00d83c2d();
        }
        if (piVar7 == piVar5) break;
        if (piVar2 == (int *)0xffffffec) {
          FUN_00d83c2d();
        }
        if ((int *)piVar2[7] <= piVar7) {
          FUN_00d83c2d();
        }
        if (*piVar7 != 0) {
          if ((int *)piVar2[7] <= piVar7) {
            FUN_00d83c2d();
          }
          FUN_01336520(piVar7);
        }
        if ((int *)piVar2[7] <= piVar7) {
          FUN_00d83c2d();
        }
        piVar7 = piVar7 + 3;
      }
    }
    FUN_0134f4a0();
  }
  return 1;
}

