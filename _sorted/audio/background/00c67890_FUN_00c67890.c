// addr: 0x00c67890
// name: FUN_00c67890
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00c67890(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_015ffbdb;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00769710();
  FUN_007699f0();
  iVar3 = FUN_00709a70();
  *(undefined4 *)(param_1 + 0xc) = _DAT_0175b420;
  if (iVar3 != 0) {
    pvVar4 = Mem_Alloc(0x58);
    local_14 = 0;
    if (pvVar4 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(iVar3 + 4);
      uVar1 = *(undefined4 *)(iVar3 + 0x154);
      uVar2 = *(undefined4 *)(iVar3 + 0x14c);
      iVar5 = FUN_00769710();
      uVar6 = FUN_0078fea0(*(undefined4 *)(iVar5 + 0x28),uVar2,uVar1,uVar6);
    }
    local_14 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    piVar7 = (int *)FUN_0078f150();
    (**(code **)(**(int **)(param_1 + 0x10) + 4))();
    LOCK();
    iVar5 = piVar7[1] + -1;
    piVar7[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      (**(code **)(*piVar7 + 4))();
    }
    if (-1 < *(int *)(param_1 + 4)) {
      piVar7 = (int *)FUN_008b80a0();
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x48))();
        fStack_34 = *(float *)(iVar3 + 0x80) + fStack_34;
        fStack_30 = *(float *)(iVar3 + 0x84) + fStack_30;
        fStack_2c = *(float *)(iVar3 + 0x88) + fStack_2c;
        fStack_28 = *(float *)(iVar3 + 0x8c) + fStack_28;
        (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0x40) + 0x10))(&fStack_34);
      }
    }
  }
  ExceptionList = local_1c;
  return;
}

