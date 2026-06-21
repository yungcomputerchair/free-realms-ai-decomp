// addr: 0x00807380
// name: SkyDefinition_TintedTexturePair_dtor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall SkyDefinition_TintedTexturePair_dtor(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys the two TintedTexture members in a blended texture pair,
                       decrementing refcounts and releasing referenced objects at zero. */
  puStack_8 = &LAB_01567583;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  param_1[0xc] = SkyDefinition::TintedTexture::vftable;
  piVar1 = (int *)param_1[0x10];
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_1[0x10] = 0;
  }
  local_4 = 0xffffffff;
  *param_1 = SkyDefinition::TintedTexture::vftable;
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    param_1[4] = 0;
  }
  ExceptionList = local_c;
  return;
}

