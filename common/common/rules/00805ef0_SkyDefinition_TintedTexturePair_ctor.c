// addr: 0x00805ef0
// name: SkyDefinition_TintedTexturePair_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
SkyDefinition_TintedTexturePair_ctor(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  
                    /* Constructs a pair/blend of SkyDefinition::TintedTexture values from two
                       source nodes and stores the blend factor, incrementing referenced texture
                       refcounts. */
  *param_1 = SkyDefinition::TintedTexture::vftable;
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  if (param_1[4] != 0) {
    piVar1 = (int *)(param_1[4] + 4);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0xc] = SkyDefinition::TintedTexture::vftable;
  param_1[0x10] = *(undefined4 *)(param_3 + 0x10);
  param_1[0x14] = *(undefined4 *)(param_3 + 0x20);
  param_1[0x15] = *(undefined4 *)(param_3 + 0x24);
  param_1[0x16] = *(undefined4 *)(param_3 + 0x28);
  param_1[0x17] = *(undefined4 *)(param_3 + 0x2c);
  if (param_1[0x10] != 0) {
    piVar1 = (int *)(param_1[0x10] + 4);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x18] = param_4;
  return;
}

