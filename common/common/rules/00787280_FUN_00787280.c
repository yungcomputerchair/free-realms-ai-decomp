// addr: 0x00787280
// name: FUN_00787280
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00787280(void *param_1)

{
  undefined4 uVar1;
  void *this;
  undefined1 auVar2 [16];
  int iVar3;
  float unaff_EDI;
  undefined1 auVar4 [16];
  undefined1 local_70 [4];
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_20 [16];
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar3 = FUN_00773370();
  if (*(char *)(iVar3 + 0x2c) != '\0') {
    iVar3 = FUN_00773370();
    this = *(void **)(iVar3 + 0x3c);
    if (*(int *)((int)this + 4) != 0) {
      FUN_0076ec90();
      iVar3 = FUN_00773370();
      TransformTrack_sampleRange(this,local_70,(void *)0x0,*(float *)(iVar3 + 0x28),unaff_EDI);
      iVar3 = FUN_00773370();
      uVar1 = *(undefined4 *)(iVar3 + 0x28);
      auVar4._0_4_ = SQRT(_DAT_0175b420 * _DAT_0175b420 + local_64 * local_64 +
                          local_68 * local_68 + local_6c * local_6c);
      auVar4._4_4_ = auVar4._0_4_;
      auVar4._8_4_ = auVar4._0_4_;
      auVar4._12_4_ = auVar4._0_4_;
      auVar2._4_4_ = uVar1;
      auVar2._0_4_ = uVar1;
      auVar2._8_4_ = uVar1;
      auVar2._12_4_ = uVar1;
      local_20 = divps(auVar4,auVar2);
      if (*(int *)((int)param_1 + 0x14) == 0) {
        AnimationController_createRuntimeState(param_1);
      }
      *(undefined4 *)(*(int *)((int)param_1 + 0x14) + 0x58) = local_20._0_4_;
    }
  }
  return;
}

