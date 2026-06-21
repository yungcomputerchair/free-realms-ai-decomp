// addr: 0x01152ac0
// name: FUN_01152ac0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void recalc_shape_local_aabb_from_support(int * shape) */

void __fastcall recalc_shape_local_aabb_from_support(int *shape)

{
  code *pcVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  float local_40 [15];
  
                    /* Recomputes local AABB extents by calling the shape's support function for
                       positive and negative unit axes and applying the margin. Likely Bullet
                       collision-shape support code, but exact class is not evident here. */
  pfVar3 = (float *)(shape + 4);
  iVar4 = 0;
  do {
    pcVar1 = *(code **)(*shape + 0x3c);
    local_40[0] = 0.0;
    local_40[1] = 0.0;
    local_40[2] = 0.0;
    local_40[3] = 0.0;
    *(undefined4 *)((int)local_40 + iVar4) = _DAT_0175b420;
    (*pcVar1)(local_40 + 4,local_40);
    pfVar3[4] = (float)shape[3] + *(float *)((int)local_40 + iVar4 + 8);
    pcVar1 = *(code **)(*shape + 0x3c);
    *(undefined4 *)(&stack0xffffffb8 + iVar4) = DAT_01762a34;
    puVar2 = (undefined4 *)(*pcVar1)(local_40 + 6,&stack0xffffffb8);
    local_40[4] = (float)*puVar2;
    local_40[5] = (float)puVar2[1];
    local_40[6] = (float)puVar2[2];
    local_40[7] = (float)puVar2[3];
    *pfVar3 = *(float *)((int)local_40 + iVar4 + 0x10) - (float)shape[3];
    iVar4 = iVar4 + 4;
    pfVar3 = pfVar3 + 1;
  } while (iVar4 < 0xc);
  return;
}

