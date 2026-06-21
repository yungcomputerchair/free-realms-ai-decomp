// addr: 0x00cf46c0
// name: FUN_00cf46c0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00cf46c0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016103ab;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[2];
    param_1[2] = iVar1 + 1;
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x24))(uVar5);
    }
    pvVar6 = Mem_Alloc(0x58);
    uStack_4 = 0;
    if (pvVar6 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      iVar1 = param_1[0x53];
      iVar2 = param_1[0x69];
      iVar3 = param_1[1];
      iVar4 = param_1[0x55];
      iVar7 = FUN_00769710();
      uVar8 = FUN_0078fea0(*(undefined4 *)(iVar7 + 0x28),iVar1,iVar4,iVar3,iVar2);
    }
    uStack_4 = 0xffffffff;
    *param_2 = uVar8;
    piVar9 = (int *)FUN_0078f150();
    (**(code **)(*(int *)*param_2 + 4))(piVar9);
    LOCK();
    iVar1 = piVar9[1] + -1;
    piVar9[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      (**(code **)(*piVar9 + 4))();
    }
  }
  ExceptionList = local_c;
  return;
}

