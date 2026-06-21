// addr: 0x01139010
// name: btConvexHullShape_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * btConvexHullShape_ctor(void * this, void * points, int numPoints_, int
   stride_) */

void * __thiscall btConvexHullShape_ctor(void *this,void *points,int numPoints_,int stride_)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *local_40;
  int local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Constructs a Bullet btConvexHullShape from strided input points, storing each
                       point as a 4-float vector and recalculating the local AABB. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0164fa46;
  local_1c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_1c;
  btPolyhedralConvexAabbCachingShape_ctor(this);
  *(undefined ***)this = btConvexHullShape::vftable;
  *(undefined1 *)((int)this + 0x90) = 1;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 4) = 4;
  iVar7 = *(int *)((int)this + 0x84);
  local_14 = 1;
  if (iVar7 <= numPoints_) {
    if ((iVar7 < numPoints_) && (*(int *)((int)this + 0x88) < numPoints_)) {
      if (numPoints_ == 0) {
        local_40 = (undefined4 *)0x0;
      }
      else {
        local_40 = (undefined4 *)FUN_01160bf0(numPoints_ << 4,0x10,uVar3);
      }
      local_3c = *(int *)((int)this + 0x84);
      if (0 < local_3c) {
        iVar6 = 0;
        puVar5 = local_40;
        do {
          if (puVar5 != (undefined4 *)0x0) {
            iVar4 = *(int *)((int)this + 0x8c) + iVar6;
            *puVar5 = *(undefined4 *)(*(int *)((int)this + 0x8c) + iVar6);
            puVar5[1] = *(undefined4 *)(iVar4 + 4);
            puVar5[2] = *(undefined4 *)(iVar4 + 8);
            puVar5[3] = *(undefined4 *)(iVar4 + 0xc);
          }
          iVar6 = iVar6 + 0x10;
          puVar5 = puVar5 + 4;
          local_3c = local_3c + -1;
        } while (local_3c != 0);
      }
      if (*(int *)((int)this + 0x8c) != 0) {
        if (*(char *)((int)this + 0x90) != '\0') {
          FUN_01160c00(*(int *)((int)this + 0x8c));
        }
        *(undefined4 *)((int)this + 0x8c) = 0;
      }
      *(undefined1 *)((int)this + 0x90) = 1;
      *(undefined4 **)((int)this + 0x8c) = local_40;
      *(int *)((int)this + 0x88) = numPoints_;
    }
    if (iVar7 < numPoints_) {
      iVar6 = iVar7 << 4;
      iVar7 = numPoints_ - iVar7;
      do {
        puVar5 = (undefined4 *)(*(int *)((int)this + 0x8c) + iVar6);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = local_30;
          puVar5[1] = local_2c;
          puVar5[2] = local_28;
          puVar5[3] = local_24;
        }
        iVar6 = iVar6 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  iVar7 = 0;
  *(int *)((int)this + 0x84) = numPoints_;
  if (3 < numPoints_) {
    local_3c = (numPoints_ - 4U >> 2) + 1;
    iVar6 = 0;
    iVar7 = local_3c * 4;
    do {
      iVar4 = *(int *)((int)this + 0x8c);
      uVar1 = *(undefined4 *)((int)points + 4);
      uVar2 = *(undefined4 *)((int)points + 8);
      *(undefined4 *)(iVar4 + iVar6) = *(undefined4 *)points;
      *(undefined4 *)(iVar4 + 4 + iVar6) = uVar1;
      *(undefined4 *)(iVar4 + iVar6 + 8) = uVar2;
      *(undefined4 *)(iVar4 + iVar6 + 0xc) = 0;
      iVar4 = *(int *)((int)this + 0x8c);
      uVar1 = *(undefined4 *)((int)points + stride_ + 4);
      uVar2 = *(undefined4 *)((int)points + stride_ + 8);
      *(undefined4 *)(iVar6 + 0x10 + iVar4) = *(undefined4 *)((int)points + stride_);
      *(undefined4 *)(iVar6 + 0x14 + iVar4) = uVar1;
      iVar4 = iVar6 + 0x10 + iVar4;
      *(undefined4 *)(iVar4 + 8) = uVar2;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      uVar1 = *(undefined4 *)((int)points + stride_ * 2 + 4);
      puVar5 = (undefined4 *)(iVar6 + 0x20 + *(int *)((int)this + 0x8c));
      uVar2 = *(undefined4 *)((int)points + stride_ * 2 + 8);
      *puVar5 = *(undefined4 *)((int)points + stride_ * 2);
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = 0;
      puVar5 = (undefined4 *)(*(int *)((int)this + 0x8c) + iVar6 + 0x30);
      uVar1 = *(undefined4 *)((int)points + stride_ * 3 + 4);
      uVar2 = *(undefined4 *)((int)points + stride_ * 3 + 8);
      *puVar5 = *(undefined4 *)((int)points + stride_ * 3);
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      points = (void *)((int)points + stride_ * 4);
      iVar6 = iVar6 + 0x40;
      local_3c = local_3c + -1;
      puVar5[3] = 0;
    } while (local_3c != 0);
  }
  if (iVar7 < numPoints_) {
    iVar6 = iVar7 << 4;
    local_3c = numPoints_ - iVar7;
    do {
      puVar5 = (undefined4 *)(*(int *)((int)this + 0x8c) + iVar6);
      uVar1 = *(undefined4 *)((int)points + 4);
      uVar2 = *(undefined4 *)((int)points + 8);
      *puVar5 = *(undefined4 *)points;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      points = (void *)((int)points + stride_);
      iVar6 = iVar6 + 0x10;
      local_3c = local_3c + -1;
      puVar5[3] = 0;
    } while (local_3c != 0);
  }
  btPolyhedralConvexAabbCachingShape_recalcLocalAabb(this);
  ExceptionList = local_1c;
  return this;
}

