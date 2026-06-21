// addr: 0x00fe20a0
// name: AppPhysics_RigidBody_createSimple
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_RigidBody_createSimple(void * this, void * shapeHandle, float
   * transform, int flags_, float mass_, float * localInertia, float * offset) */

void __thiscall
AppPhysics_RigidBody_createSimple
          (void *this,void *shapeHandle,float *transform,int flags_,float mass_,float *localInertia,
          float *offset)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined1 auStack_c4 [124];
  int iStack_48;
  void *pvStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Creates an AppPhysics rigid-body wrapper from a shape handle, transform,
                       mass, inertia/offset data, Bullet motion state, and construction info, then
                       stores the created btRigidBody. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_016305bc;
  local_1c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xfffffee0;
  ExceptionList = &local_1c;
  *(void **)((int)this + 0x10) = shapeHandle;
  uVar2 = (**(code **)(**(int **)((int)shapeHandle + 4) + 4))(0,uVar1);
  *(undefined4 *)((int)this + 0xb0) = uVar2;
  iVar4 = *(int *)(*(int *)((int)this + 0x10) + 4);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 4) != 0)) {
    *(float *)((int)this + 0x10c) = mass_;
    *(float *)((int)this + 0x110) = *localInertia;
    *(float *)((int)this + 0x114) = localInertia[1];
    *(float *)((int)this + 0x118) = localInertia[2];
  }
  fStack_f4 = transform[1];
  fStack_104 = *transform;
  fStack_f0 = transform[5];
  fStack_ec = transform[9];
  fStack_e4 = transform[2];
  fStack_e0 = transform[6];
  fStack_dc = transform[10];
  fStack_100 = transform[4];
  fStack_d4 = transform[0xc];
  fStack_fc = transform[8];
  fStack_d0 = transform[0xd];
  fStack_cc = transform[0xe];
  uStack_f8 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  pvVar3 = Mem_Alloc(0xe0);
  puStack_18 = (undefined1 *)0x0;
  if (pvVar3 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00fd2330();
    uVar2 = FUN_00fe1080(&fStack_104,uVar2);
  }
  puStack_18 = (undefined1 *)0xffffffff;
  *(undefined4 *)((int)this + 0x104) = uVar2;
  fStack_10c = offset[2];
  fStack_110 = offset[1];
  fStack_114 = *offset;
  iVar4 = *(int *)((int)this + 0x108);
  uStack_108 = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)((int)this + 0xb0);
  }
  FUN_00fe1a60(*(undefined4 *)((int)this + 0x10c),uVar2,iVar4,&fStack_114);
  iStack_48 = flags_;
  iVar4 = FUN_01160bf0(0x2c0,0x10);
  puStack_18 = (undefined1 *)0x1;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_01183a70(auStack_c4);
  }
  *(int *)((int)this + 0x100) = iVar4;
  *(void **)(iVar4 + 0xf8) = this;
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)((int)this + 0x100);
  ExceptionList = pvStack_20;
  return;
}

