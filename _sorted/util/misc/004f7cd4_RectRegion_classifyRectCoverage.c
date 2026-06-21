// addr: 0x004f7cd4
// name: RectRegion_classifyRectCoverage
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char RectRegion_classifyRectCoverage(void * this, int * rect) */

char __thiscall RectRegion_classifyRectCoverage(void *this,int *rect)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_c;
  char local_5;
  
                    /* Classifies whether a rectangle intersects or is covered by a
                       rectangle-region-like object. It checks the region bounds and iterates
                       16-byte rectangle bands, returning 0/1/2 style status depending on
                       coverage/intersection. */
  iVar2 = *rect;
  local_c = rect[1];
  iVar3 = *(int *)((int)this + 4);
  iVar8 = rect[2] + 1;
  iVar7 = rect[3] + 1;
  if ((((iVar3 != 0) && (iVar2 < *(int *)((int)this + 0x14))) && (*(int *)((int)this + 0xc) < iVar8)
      ) && ((local_c < *(int *)((int)this + 0x18) && (*(int *)((int)this + 0x10) < iVar7)))) {
    if (iVar3 == 1) {
      if (((iVar2 < *(int *)((int)this + 0xc)) || (*(int *)((int)this + 0x14) < iVar8)) ||
         ((local_c < *(int *)((int)this + 0x10) ||
          (bVar4 = true, *(int *)((int)this + 0x18) < iVar7)))) {
        bVar4 = false;
      }
      return !bVar4 + '\x01';
    }
    local_5 = '\0';
    bVar4 = false;
    piVar5 = (int *)FUN_004efbf6(*(int *)((int)this + 8),iVar3 * 0x10 + *(int *)((int)this + 8),
                                 &local_c,&LAB_004ca383);
    piVar6 = (int *)(*(int *)((int)this + 4) * 0x10 + *(int *)((int)this + 8));
    if (piVar5 < piVar6) {
      piVar5 = piVar5 + 1;
      do {
        if (local_c < piVar5[2]) {
          iVar3 = *piVar5;
          if (local_c < iVar3) {
            local_5 = '\x01';
            if (bVar4) goto LAB_004f7de9;
            local_c = iVar3;
            if (iVar7 <= iVar3) {
              return '\0';
            }
          }
          if (iVar2 < piVar5[1]) {
            if (((iVar2 < piVar5[-1]) && (local_5 = '\x01', bVar4)) ||
               ((piVar5[-1] < iVar8 && (bVar4 = true, local_5 != '\0')))) goto LAB_004f7de9;
            if ((piVar5[1] < iVar8) || (local_c = piVar5[2], iVar7 <= local_c)) break;
          }
        }
        piVar1 = piVar5 + 3;
        piVar5 = piVar5 + 4;
      } while (piVar1 < piVar6);
      if (bVar4) {
LAB_004f7de9:
        return (local_c < iVar7) + '\x01';
      }
    }
  }
  return '\0';
}

