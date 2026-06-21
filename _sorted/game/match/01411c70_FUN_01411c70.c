// addr: 0x01411c70
// name: FUN_01411c70
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
FUN_01411c70(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined1 local_8 [4];
  int *local_4;
  
                    /* Removes a matching 3-field record from a nested vector inside a tree node
                       keyed by param_2/param_3. If the nested vector becomes empty, it erases the
                       containing tree node; returns whether removal occurred. */
  local_4 = *(int **)(param_1 + 8);
  iVar1 = param_1 + 4;
  piVar3 = (int *)*local_4;
  while( true ) {
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (piVar3 == local_4) break;
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (piVar3 == (int *)*(int *)(param_1 + 8)) {
      FUN_00d83c2d();
    }
    if (piVar3[3] == param_2) {
      if (piVar3 == (int *)*(int *)(param_1 + 8)) {
        FUN_00d83c2d();
      }
      if (piVar3[4] == param_3) {
        if (piVar3 == (int *)*(int *)(param_1 + 8)) {
          FUN_00d83c2d();
        }
        piVar5 = (int *)piVar3[6];
        iVar2 = (int)(piVar3 + 5);
        if ((int *)piVar3[7] < piVar5) {
          FUN_00d83c2d();
        }
        while( true ) {
          if (piVar3 == (int *)*(int *)(param_1 + 8)) {
            FUN_00d83c2d();
          }
          piVar4 = (int *)piVar3[7];
          if (piVar4 < (int *)piVar3[6]) {
            FUN_00d83c2d();
          }
          if (iVar2 == 0) {
            FUN_00d83c2d();
          }
          if (piVar5 == piVar4) break;
          if (iVar2 == 0) {
            FUN_00d83c2d();
          }
          if ((int *)piVar3[7] <= piVar5) {
            FUN_00d83c2d();
          }
          if (piVar5[1] == param_5) {
            if ((int *)piVar3[7] <= piVar5) {
              FUN_00d83c2d();
            }
            if (*piVar5 == param_4) {
              if ((int *)piVar3[7] <= piVar5) {
                FUN_00d83c2d();
              }
              if (piVar5[2] == param_6) {
                if (piVar3 == (int *)*(int *)(param_1 + 8)) {
                  FUN_00d83c2d();
                }
                FUN_01411700(local_8,iVar2,piVar5);
                if (piVar3 == (int *)*(int *)(param_1 + 8)) {
                  FUN_00d83c2d();
                }
                if ((piVar3[6] == 0) || ((piVar3[7] - piVar3[6]) / 0xc == 0)) {
                  FUN_01411990(local_8,iVar1,piVar3);
                }
                return 1;
              }
            }
          }
          if ((int *)piVar3[7] <= piVar5) {
            FUN_00d83c2d();
          }
          piVar5 = piVar5 + 3;
        }
      }
    }
    FUN_0134f4a0();
  }
  return 0;
}

