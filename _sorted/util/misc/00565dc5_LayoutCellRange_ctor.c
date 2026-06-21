// addr: 0x00565dc5
// name: LayoutCellRange_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LayoutCellRange_ctor(void * this, void * layout, int descriptor_, int *
   parentBounds) */

void * __thiscall LayoutCellRange_ctor(void *this,void *layout,int descriptor_,int *parentBounds)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [4];
  undefined4 local_8;
  
                    /* Initializes a layout cell range helper from a layout object, child
                       descriptor, and parent bounds. It resolves optional resources and computes
                       clamped left/top/right/bottom ranges stored in the helper. */
  *(void **)this = layout;
  *(int *)((int)this + 4) = descriptor_;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(descriptor_ + 0xc);
  if (*(short *)(descriptor_ + 0x10) != 0) {
    puVar1 = (undefined2 *)(descriptor_ + 0x10);
    descriptor_ = 0;
    local_8 = CONCAT22(local_8._2_2_,*puVar1);
    (**(code **)(*(int *)layout + 0x18))(local_8,layout,&descriptor_);
    *(int *)((int)this + 8) = descriptor_;
  }
  iVar4 = *(int *)((int)this + 4);
  local_14 = *(int *)(iVar4 + 0x174);
  local_10 = *(int *)(iVar4 + 0x178);
  local_18 = *(int *)(iVar4 + 0x170);
  local_1c = *(int *)(iVar4 + 0x16c);
  descriptor_ = local_14;
  if (*(short *)(iVar4 + 0x17c) != 0) {
    descriptor_ = CONCAT22((short)((uint)local_14 >> 0x10),*(short *)(iVar4 + 0x17c));
    (**(code **)(*(int *)layout + 0x18))(descriptor_,layout,&local_1c);
  }
  if (*(int **)((int)this + 8) == (int *)0x0) {
    iVar4 = parentBounds[2];
    iVar3 = *parentBounds;
    iVar5 = parentBounds[3];
    iVar6 = parentBounds[1];
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(int *)((int)this + 0x14) = iVar4 - iVar3;
    *(int *)((int)this + 0x18) = iVar5 - iVar6;
    iVar3 = (iVar5 - iVar6) - local_10;
    iVar4 = *(int *)((int)this + 0x14) - local_14;
    *(int *)((int)this + 0x1c) = local_1c + -1;
    local_18 = local_18 + -1;
  }
  else {
    iVar3 = *(int *)((int)this + 4);
    local_2c = *(int *)(iVar3 + 0x14);
    local_28 = *(int *)(iVar3 + 0x18);
    iVar4 = *(int *)(iVar3 + 0x1c);
    iVar3 = *(int *)(iVar3 + 0x20);
    if ((iVar4 < local_2c) || (iVar3 < local_28)) {
      piVar2 = (int *)(**(code **)(**(int **)((int)this + 8) + 0x154))(local_c);
      local_2c = 0;
      local_28 = 0;
      iVar4 = *piVar2 + -1;
      iVar3 = piVar2[1] + -1;
    }
    iVar5 = (iVar4 - local_2c) + 1;
    iVar6 = (iVar3 - local_28) + 1;
    if (iVar5 <= local_1c) {
      local_1c = iVar4 - local_2c;
    }
    if (iVar6 <= local_18) {
      local_18 = iVar3 - local_28;
    }
    if (iVar6 < local_10 + local_18) {
      local_10 = iVar6 - local_18;
    }
    if (iVar5 < local_14 + local_1c) {
      local_14 = iVar5 - local_1c;
    }
    *(int *)((int)this + 0xc) = local_2c;
    *(int *)((int)this + 0x10) = local_28;
    *(int *)((int)this + 0x14) = iVar4;
    iVar4 = iVar4 - local_14;
    *(int *)((int)this + 0x18) = iVar3;
    iVar3 = iVar3 - local_10;
    local_18 = *(int *)((int)this + 0x10) + -1 + local_18;
    *(int *)((int)this + 0x1c) = local_1c + -1 + *(int *)((int)this + 0xc);
  }
  *(int *)((int)this + 0x28) = iVar3 + 1;
  *(int *)((int)this + 0x24) = iVar4 + 1;
  *(int *)((int)this + 0x20) = local_18;
  return this;
}

