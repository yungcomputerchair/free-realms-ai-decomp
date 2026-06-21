// addr: 0x00808040
// name: Sky_LinearBlendController_TintedTexture_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Sky_LinearBlendController_TintedTexture_dtor(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destroys Sky::LinearBlendController<SkyDefinition::TintedTexture>, releasing
                       three TintedTexture subobjects and their reference-counted resources. */
  puStack_8 = &LAB_01567861;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = Sky::LinearBlendController<SkyDefinition::TintedTexture>::vftable;
  local_4 = 2;
  FUN_00805890(uVar3);
  local_4._0_1_ = 1;
  param_1[0x1c] = SkyDefinition::TintedTexture::vftable;
  piVar1 = (int *)param_1[0x20];
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    param_1[0x20] = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x10] = SkyDefinition::TintedTexture::vftable;
  piVar1 = (int *)param_1[0x14];
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    param_1[0x14] = 0;
  }
  local_4 = 0xffffffff;
  param_1[4] = SkyDefinition::TintedTexture::vftable;
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    param_1[8] = 0;
  }
  ExceptionList = local_c;
  return;
}

