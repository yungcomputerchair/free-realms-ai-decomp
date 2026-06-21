// addr: 0x01232030
// name: FUN_01232030
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01232030(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
                    /* Searches a string-keyed container for the first entry whose string compares
                       at or after the query string, returning a checked iterator pair. The code
                       lower-bounds then compares small-string optimized node data with the query.
                        */
  iVar1 = FUN_01231ba0(param_3);
  local_c = iVar1;
  if (param_1 == 0) {
    FUN_00d83c2d();
  }
  local_10 = param_1;
  if (iVar1 != *(int *)(param_1 + 4)) {
    if (*(uint *)(iVar1 + 0x24) < 0x10) {
      iVar3 = iVar1 + 0x10;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x10);
    }
    iVar1 = FUN_00f942a0(0,*(undefined4 *)(param_3 + 0x14),iVar3,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar1) {
      piVar2 = &local_10;
      goto LAB_01232093;
    }
  }
  local_4 = *(undefined4 *)(param_1 + 4);
  local_8 = param_1;
  piVar2 = &local_8;
LAB_01232093:
  iVar1 = piVar2[1];
  *param_2 = *piVar2;
  param_2[1] = iVar1;
  return;
}

