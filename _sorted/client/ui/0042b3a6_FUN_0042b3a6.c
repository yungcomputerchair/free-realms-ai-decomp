// addr: 0x0042b3a6
// name: FUN_0042b3a6
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_0042b3a6(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  byte local_7;
  char local_6;
  char local_5;
  
                    /* Computes a two-int layout/size result for a wrapped object, using cached
                       override fields at +0x4c/+0x50 according to layout flag bits in this+0x10.
                       Exact UI layout class is unknown. */
  iVar2 = FUN_0042b2c9();
  if (iVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 & 0x110000) == 0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x194))(param_2,param_3,0,0);
    }
    else {
      if ((uVar1 & 0xff0000) == 0x110000) {
        local_c = *(undefined4 *)(param_1 + 0x50);
        *param_2 = *(undefined4 *)(param_1 + 0x4c);
      }
      else {
        local_7 = (byte)(uVar1 >> 0x10) & 1;
        if (((uVar1 & 0x800000) == 0) || (local_5 = '\x01', param_3 == 2)) {
          local_5 = '\0';
        }
        if (((uVar1 & 0x80000) == 0) || (local_6 = '\x01', param_3 == 2)) {
          local_6 = '\0';
        }
        (**(code **)(**(int **)(param_1 + 0x44) + 0x194))(&local_10,param_3,0,0);
        if (((uVar1 >> 0x14 & 1) != 0) && (local_5 == '\0')) {
          local_c = *(undefined4 *)(param_1 + 0x50);
        }
        if ((local_7 != 0) && (local_6 == '\0')) {
          local_10 = *(undefined4 *)(param_1 + 0x4c);
        }
        *param_2 = local_10;
      }
      param_2[1] = local_c;
    }
  }
  return param_2;
}

