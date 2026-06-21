// addr: 0x00ca1970
// name: FUN_00ca1970
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ca1970(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  undefined1 auStack_71 [5];
  undefined4 uStack_6c;
  float fStack_68;
  int iStack_64;
  int aiStack_60 [3];
  float afStack_54 [3];
  int iStack_48;
  void *pvStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0160823b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  iVar4 = (**(code **)(*param_2 + 0x30))(DAT_01b839d8 ^ (uint)&stack0xffffff80);
  if (iVar4 == 0) {
    ExceptionList = local_1c;
    return;
  }
  aiStack_60[0] = iVar4;
  FUN_00774330(&uStack_40);
  iVar1 = *(int *)(*(int *)(param_1 + 0x19c) + 0x134);
  iStack_64 = iVar1;
  if (*(char *)(iVar1 + 0x2c8) != '\0') {
    iVar5 = FUN_00fedc30();
    fStack_3c = *(float *)(iVar5 + 0x34) + *(float *)(*(int *)(param_1 + 0x14) + 0x118);
  }
  fStack_3c = fStack_3c + *(float *)(param_1 + 0x110);
  *(undefined4 *)(iVar4 + 0x10) = uStack_40;
  *(float *)(iVar4 + 0x14) = fStack_3c;
  *(undefined4 *)(iVar4 + 0x18) = uStack_38;
  *(undefined4 *)(iVar4 + 0x1c) = uStack_34;
  fStack_68 = *(float *)(iVar1 + 0x2c0) * _DAT_017f17a8;
  aiStack_60[1] = 2;
  piVar6 = (int *)FUN_00a47c50(aiStack_60 + 1);
  if (piVar6 != (int *)0x0) {
    uStack_6c = CONCAT13(*(undefined1 *)(param_1 + 0x4e2),(undefined3)uStack_6c);
    (**(code **)(*piVar6 + 0x34))((int)&uStack_6c + 3);
    (**(code **)(*piVar6 + 0x28))(&uStack_6c);
    if ((piVar6[0x1e] < 1) && (piVar6[0x1e] < 1)) {
      FUN_0096b1d0(0);
    }
    FUN_006f9e60(param_2 + 0x42);
    aiStack_60[0] = *(int *)(uStack_6c + 700);
    (**(code **)(*piVar6 + 0x30))(aiStack_60);
    iStack_64 = *(int *)(param_1 + 0x4cc);
    (**(code **)(*piVar6 + 0x18))(&iStack_64);
  }
  aiStack_60[2] = 3;
  piVar7 = (int *)FUN_00a47c50(aiStack_60 + 2);
  if (piVar7 != (int *)0x0) {
    afStack_54[0] = fStack_68 * DAT_017ea718;
    (**(code **)(*piVar7 + 0x28))(afStack_54);
    aiStack_60[2] = *(undefined4 *)((int)fStack_68 + 700);
    (**(code **)(*piVar7 + 0x30))(aiStack_60 + 2);
    auStack_71[0] = *(undefined1 *)(param_1 + 0x4e2);
    (**(code **)(*piVar7 + 0x34))(auStack_71);
    iStack_48 = *(int *)(param_1 + 0xa8);
    fVar2 = (float)*(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x20) < 0) {
      fVar2 = fVar2 + _DAT_0175db04;
    }
    fVar3 = (float)iStack_48;
    if (iStack_48 < 0) {
      fVar3 = fVar3 + _DAT_0175db04;
    }
    piVar7[0x1d] = (int)(fVar2 / fVar3);
    if (*(char *)(param_1 + 0x1a8) == '\0') {
      if (piVar6 != (int *)0x0) {
        fVar8 = (float10)(**(code **)(*piVar7 + 0x48))();
        fStack_30 = (float)fVar8;
        goto LAB_00ca1be6;
      }
    }
    else if (piVar6 != (int *)0x0) {
      fStack_30 = 0.0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      (**(code **)(*piVar7 + 0x20))(&fStack_30);
      fStack_30 = 0.0;
LAB_00ca1be6:
      uStack_34 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      (**(code **)(*piVar6 + 0x20))(&uStack_34);
    }
  }
  if (((*(byte *)(param_2 + 0x50) & 1) == 0) && (piVar6 != (int *)0x0)) {
    ExceptionList = local_1c;
    return;
  }
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    ExceptionList = local_1c;
    return;
  }
  if (piVar6 == (int *)0x0) {
    afStack_54[0] = 2.8026e-45;
    FUN_00a47cc0(afStack_54);
    pvStack_44 = Mem_Alloc(0x140);
    uStack_14 = 0;
    if (pvStack_44 == (void *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      aiStack_60[2] = DAT_01832eec;
      afStack_54[0] = 0.0;
      fStack_30 = _DAT_01cb53d0;
      uStack_2c = uRam01cb53d4;
      uStack_28 = uRam01cb53d8;
      uStack_24 = uRam01cb53dc;
      iStack_64 = 0;
      afStack_54[1] = -3.0705061e+38;
      afStack_54[2] = 0.0;
      iStack_48 = 2;
      piVar6 = (int *)OverHeadTextElement_ctor
                                (param_2 + 0x42,&iStack_48,afStack_54 + 2,afStack_54 + 1,&iStack_64,
                                 &fStack_30,aiStack_60 + 2,afStack_54,DAT_017ed93c);
    }
    uStack_14 = 0xffffffff;
    if (piVar6 == (int *)0x0) goto LAB_00ca1d23;
    FUN_00a4b190(piVar6);
  }
  else {
    iStack_48 = 0;
    FUN_0096f6a0(&iStack_48,param_2 + 0x42);
  }
  uStack_6c = CONCAT13(*(undefined1 *)(param_1 + 0x4e2),(undefined3)uStack_6c);
  (**(code **)(*piVar6 + 0x34))((int)&uStack_6c + 3);
LAB_00ca1d23:
  FUN_00963d80(0);
  ExceptionList = local_1c;
  return;
}

