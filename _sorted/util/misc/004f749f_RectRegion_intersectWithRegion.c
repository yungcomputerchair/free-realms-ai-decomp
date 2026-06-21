// addr: 0x004f749f
// name: RectRegion_intersectWithRegion
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int RectRegion_intersectWithRegion(void * this, void * otherRegion, int
   opContext_) */

int __thiscall RectRegion_intersectWithRegion(void *this,void *otherRegion,int opContext_)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* Computes the intersection between two rectangle-region-like objects. Evidence
                       is the structure fields for count/pointer and bounding rectangle at
                       +0xc..+0x18; single-rect fast path computes max left/top and min
                       right/bottom, otherwise dispatches a region operation callback. */
  if ((((*(int *)((int)this + 4) == 0) || (*(int *)((int)otherRegion + 4) == 0)) ||
      (*(int *)((int)this + 0x14) <= *(int *)((int)otherRegion + 0xc))) ||
     (((*(int *)((int)otherRegion + 0x14) <= *(int *)((int)this + 0xc) ||
       (*(int *)((int)this + 0x18) <= *(int *)((int)otherRegion + 0x10))) ||
      (*(int *)((int)otherRegion + 0x18) <= *(int *)((int)this + 0x10))))) {
    FUN_004ca065(0);
  }
  else if ((*(int *)((int)otherRegion + 4) == 1) && (*(int *)((int)this + 4) == 1)) {
    iVar1 = *(int *)((int)otherRegion + 0xc);
    iVar2 = *(int *)((int)otherRegion + 0x10);
    local_c = *(int *)((int)this + 0x14) + -1;
    local_8 = *(int *)((int)this + 0x18) + -1;
    iVar4 = *(int *)((int)otherRegion + 0x14) + -1;
    iVar3 = *(int *)((int)otherRegion + 0x18) + -1;
    if ((((local_8 < iVar2) || (iVar3 < *(int *)((int)this + 0x10))) ||
        (local_14 = *(int *)((int)this + 0xc), iVar4 < local_14)) || (local_c < iVar1)) {
      local_14 = 0;
      local_10 = 0;
      local_c = -1;
      local_8 = -1;
    }
    else {
      if (local_14 <= iVar1) {
        local_14 = iVar1;
      }
      if (iVar4 < local_c) {
        local_c = iVar4;
      }
      local_10 = *(int *)((int)this + 0x10);
      if (*(int *)((int)this + 0x10) <= iVar2) {
        local_10 = iVar2;
      }
      if (iVar3 < local_8) {
        local_8 = iVar3;
      }
    }
    FUN_004c9f80(&local_14);
  }
  else {
    FUN_004e7df8(this,this,otherRegion,opContext_,FUN_004dc1a1,0,0);
    FUN_004ca0e1();
  }
  return (int)this;
}

