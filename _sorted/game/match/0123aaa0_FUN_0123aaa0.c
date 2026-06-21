// addr: 0x0123aaa0
// name: FUN_0123aaa0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall FUN_0123aaa0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *local_40;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
                    /* Performs a lower_bound lookup in an integer-keyed tree and returns either the
                       matching insertion position or end. It uses helper search results and
                       compares param_3 against node key at +0xc. */
  uVar2 = FUN_0123b020(param_3);
  FUN_0123b090(uVar2,param_1);
  local_14 = *(int *)(param_1 + 4);
  local_18 = 0;
  if (param_1 == 0) {
    FUN_00d83c2d();
  }
  local_18 = param_1;
  if ((local_c == 0) || (local_c != param_1)) {
    FUN_00d83c2d();
  }
  if ((local_8 == local_14) || (*param_3 < *(int *)(local_8 + 0xc))) {
    local_1c = *(undefined4 *)(param_1 + 4);
    local_20 = 0;
    if (param_1 == 0) {
      FUN_00d83c2d();
    }
    local_40 = &local_20;
  }
  else {
    local_40 = &local_c;
  }
  iVar1 = local_40[1];
  *param_2 = *local_40;
  param_2[1] = iVar1;
  return param_2;
}

