// addr: 0x008069d0
// name: FUN_008069d0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_008069d0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
                    /* Constructs a record containing two SkyDefinition::TintedTexture subobjects,
                       addrefing each referenced texture pointer and copying a trailing field at
                       0x60. Final class name is not explicit in ctx, so left unnamed. */
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
  param_1[0x10] = *(undefined4 *)(param_2 + 0x40);
  param_1[0x14] = *(undefined4 *)(param_2 + 0x50);
  param_1[0x15] = *(undefined4 *)(param_2 + 0x54);
  param_1[0x16] = *(undefined4 *)(param_2 + 0x58);
  param_1[0x17] = *(undefined4 *)(param_2 + 0x5c);
  if (param_1[0x10] != 0) {
    piVar1 = (int *)(param_1[0x10] + 4);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x18] = *(undefined4 *)(param_2 + 0x60);
  return;
}

