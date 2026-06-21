// addr: 0x00fdbc20
// name: AppPhysics_SphereRigidBodyPool_allocateList
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AppPhysics_SphereRigidBodyPool_allocateList(void * pool) */

void * __fastcall AppPhysics_SphereRigidBodyPool_allocateList(void *pool)

{
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates and appends a new
                       SoeUtil::List<AppPhysics::SphereRigidBodyPoolItem,-1> node to the pool's
                       linked list of sphere rigid-body buckets. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0162f9f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*(int *)pool + 8))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (iVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_00fdb6e0();
  }
  *(undefined4 *)((int)pvVar2 + 0x18) = *(undefined4 *)((int)pool + 8);
  *(undefined4 *)((int)pvVar2 + 0x14) = 0;
  if (*(int *)((int)pool + 8) == 0) {
    *(void **)((int)pool + 4) = pvVar2;
  }
  else {
    *(void **)(*(int *)((int)pool + 8) + 0x14) = pvVar2;
  }
  *(void **)((int)pool + 8) = pvVar2;
  *(int *)((int)pool + 0xc) = *(int *)((int)pool + 0xc) + 1;
  ExceptionList = local_c;
  return pvVar2;
}

