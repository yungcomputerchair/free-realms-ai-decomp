// addr: 0x0042d572
// name: ResourceOffsetTable_setEntryOffset
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ResourceOffsetTable_setEntryOffset(void * this, int id_, uint offset_) */

int __thiscall ResourceOffsetTable_setEntryOffset(void *this,int id_,uint offset_)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 local_1c [8];
  undefined2 local_14 [4];
  uint local_c;
  
                    /* Maintains a small table keyed by a short id, creating the table if needed,
                       storing an offset at entry+0xc, and updating paired low/high offset fields on
                       the active resource. Name is behavior-based only. */
  sVar1 = (short)id_;
  uVar7 = 0;
  local_14[0] = 0;
  if (*(int *)((int)this + 0xd8) == 0) {
    pvVar4 = Mem_Alloc(0x10);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      *(undefined4 *)((int)pvVar4 + 4) = 0;
      *(undefined4 *)((int)pvVar4 + 8) = 0;
      *(undefined4 *)((int)pvVar4 + 0xc) = 0;
    }
    *(void **)((int)this + 0xd8) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    if (*(int *)((int)this + 0x44) != 0) {
      (**(code **)(*(int *)this + 0xc))();
      id_ = (int)this;
      FUN_0042be37(&id_);
      (**(code **)(*(int *)this + 0x10))(0);
    }
  }
  else {
    id_ = 0;
    iVar2 = FUN_0040a821();
    if (iVar2 != 0) {
      do {
        iVar2 = FUN_0040a834(uVar7);
        if (*(short *)(iVar2 + 8) == sVar1) goto LAB_0042d64d;
        uVar7 = uVar7 + 1;
        id_ = uVar7;
        uVar3 = FUN_0040a821();
      } while (uVar7 < uVar3);
    }
  }
  FUN_0042bfe5(local_1c);
  iVar2 = FUN_0040a821();
  id_ = iVar2 + -1;
  iVar2 = FUN_0040a834(id_);
  *(short *)(iVar2 + 8) = sVar1;
LAB_0042d64d:
  piVar5 = (int *)FUN_0040a834(id_);
  uVar7 = offset_;
  piVar5[3] = offset_;
  iVar2 = *(int *)((int)this + 0x44);
  if (iVar2 != 0) {
    puVar6 = (uint *)FUN_004f9372(local_14);
    local_c = *puVar6;
    *(uint *)(iVar2 + 0x1c8) = local_c;
    *(uint *)(iVar2 + 0x1cc) = puVar6[1];
    iVar2 = *(int *)(iVar2 + 0x1cc);
    piVar5 = (int *)FUN_0040a834(id_);
    *piVar5 = uVar7 + local_c;
    piVar5[1] = iVar2 + (uint)CARRY4(uVar7,local_c);
  }
  return CONCAT31((int3)((uint)piVar5 >> 8),1);
}

