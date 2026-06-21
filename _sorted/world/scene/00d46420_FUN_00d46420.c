// addr: 0x00d46420
// name: FUN_00d46420
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00d46420(int param_1)

{
  float fVar1;
  undefined1 auVar2 [12];
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  void *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_016159e1;
  local_1c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff90;
  ExceptionList = &local_1c;
  if (*(char *)(param_1 + 0x498) == '\0') {
    iVar9 = *(int *)(param_1 + 0x43c);
    if (iVar9 != 0) {
      local_30 = DAT_017ed9d0;
      uStack_2c = DAT_017ed9d0;
      uStack_28 = DAT_017ed9d0;
      uStack_24 = DAT_017ed9d0;
      do {
        pvVar4 = Mem_Alloc(0x1c);
        local_14 = 0;
        local_34 = pvVar4;
        if (pvVar4 == (void *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          pvVar5 = Mem_Alloc(0x40);
          local_14._0_1_ = 1;
          if (pvVar5 == (void *)0x0) {
            pvVar5 = (void *)0x0;
          }
          else {
            pvVar5 = Deep_VisibilitySphereObject_ctor(pvVar5);
          }
          local_14 = (uint)local_14._1_3_ << 8;
          piVar6 = Deep_VisibilityRegion_ctorFromRegion(pvVar4,pvVar5,0);
        }
        local_14 = 0xffffffff;
        pvVar4 = Mem_Alloc(0xb0);
        local_14 = 2;
        if (pvVar4 == (void *)0x0) {
          uVar8 = 0;
        }
        else {
          iVar7 = FUN_00769710(uVar3);
          uVar8 = FUN_010b3880(*(undefined4 *)(iVar7 + 0x30),piVar6);
        }
        local_14 = 0xffffffff;
        *(undefined4 *)(iVar9 + 0x4c) = uVar8;
        if (piVar6 != (int *)0x0) {
          LOCK();
          iVar7 = piVar6[1] + -1;
          piVar6[1] = iVar7;
          UNLOCK();
          if (iVar7 == 0) {
            (**(code **)(*piVar6 + 4))();
          }
        }
        FUN_00d44d20(iVar9 + 0x30);
        FUN_007d1090(*(undefined4 *)(iVar9 + 0x40));
        iVar7 = *(int *)(iVar9 + 0x48);
        auVar2._4_8_ = uStack_48;
        auVar2._0_4_ = (float)(iVar7 >> 0x10 & 0xff);
        auStack_50 = (undefined1  [8])(auVar2._0_8_ << 0x20);
        uStack_48._0_4_ = (float)(iVar7 >> 0x18 & 0xff);
        uStack_48._4_4_ = DAT_017ed9d0;
        auStack_50._0_4_ = (float)(iVar7 >> 8 & 0xff);
        auVar10._4_4_ = uStack_2c;
        auVar10._0_4_ = local_30;
        auVar10._8_4_ = uStack_28;
        auVar10._12_4_ = uStack_24;
        auVar10 = divps(_auStack_50,auVar10);
        fVar1 = *(float *)(iVar9 + 0x44);
        auStack_50._4_4_ = fVar1 * auVar10._4_4_;
        auStack_50._0_4_ = fVar1 * auVar10._0_4_;
        uStack_48._0_4_ = fVar1 * auVar10._8_4_;
        uStack_48._4_4_ = fVar1 * auVar10._12_4_;
        for (piVar6 = *(int **)(*(int *)(*(int *)(iVar9 + 0x4c) + 0x14) + 0x1c);
            piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
          if (*piVar6 == 0x6d794679) {
            if (piVar6 != (int *)0xfffffffc) {
              *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x4c) + 0x1c) + 0x6c) = 0xfffffffe;
            }
            break;
          }
        }
        FUN_007d0040(auStack_50);
        (**(code **)(**(int **)(iVar9 + 0x4c) + 0x28))(*(undefined4 *)(param_1 + 0x4c0));
        iVar9 = *(int *)(iVar9 + 0x60);
      } while (iVar9 != 0);
    }
    *(undefined1 *)(param_1 + 0x498) = 1;
  }
  ExceptionList = local_1c;
  return;
}

