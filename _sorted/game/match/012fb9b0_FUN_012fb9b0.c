// addr: 0x012fb9b0
// name: FUN_012fb9b0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_012fb9b0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  while( true ) {
    if ((param_2 == 0) || (param_2 != param_4)) {
      FUN_00d83c2d();
    }
    if (param_3 == param_5) break;
    if (param_6 == 0) {
      FUN_00d83c2d();
    }
    if (param_7 == *(int *)(param_6 + 4)) {
      FUN_00d83c2d();
    }
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (param_3 == *(int *)(param_2 + 4)) {
      FUN_00d83c2d();
    }
    if ((*(int *)(param_3 + 0xc) != *(int *)(param_7 + 0xc)) ||
       (*(int *)(param_3 + 0x10) != *(int *)(param_7 + 0x10))) break;
    FUN_004d21f9();
    FUN_004d21f9();
  }
  param_1[3] = param_7;
  param_1[1] = param_3;
  param_1[2] = param_6;
  *param_1 = param_2;
  return;
}

