// addr: 0x00d01720
// name: FUN_00d01720
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00d01720(int param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  piVar3 = param_3;
  puVar1 = *(uint **)(param_1 + 0x218 + (*param_3 * 0x10dcd & 0x7fU) * 4);
  do {
    if (puVar1 == (uint *)0x0) {
LAB_00d0174b:
      if (*(int *)(param_1 + 0x208) < 0x80) {
        iVar2 = GlyphTextureCache_createBitmapPage(param_2);
        if (iVar2 != 0) {
          param_3 = (int *)(*piVar3 * 0x10dcd);
          piVar3 = (int *)FUN_00d015a0(&param_3);
          if (piVar3 != (int *)0x0) {
            *(int *)(param_1 + 8 + *(int *)(param_1 + 0x208) * 4) = iVar2;
            *piVar3 = *(int *)(param_1 + 0x208) + 0xe000;
            *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
            return 1;
          }
        }
      }
      return 0;
    }
    if (*puVar1 == *param_3 * 0x10dcd) {
      if (puVar1 + 1 != (uint *)0x0) {
        return CONCAT31((int3)((uint)(puVar1 + 1) >> 8),1);
      }
      goto LAB_00d0174b;
    }
    puVar1 = (uint *)puVar1[2];
  } while( true );
}

