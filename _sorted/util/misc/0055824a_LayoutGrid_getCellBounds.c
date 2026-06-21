// addr: 0x0055824a
// name: LayoutGrid_getCellBounds
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint LayoutGrid_getCellBounds(void * this, int cellIndex_, void * outBounds)
    */

uint __thiscall LayoutGrid_getCellBounds(void *this,int cellIndex_,void *outBounds)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint in_EAX;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  void *local_c;
  void *pvStack_8;
  
                    /* Computes effective bounds for a layout grid cell/child. It resolves an
                       optional resource handle, clamps to parent bounds, and fills output fields at
                       +0x14..+0x20 based on the selected side/corner case. */
  pvVar3 = outBounds;
  if ((*(uint *)((int)outBounds + 0xc) & 0x20000) != 0) {
    return in_EAX & 0xffffff00;
  }
  iVar8 = cellIndex_ * 0x24;
  iVar5 = iVar8 + 4 + *(int *)((int)this + 4);
  if ((*(short *)(iVar5 + 0xc) != 0) || (*(int *)(iVar5 + 8) != 0)) {
    puVar1 = (undefined4 *)(iVar8 + 0x14 + *(int *)((int)this + 4));
    pvVar2 = (void *)puVar1[2];
    uVar6 = puVar1[3];
    uVar7 = puVar1[1];
    *(undefined4 *)((int)outBounds + 0x14) = *puVar1;
    *(undefined4 *)((int)outBounds + 0x20) = uVar6;
    *(undefined4 *)((int)outBounds + 0x18) = uVar7;
    *(void **)((int)outBounds + 0x1c) = pvVar2;
    iVar5 = *(int *)((int)this + 4);
    iVar9 = 0;
    local_c = this;
    pvStack_8 = this;
    if (*(short *)(iVar8 + 0x10 + iVar5) == 0) {
      piVar4 = *(int **)(iVar8 + 0xc + iVar5);
      outBounds = pvVar2;
    }
    else {
      cellIndex_ = (int)*(ushort *)(iVar8 + 0x10 + iVar5);
      outBounds = (void *)0x0;
      (**(code **)(**(int **)this + 0x18))(cellIndex_,*(int **)this,&outBounds);
      piVar4 = outBounds;
    }
    *(int **)((int)pvVar3 + 4) = piVar4;
    if (piVar4 == (int *)0x0) goto LAB_00558327;
    if ((*(int *)((int)pvVar3 + 0x14) <= *(int *)((int)pvVar3 + 0x1c)) &&
       (iVar5 = *(int *)((int)pvVar3 + 0x18), iVar5 <= *(int *)((int)pvVar3 + 0x20)))
    goto switchD_00558349_default;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x154))(&local_c);
    iVar8 = piVar4[1];
    iVar5 = *piVar4;
    *(undefined4 *)((int)pvVar3 + 0x14) = 0;
    *(int *)((int)pvVar3 + 0x20) = iVar8 + -1;
    goto LAB_005583e2;
  }
  if ((*(int *)((int)this + 8) == 0) && ((*(uint *)((int)outBounds + 0xc) & 0x210000) == 0)) {
    *(undefined4 *)((int)outBounds + 4) = 0;
LAB_00558327:
    *(undefined4 *)((int)pvVar3 + 0x14) = 0;
    *(undefined4 *)((int)pvVar3 + 0x18) = 0;
    *(undefined4 *)((int)pvVar3 + 0x1c) = 0;
    *(undefined4 *)((int)pvVar3 + 0x20) = 0;
    return 0;
  }
  *(int *)((int)outBounds + 4) = *(int *)((int)this + 8);
  iVar5 = cellIndex_ + -1;
  switch(iVar5) {
  case 0:
    iVar5 = *(int *)((int)this + 0x28);
    iVar8 = *(int *)((int)this + 0x24);
    iVar9 = *(int *)((int)this + 0x20);
    *(undefined4 *)((int)outBounds + 0x14) = *(undefined4 *)((int)this + 0x1c);
    *(int *)((int)outBounds + 0x14) = *(int *)((int)outBounds + 0x14) + 1;
    iVar8 = iVar8 + -1;
    iVar9 = iVar9 + 1;
    iVar5 = iVar5 + -1;
    goto LAB_00558365;
  case 1:
    iVar5 = *(int *)((int)this + 0x20);
    iVar9 = *(int *)((int)this + 0x10);
    break;
  case 2:
    iVar5 = *(int *)((int)this + 0x20);
    iVar9 = *(int *)((int)this + 0x10);
    goto LAB_00558384;
  case 3:
    iVar5 = *(int *)((int)this + 0x18);
    iVar9 = *(int *)((int)this + 0x28);
    break;
  case 4:
    iVar5 = *(int *)((int)this + 0x18);
    iVar9 = *(int *)((int)this + 0x28);
LAB_00558384:
    iVar8 = *(int *)((int)this + 0x14);
    uVar6 = *(undefined4 *)((int)this + 0x24);
    goto LAB_00558379;
  case 5:
    uVar6 = *(undefined4 *)((int)this + 0x20);
    iVar9 = *(int *)((int)this + 0x10);
    goto LAB_005583d4;
  case 6:
    iVar5 = *(int *)((int)this + 0x28);
    uVar6 = *(undefined4 *)((int)this + 0x1c);
    iVar8 = *(int *)((int)this + 0x20);
    uVar7 = *(undefined4 *)((int)this + 0xc);
    goto LAB_005583a8;
  case 7:
    iVar5 = *(int *)((int)this + 0x28);
    uVar6 = *(undefined4 *)((int)this + 0x14);
    iVar8 = *(int *)((int)this + 0x20);
    uVar7 = *(undefined4 *)((int)this + 0x24);
LAB_005583a8:
    iVar5 = iVar5 + -1;
    *(undefined4 *)((int)outBounds + 0x14) = uVar7;
    *(int *)((int)outBounds + 0x18) = iVar8 + 1;
    *(undefined4 *)((int)outBounds + 0x1c) = uVar6;
    *(int *)((int)outBounds + 0x20) = iVar5;
    goto switchD_00558349_default;
  case 8:
    uVar6 = *(undefined4 *)((int)this + 0x18);
    iVar9 = *(int *)((int)this + 0x28);
LAB_005583d4:
    iVar5 = *(int *)((int)this + 0x24);
    iVar8 = *(int *)((int)this + 0x1c);
    *(undefined4 *)((int)outBounds + 0x20) = uVar6;
    *(int *)((int)outBounds + 0x14) = iVar8 + 1;
LAB_005583e2:
    iVar5 = iVar5 + -1;
    *(int *)((int)pvVar3 + 0x1c) = iVar5;
    goto LAB_005583e5;
  default:
    goto switchD_00558349_default;
  }
  iVar8 = *(int *)((int)this + 0x1c);
  uVar6 = *(undefined4 *)((int)this + 0xc);
LAB_00558379:
  *(undefined4 *)((int)outBounds + 0x14) = uVar6;
LAB_00558365:
  *(int *)((int)outBounds + 0x1c) = iVar8;
  *(int *)((int)outBounds + 0x20) = iVar5;
LAB_005583e5:
  *(int *)((int)pvVar3 + 0x18) = iVar9;
switchD_00558349_default:
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}

