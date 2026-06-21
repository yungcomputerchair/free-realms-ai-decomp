// addr: 0x00d44e60
// name: AppPhysics_createMeshCollisionData
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall AppPhysics_createMeshCollisionData(int *param_1)

{
  void *b;
  uint count_;
  int *piVar1;
  undefined4 *this;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Builds physics collision data and render geometry for the selected mesh
                       chunk. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_016156cc;
  local_1c = ExceptionList;
  count_ = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_1c;
  if ((*(char *)((int)param_1 + 0x499) == '\0') && (-1 < param_1[0x121])) {
    iVar3 = param_1[5];
    piVar1 = (int *)(param_1[0x121] * 0x10 + *(int *)(iVar3 + 0x4d38));
    pvVar4 = (void *)(*(int *)(iVar3 + 0x4e64) + piVar1[2] * 0xc);
    b = (void *)(*(int *)(iVar3 + 0x4e68) + *piVar1 * 2);
    this = Mem_Alloc(0x10);
    if (this == (undefined4 *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      *this = AppPhysics::CollisionData::vftable;
      this[1] = 0;
      this[2] = 0;
      *(undefined1 *)(this + 3) = 0;
      *(undefined1 *)((int)this + 0xd) = 0;
    }
    local_14 = 0xffffffff;
    param_1[0x12d] = (int)this;
    if (this != (undefined4 *)0x0) {
      if ((void *)param_1[0x123] != (void *)0x0) {
        AppPhysics_MeshData_setIndexBuffer
                  (this,(void *)param_1[0x123],(void *)param_1[0x122],count_);
      }
      AppPhysics_MeshData_setGeometry
                ((void *)param_1[0x12d],pvVar4,(void *)piVar1[3],b,(void *)(piVar1[1] / 3),
                 (void *)0x0,false,SUB41(count_,0));
      pvVar2 = Mem_Alloc(0x100);
      local_14 = 1;
      if (pvVar2 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        local_30 = _DAT_0175b420;
        local_2c = _DAT_0175b420;
        local_28 = _DAT_0175b420;
        local_24 = _DAT_0175b420;
        iVar3 = FUN_00fdd1f0(param_1[0x12d],
                             (-(uint)(*(int *)(param_1[0x12d] + 8) != 8) & 0xffffff01) + 0x100,0xe84
                             ,param_1,1,&DAT_01bc2660,&local_30,0);
      }
      param_1[0x12e] = iVar3;
    }
    local_14 = 0xffffffff;
    pvVar2 = Mem_Alloc(0x10);
    local_14 = 2;
    if (pvVar2 == (void *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)FUN_00892df0(pvVar4,0xc,piVar1[3],b,6,piVar1[1] / 3);
    }
    local_14 = 0xffffffff;
    pvVar4 = Mem_Alloc(0x1c);
    local_14 = 3;
    if (pvVar4 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = Deep_VisibilityObject_ctor(pvVar4,piVar1,piVar1,(void *)0x0);
    }
    local_14 = 0xffffffff;
    (**(code **)(*param_1 + 0x2c))(piVar5);
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    LOCK();
    iVar3 = piVar5[1] + -1;
    piVar5[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)(*piVar5 + 4))();
    }
    *(undefined1 *)((int)param_1 + 0x499) = 1;
  }
  ExceptionList = local_1c;
  return;
}

