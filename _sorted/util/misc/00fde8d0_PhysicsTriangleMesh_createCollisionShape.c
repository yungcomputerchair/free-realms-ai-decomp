// addr: 0x00fde8d0
// name: PhysicsTriangleMesh_createCollisionShape
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall PhysicsTriangleMesh_createCollisionShape(int param_1,char param_2)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Creates a Bullet triangle-mesh collision shape: either a direct shape for one
                       mode, or lazily builds/caches a btBvhTriangleMeshShape and returns a scaled
                       wrapper. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0163014c;
  local_1c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_1c;
  if (*(char *)(param_1 + 0x41) != '\0') {
    pvVar2 = (void *)FUN_01160bf0(0xa0,0x10,uVar1);
    uStack_14 = 0;
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = btConvexHullShape_ctor(pvVar2,*(void **)(param_1 + 0xc),*(int *)(param_1 + 8),0xc);
    }
    uStack_14 = 0xffffffff;
    (**(code **)(*piVar3 + 0x24))(_DAT_0181c234);
    ExceptionList = pvStack_20;
    return piVar3;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar4 = FUN_01160bf0(0x60,0x10,uVar1);
      uStack_14 = 2;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = btBvhTriangleMeshShape_ctor(*(undefined4 *)(param_1 + 0x44),1,1);
      }
      uStack_14 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x48) = uVar5;
    }
    else {
      iVar4 = FUN_01160bf0(0x60,0x10,uVar1);
      uStack_14 = 1;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = btBvhTriangleMeshShape_ctor(*(undefined4 *)(param_1 + 0x44),1,0);
      }
      uStack_14 = 0xffffffff;
      uStack_30 = _DAT_0175b420;
      uStack_2c = _DAT_0175b420;
      uStack_28 = _DAT_0175b420;
      *(undefined4 *)(param_1 + 0x48) = uVar5;
      uStack_24 = 0;
      btBvhTriangleMeshShape_refitTree(*(undefined4 *)(param_1 + 0x50),&uStack_30);
    }
  }
  DAT_01cb56f8 = DAT_01cb56f8 + 0x60;
  pvVar2 = Mem_Alloc(0x30);
  uStack_14 = 3;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_30 = _DAT_0175b420;
    uStack_2c = _DAT_0175b420;
    uStack_28 = _DAT_0175b420;
    uStack_24 = 0;
    piVar3 = (int *)btScaledBvhTriangleMeshShape_ctor(*(undefined4 *)(param_1 + 0x48),&uStack_30);
  }
  uStack_14 = 0xffffffff;
  (**(code **)(*piVar3 + 0x24))(_DAT_0181c234);
  if (param_2 != '\0') {
    piVar3[2] = *(int *)(*(int *)(param_1 + 0x48) + 8);
  }
  ExceptionList = pvStack_20;
  return piVar3;
}

