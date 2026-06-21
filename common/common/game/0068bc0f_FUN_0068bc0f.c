// addr: 0x0068bc0f
// name: FUN_0068bc0f
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_0068bc0f(int param_1,void *param_2,int *param_3,undefined4 param_4)

{
  void *this;
  char cVar1;
  int *piVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
                    /* LIKELY OUT-OF-SUBSYSTEM UI helper: recursively walks a child collection,
                       compares each child's short/id value to the requested id, and returns the
                       matching child index. It appears unrelated to common game logic. */
  piVar6 = (int *)(param_1 + 0x70);
  local_c = (**(code **)(*piVar6 + 0x18))();
  local_8 = 0;
  if (0 < local_c) {
    do {
      iVar5 = local_8;
      piVar2 = (int *)(**(code **)(*piVar6 + 0x1c))(local_8);
      if (piVar2 != (int *)0x0) {
        psVar3 = (short *)(**(code **)(*piVar2 + 0x74))((int)&param_1 + 2);
        if (*psVar3 == (short)param_4) {
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = *piVar2;
        FUN_0064fb0b(local_10,0);
        uVar4 = FUN_004cd10a();
        iVar5 = (**(code **)(iVar5 + 8))(uVar4);
        this = param_2;
        if (iVar5 != 0) {
          FUN_0042c155(&local_8);
          cVar1 = FUN_0068bc0f(iVar5,this,param_3,param_4);
          if (cVar1 != '\0') {
            return 1;
          }
          iVar5 = StdVector_size(this);
          if (iVar5 != 0) {
            *(int *)((int)this + 8) = *(int *)((int)this + 8) + -4;
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_c);
  }
  return 0;
}

