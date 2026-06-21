// addr: 0x00d39900
// name: FUN_00d39900
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: bool unknown_worldPointInGridBounds(void * gridOwner, float * position) */

bool __thiscall unknown_worldPointInGridBounds(void *this,void *gridOwner,float *position)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
                    /* Converts a world position into grid-cell coordinates and tests whether it
                       lies inside the configured grid rectangle. */
  fVar5 = _DAT_0175b420 / *(float *)((int)this + 0xc4df8);
  uVar1 = (uint)(*(float *)((int)gridOwner + 8) * fVar5);
  uVar3 = (uint)(*(float *)gridOwner * fVar5);
  iVar2 = uVar1 - uVar1 % *(uint *)((int)this + 0xc4df4);
  iVar4 = uVar3 - uVar3 % *(uint *)((int)this + 0xc4df4);
  if ((((*(int *)((int)this + 0xc4e00) <= iVar2) &&
       (iVar2 < *(int *)((int)this + 0xc4e08) + *(int *)((int)this + 0xc4e00))) &&
      (*(int *)((int)this + 0xc4e04) <= iVar4)) &&
     (iVar4 < *(int *)((int)this + 0xc4e0c) + *(int *)((int)this + 0xc4e04))) {
    return true;
  }
  return false;
}

