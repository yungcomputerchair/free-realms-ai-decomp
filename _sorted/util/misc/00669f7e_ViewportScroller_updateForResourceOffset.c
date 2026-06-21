// addr: 0x00669f7e
// name: ViewportScroller_updateForResourceOffset
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ViewportScroller_updateForResourceOffset(void * this, int
   resourceOffset_) */

void __thiscall ViewportScroller_updateForResourceOffset(void *this,int resourceOffset_)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
                    /* Responds to two resource-offset sentinel values, updates ResourceOffsetTable
                       entries, checks view flags, and invokes virtual scrolling/layout callbacks.
                        */
  uVar3 = (ushort)resourceOffset_;
  if ((ushort)resourceOffset_ == DAT_01bdd4e4) {
    FUN_00424fe0(DAT_01bdd4e4);
    resourceOffset_ = 0x5a;
    (**(code **)(*(int *)((int)this + 0x24) + 0x18))
              (DAT_01bd970c,(int *)((int)this + 0x24),&resourceOffset_);
    ResourceOffsetTable_setEntryOffset(this,(uint)DAT_01bddd18,resourceOffset_);
    if (uVar3 != DAT_01bdd4e4) goto LAB_00669fd5;
  }
  else {
LAB_00669fd5:
    if (uVar3 != DAT_01bddd18) {
      return;
    }
  }
  uVar4 = FUN_0064ffc0(0);
  if ((uVar4 & 0x10000000) == 0) {
    return;
  }
  resourceOffset_ = *(int *)((int)this + 0x138);
  iVar1 = *(int *)((int)this + 0x70) + -1;
  iVar2 = *(int *)((int)this + 0x74) + -1;
  get_active_rect_from_resource(this,&local_24);
  uVar4 = FUN_0064ffc0(0);
  local_c = iVar1;
  local_8 = iVar2;
  if ((uVar4 & 0x3000000) == 0x2000000) {
    if ((*(byte *)((int)this + 300) & 1) == 0) {
      local_14 = 0;
      local_10 = local_20;
    }
    else {
      local_10 = 0;
      local_14 = local_24;
    }
    if (resourceOffset_ < *(int *)((int)this + 0x134) + *(int *)((int)this + 0x104)) {
LAB_0066a066:
      *(uint *)((int)this + 0xe8) = *(uint *)((int)this + 0xe8) & 0xefffffff;
      goto LAB_0066a0ed;
    }
    uVar4 = FUN_0064ffc0(0);
    if ((uVar4 & 0xc000000) == 0) {
      uVar6 = 2;
    }
    else {
      uVar6 = 4;
    }
  }
  else {
    uVar5 = FUN_0064ffc0(0);
    if (((uint)uVar5 & (uint)((ulonglong)uVar5 >> 0x20)) != 0x1000000) {
      *(uint *)((int)this + 0xe8) = *(uint *)((int)this + 0xe8) & 0xf3ffffff;
      FUN_00424fe0(DAT_01bdd4e4);
      FUN_00424fe0(DAT_01bddd18);
      return;
    }
    local_14 = 0;
    local_10 = 0;
    if ((*(byte *)((int)this + 300) & 1) == 0) {
      local_8 = local_18;
    }
    else {
      local_c = local_1c;
    }
    if (*(int *)((int)this + 0x104) <= resourceOffset_) goto LAB_0066a066;
    uVar4 = FUN_0064ffc0(0);
    if ((uVar4 & 0xc000000) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 3;
    }
  }
  (**(code **)(*(int *)this + 0x2c0))(uVar6,1,2);
LAB_0066a0ed:
  (**(code **)(*(int *)this + 0x22c))(&local_14,0);
  return;
}

