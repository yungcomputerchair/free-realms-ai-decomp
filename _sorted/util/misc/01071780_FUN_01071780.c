// addr: 0x01071780
// name: FUN_01071780
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall FUN_01071780(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  int iStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
                    /* Applies animation keyframes to a target object when its id matches,
                       optionally smoothing timestamps for looped animation data. No class evidence,
                       so left unnamed. */
  uVar4 = 0;
  if ((int *)*param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)*param_2 + 4))();
  }
  if (iVar2 == *(int *)(param_1 + 0xc)) {
    uVar4 = 1;
    if ((int *)*param_2 != (int *)0x0) {
      (**(code **)(*(int *)*param_2 + 8))();
    }
    param_2[3] = 0;
    if (*(char *)(param_1 + 9) != '\0') {
      fVar7 = 0.0;
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        iStack_28 = 0;
        do {
          puVar6 = (undefined4 *)(*(int *)(param_1 + 0x14) + iStack_28);
          fStack_24 = (float)puVar6[4];
          if (0 < iVar2) {
            fStack_24 = (fStack_24 + fVar7) * DAT_017649d4;
          }
          uStack_20 = *puVar6;
          uStack_1c = puVar6[1];
          uStack_18 = puVar6[2];
          uStack_14 = puVar6[3];
          FUN_00aed060(0xffffffff,fStack_24,&uStack_20);
          iStack_28 = iStack_28 + 0x14;
          fVar7 = (float)puVar6[4];
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x18));
      }
      return 1;
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x14);
        uStack_20 = *(undefined4 *)(iVar1 + iVar5);
        iVar3 = iVar1 + iVar5;
        uStack_1c = *(undefined4 *)(iVar3 + 4);
        uStack_18 = *(undefined4 *)(iVar3 + 8);
        uStack_14 = *(undefined4 *)(iVar3 + 0xc);
        FUN_00aed060(iVar2,*(undefined4 *)(iVar1 + 0x10 + iVar5),&uStack_20);
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x14;
      } while (iVar2 < *(int *)(param_1 + 0x18));
      return 1;
    }
  }
  return uVar4;
}

