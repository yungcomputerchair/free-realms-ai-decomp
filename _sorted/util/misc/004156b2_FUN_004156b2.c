// addr: 0x004156b2
// name: FUN_004156b2
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void update_aligned_rect(int * this, int * rect) */

void __thiscall update_aligned_rect(void *this,int *rect)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_10;
  int local_c;
  int local_8;
  
                    /* Updates an object's rectangle; if size is unchanged and a flag is clear it
                       moves by delta, otherwise computes horizontal/vertical alignment and clamps
                       to min/preferred extents before virtual set-rect. Class identity is not
                       evident. */
  if ((*(ushort *)((int)this + 0x14) & 0x100) == 0) {
    local_34 = (rect[3] - rect[1]) + 1;
    if (((*(int *)((int)this + 0x24) - *(int *)((int)this + 0x1c)) + 1 == (rect[2] - *rect) + 1) &&
       ((*(int *)((int)this + 0x28) - *(int *)((int)this + 0x20)) + 1 == local_34)) {
      (**(code **)(*(int *)this + 0x24))
                (*rect - *(int *)((int)this + 0x1c),rect[1] - *(int *)((int)this + 0x20));
      return;
    }
  }
  iVar5 = rect[2];
  iVar1 = rect[1];
  iVar2 = *rect;
  *(int *)((int)this + 0x28) = rect[3];
  *(int *)((int)this + 0x24) = iVar5;
  *(int *)((int)this + 0x1c) = iVar2;
  *(int *)((int)this + 0x20) = iVar1;
  FUN_004155fe(&local_30,2);
  FUN_004155fe(&local_20,1);
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  local_38 = *rect;
  local_3c = rect[1];
  uVar4 = uVar3 & 0xf0;
  uVar3 = uVar3 & 0xf;
  iVar5 = (rect[2] - local_38) + 1;
  local_24 = (rect[3] - local_3c) + 1;
  if (local_1c < local_24) {
    local_24 = local_1c;
  }
  local_c = iVar5;
  if (local_20 < iVar5) {
    local_c = local_20;
  }
  local_28 = local_c;
  if ((((uVar3 == 4) || (uVar3 == 5)) || (uVar3 == 6)) && (local_c < iVar5)) {
    local_28 = iVar5;
  }
  if ((((uVar4 != 0x40) && (uVar4 != 0x50)) && (uVar4 != 0x60)) ||
     (local_8 = (rect[3] - local_3c) + 1, local_8 <= local_24)) {
    local_8 = local_24;
  }
  if (local_8 <= local_2c) {
    local_8 = local_2c;
  }
  local_10 = local_28;
  if (local_28 <= local_30) {
    local_10 = local_30;
  }
  if (local_20 < iVar5) {
    if (uVar3 == 2) {
      local_38 = (rect[2] - local_10) + 1;
    }
    else if (uVar3 == 3) {
      local_c = iVar5 / 2;
      local_38 = (local_c - local_10 / 2) + local_38;
    }
  }
  iVar5 = rect[3];
  if (local_1c < (iVar5 - local_3c) + 1) {
    if (uVar4 == 0x20) {
      local_3c = (iVar5 - local_8) + 1;
    }
    else if (uVar4 == 0x30) {
      local_3c = (((iVar5 - local_3c) + 1) / 2 - local_8 / 2) + local_3c;
    }
  }
  local_40 = local_38;
  local_38 = local_10 + -1 + local_38;
  local_34 = local_8 + -1 + local_3c;
  (**(code **)(*(int *)this + 0x20))(&local_40);
  return;
}

