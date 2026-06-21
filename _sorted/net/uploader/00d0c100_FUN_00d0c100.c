// addr: 0x00d0c100
// name: FUN_00d0c100
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_00d0c100(void * pool, void * source) */

void * __thiscall FUN_00d0c100(void *this,void *pool,void *source)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Gets or reuses a 0x78-byte object from an object pool, growing the active
                       array as needed or recycling from the free list and transferring ownership of
                       a field from source. Class identity unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01612453;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00fc45f0(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  pvVar4 = (void *)0x0;
  local_4 = 0;
  if (*(int *)((int)this + 0xa8) == 0) {
    if ((*(int *)this == 0) || (*(int *)((int)this + 0x98) < *(int *)this)) {
      pvVar2 = Mem_Alloc(0x78);
      local_4._0_1_ = 1;
      if (pvVar2 != (void *)0x0) {
        pvVar4 = (void *)FUN_00d0be50(pool);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      iVar3 = *(int *)((int)this + 0x98) + 1;
      if (*(int *)((int)this + 0x9c) < iVar3) {
        FUN_00d0b1a0(iVar3,0);
      }
      *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 1;
      *(void **)(*(int *)((int)this + 0x94) + -4 + *(int *)((int)this + 0x98) * 4) = pvVar4;
      local_4 = 0xffffffff;
      if (this != (void *)0xfffffff8) {
        FUN_00fc4610();
      }
    }
    else {
      local_4 = 0xffffffff;
      if (this != (void *)0xfffffff8) {
        FUN_00fc4610();
      }
      pvVar4 = (void *)0x0;
    }
  }
  else {
    pvVar4 = *(void **)(*(int *)((int)this + 0xa4) + -4 + *(int *)((int)this + 0xa8) * 4);
    FUN_006f9e60((int)pool + 4);
    uVar1 = *(undefined4 *)((int)pool + 0x14);
    *(undefined4 *)((int)pool + 0x14) = 0;
    if (*(int **)((int)pvVar4 + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)((int)pvVar4 + 0x6c) + 4))();
      *(undefined4 *)((int)pvVar4 + 0x6c) = 0;
    }
    *(undefined4 *)((int)pvVar4 + 0x6c) = uVar1;
    *(int *)((int)this + 0xa8) = *(int *)((int)this + 0xa8) + -1;
    local_4 = 0xffffffff;
    if (this != (void *)0xfffffff8) {
      FUN_00fc4610();
    }
  }
  ExceptionList = local_c;
  return pvVar4;
}

