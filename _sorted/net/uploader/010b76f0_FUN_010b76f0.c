// addr: 0x010b76f0
// name: FUN_010b76f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_010b76f0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  void *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164841b;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  if (param_1[0x25] == 0) {
    pvVar5 = Mem_Alloc(0x80);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_1[0x24];
      uVar1 = *(undefined4 *)(iVar6 + 0x1a4);
      uVar2 = *(undefined4 *)(iVar6 + 4);
      uVar3 = *(undefined4 *)(iVar6 + 0x154);
      local_14 = *(void **)(iVar6 + 0x14c);
      iVar6 = FUN_00769710();
      iVar6 = FUN_007bc330(*(undefined4 *)(iVar6 + 0x28),local_14,uVar3,uVar2,uVar1);
    }
    local_4 = 0xffffffff;
    param_1[0x25] = iVar6;
    piVar7 = (int *)FUN_0078f150();
    (**(code **)(*(int *)param_1[0x25] + 4))(piVar7);
    LOCK();
    iVar6 = piVar7[1] + -1;
    piVar7[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      (**(code **)(*piVar7 + 4))();
    }
    (**(code **)(*param_1 + 0x20))(param_1 + 0x14);
    (**(code **)(*(int *)(param_1[0x25] + 0x58) + 0x28))(param_1[0x13]);
  }
  (**(code **)(*(int *)param_1[0x25] + 0x14))(0,uVar4);
  (**(code **)(*param_1 + 0x20))(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x12) = 1;
  ExceptionList = local_14;
  return;
}

