// addr: 0x0068bccb
// name: FUN_0068bccb
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0068bccb(int param_1,void *param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  undefined1 local_6 [2];
  
                    /* LIKELY OUT-OF-SUBSYSTEM UI helper: searches child widgets/elements by a short
                       id, recursing via 0068bc0f and maintaining a vector/path. Not common game
                       logic. */
  FUN_00420fb6();
  local_10 = (**(code **)(*(int *)(param_1 + 0xe8) + 0x18))();
  local_c = 0;
  if (0 < local_10) {
    do {
      iVar5 = local_c;
      piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0xe8) + 0x1c))(local_c);
      if (piVar2 != (int *)0x0) {
        psVar3 = (short *)(**(code **)(*piVar2 + 0x74))(local_6);
        if (*psVar3 == (short)param_4) {
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = *piVar2;
        FUN_0064fb0b(local_14,0);
        uVar4 = FUN_004cd10a();
        iVar5 = (**(code **)(iVar5 + 8))(uVar4);
        if (iVar5 != 0) {
          FUN_0042c155(&local_c);
          cVar1 = FUN_0068bc0f(iVar5,param_2,param_3,param_4);
          if (cVar1 != '\0') {
            return 1;
          }
          iVar5 = StdVector_size(param_2);
          if (iVar5 != 0) {
            *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + -4;
          }
        }
      }
      local_c = local_c + 1;
    } while (local_c < local_10);
  }
  *param_3 = -1;
  return 0;
}

