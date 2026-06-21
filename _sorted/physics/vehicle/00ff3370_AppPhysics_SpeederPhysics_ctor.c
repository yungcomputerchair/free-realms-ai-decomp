// addr: 0x00ff3370
// name: AppPhysics_SpeederPhysics_ctor
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * AppPhysics_SpeederPhysics_ctor(void * this, void * speederConfig, void
   * shapeHandle, float * transform, void * owner) */

void * __thiscall
AppPhysics_SpeederPhysics_ctor
          (void *this,void *speederConfig,void *shapeHandle,float *transform,void *owner)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *transform_00;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float *localInertia;
  void *local_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  void *local_a0;
  float fStack_9c;
  undefined4 uStack_98;
  void *local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  void *local_64;
  undefined1 local_60 [32];
  void *pvStack_40;
  void *local_1c;
  undefined1 *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
                    /* Constructs AppPhysics::SpeederPhysics, initializes collision lists/state,
                       creates chassis and support rigid bodies, creates a vehicle raycaster and
                       ModifiedBtVehicle, applies tuning, and adds/configures wheels from the
                       speeder configuration. */
  puStack_18 = &LAB_016310ec;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined ***)this = AppPhysics::SpeederPhysics::vftable;
  *(undefined ***)((int)this + 0xac) =
       SoeUtil::List<AppPhysics::SpeederBoostPadCollision,-1>::vftable;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  iVar3 = 0;
  do {
    *(undefined4 *)((int)this + iVar3 * 4 + 0xd4) = DAT_01b83900;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  *(undefined ***)((int)this + 0xf0) =
       SoeUtil::List<AppPhysics::SpeederEnvironmentCollision,-1>::vftable;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined ***)((int)this + 0x100) = SoeUtil::List<SpeederCollision,-1>::vftable;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  uStack_13 = 0;
  local_14 = 2;
  iVar3 = 0;
  do {
    *(undefined4 *)((int)this + iVar3 * 4 + 0x114) = DAT_01b83900;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    *(undefined4 *)((int)this + iVar3 * 4 + 0x120) = DAT_01b83900;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0xea) = 0;
  *(float *)((int)this + 0x170) = transform[0xc];
  *(float *)((int)this + 0x174) = transform[0xd];
  *(float *)((int)this + 0x178) = transform[0xe];
  *(float *)((int)this + 0x17c) = transform[0xf];
  *(undefined4 *)((int)this + 0x50) = 0;
  uVar4 = DAT_017ec67c;
  *(void **)((int)this + 0x188) = speederConfig;
  *(void **)((int)this + 0x94) = owner;
  *(undefined4 *)((int)this + 100) = uVar4;
  *(undefined4 *)((int)this + 0x2c) = 0;
  local_a0 = *(void **)((int)owner + 8);
  *(undefined4 *)((int)this + 0x144) = *(undefined4 *)((int)speederConfig + 0x108);
  *(undefined4 *)((int)this + 0x148) = *(undefined4 *)((int)speederConfig + 0x10c);
  *(undefined4 *)((int)this + 0x14c) = *(undefined4 *)((int)speederConfig + 0x100);
  *(undefined4 *)((int)this + 0x150) = *(undefined4 *)((int)speederConfig + 0x104);
  *(undefined4 *)((int)this + 0x15c) = *(undefined4 *)((int)speederConfig + 0xc0);
  *(undefined4 *)((int)this + 0x160) = *(undefined4 *)((int)speederConfig + 0xc4);
  *(undefined4 *)((int)this + 0x154) = *(undefined4 *)((int)speederConfig + 0x11c);
  *(undefined4 *)((int)this + 0x158) = *(undefined4 *)((int)speederConfig + 0x118);
  *(undefined4 *)((int)this + 0x164) = *(undefined4 *)((int)speederConfig + 0xfc);
  local_64 = this;
  local_b4 = Mem_Alloc(0x170);
  local_14 = 3;
  if (local_b4 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = RigidBody_ctor(&DAT_0175b400,0x240);
  }
  local_14 = 2;
  *(undefined4 *)((int)this + 0x1c) = uVar4;
  uVar1 = *(uint *)((int)shapeHandle + 4);
  if ((uVar1 != 0) && ((uVar1 & ~-(uint)(*(int *)(uVar1 + 4) != 0)) != 0)) {
    FUN_00fde890();
  }
  fVar11 = *(float *)(*(int *)((int)this + 0x188) + 0x10);
  localInertia = (float *)(*(int *)((int)this + 0x188) + 0x14);
  iVar3 = 0;
  transform_00 = (float *)FUN_00770a70(local_60);
  AppPhysics_RigidBody_create
            (*(void **)((int)this + 0x1c),shapeHandle,transform_00,iVar3,fVar11,localInertia);
  iVar3 = *(int *)((int)this + 0x188);
  iVar8 = *(int *)((int)this + 0x1c);
  *(undefined4 *)(iVar8 + 0x11c) = *(undefined4 *)(iVar3 + 0x20);
  *(undefined4 *)(iVar8 + 0x120) = *(undefined4 *)(iVar3 + 0x24);
  *(undefined4 *)(iVar8 + 0x124) = *(undefined4 *)(iVar3 + 0x28);
  AppPhysics_World_registerRigidBody(owner,*(void **)((int)this + 0x1c));
  iVar3 = *(int *)((int)this + 0x1c);
  *(void **)(iVar3 + 0x1c) = this;
  *(undefined4 *)(iVar3 + 0x20) = 0x12;
  local_b4 = Mem_Alloc(0x170);
  local_14 = 4;
  if (local_b4 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = RigidBody_ctor(&DAT_0175b400,4);
  }
  local_14 = 2;
  *(undefined4 *)((int)this + 0x24) = uVar4;
  local_b4 = Mem_Alloc(0x10);
  local_14 = 5;
  if (local_b4 == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    local_94 = Mem_Alloc(0x20);
    local_14 = 6;
    if (local_94 == (void *)0x0) {
      local_14 = 5;
      pvVar5 = (void *)CollisionData_sub_00fdebc0();
    }
    else {
      iVar3 = *(int *)((int)this + 0x188);
      local_88 = *(float *)(iVar3 + 0x28) * DAT_017ea718;
      local_90 = *(float *)(iVar3 + 0x20) * DAT_017ea718;
      local_8c = *(float *)(iVar3 + 0x24) * DAT_017ea718;
      local_84 = _DAT_0175b420;
      AppPhysics_BoxData_ctor(local_94,&local_90);
      local_14 = 5;
      pvVar5 = (void *)CollisionData_sub_00fdebc0();
    }
  }
  local_14 = 2;
  *(void **)((int)this + 0x20) = pvVar5;
  AppPhysics_RigidBody_create
            (*(void **)((int)this + 0x24),pvVar5,transform,0,
             *(float *)(*(int *)((int)this + 0x188) + 0x10),
             (float *)(*(int *)((int)this + 0x188) + 0x14));
  iVar3 = *(int *)(*(int *)((int)this + 0x24) + 0x100);
  *(uint *)(iVar3 + 0xd8) = *(uint *)(iVar3 + 0xd8) | 2;
  (**(code **)(**(int **)((int)this + 0x24) + 0x10))();
  AppPhysics_World_registerRigidBody(*(void **)((int)this + 0x94),*(void **)((int)this + 0x24));
  local_b4 = Mem_Alloc(0x1c);
  local_14 = 7;
  if (local_b4 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00fe3310(*(undefined4 *)((int)this + 0x24));
  }
  local_14 = 2;
  iVar3 = *(int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x28) = uVar4;
  *(undefined4 *)(iVar3 + 0x1c) = uVar4;
  *(undefined4 *)(iVar3 + 0x20) = 7;
  *(void **)(*(int *)((int)this + 0x28) + 0xc) = this;
  local_b4 = Mem_Alloc(0x10);
  local_14 = 8;
  if (local_b4 == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = AppPhysics_btDefaultVehicleRaycaster_ctor
                       (local_b4,local_a0,*(void **)(*(int *)((int)this + 0x1c) + 0x100),(void *)0x3
                       );
  }
  local_14 = 2;
  *(void **)((int)this + 0x30) = pvVar5;
  local_b4 = Mem_Alloc(0x130);
  local_14 = 9;
  if (local_b4 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = AppPhysics_ModifiedBtVehicle_ctor
                       (local_b4,&DAT_01b9a560,*(void **)(*(int *)((int)this + 0x1c) + 0x100),
                        *(void **)((int)this + 0x30));
  }
  _local_14 = CONCAT31(uStack_13,2);
  *(int **)((int)this + 0x2c) = piVar6;
  (**(code **)(*piVar6 + 0x54))();
  fStack_a4 = *(float *)(*(int *)((int)this + 0x188) + 0xb4);
  *(float *)((int)this + 0x34) = fStack_a4;
  (**(code **)(**(int **)((int)this + 0x2c) + 0x3c))();
  (**(code **)(**(int **)((int)this + 0x2c) + 0x40))();
  (**(code **)(**(int **)((int)this + 0x2c) + 0x48))();
  (**(code **)(**(int **)((int)this + 0x2c) + 0x50))
            (*(undefined4 *)(*(int *)((int)this + 0x188) + 0xd8));
  (**(code **)(**(int **)((int)this + 0x2c) + 0x34))(1);
  FUN_011271b0(4);
  *(undefined4 *)(*(int *)(*(int *)((int)this + 0x1c) + 0x100) + 0x104) =
       *(undefined4 *)(*(int *)((int)this + 0x188) + 0x120);
  *(undefined4 *)(*(int *)(*(int *)((int)this + 0x1c) + 0x100) + 0x100) =
       *(undefined4 *)(*(int *)((int)this + 0x188) + 0x124);
  FUN_011271b0(4);
  (**(code **)(**(int **)((int)this + 0x2c) + 0x14))(0,1,2);
  iVar8 = 0;
  iVar3 = 0;
  do {
    iVar7 = *(int *)((int)this + 0x188);
    iVar2 = *(int *)(iVar7 + 0x44);
    if ((iVar2 <= iVar8) && (iVar2 < iVar8 + 1)) {
      FUN_00fe69e0(iVar8);
    }
    fVar11 = *(float *)(*(int *)(iVar7 + 0x40) + 8 + iVar3);
    iVar7 = *(int *)((int)this + 0x188);
    iVar2 = *(int *)(iVar7 + 0x44);
    if ((iVar2 <= iVar8) && (iVar2 < iVar8 + 1)) {
      FUN_00fe69e0(iVar8);
    }
    iVar2 = *(int *)((int)this + 0x188);
    fVar10 = *(float *)(*(int *)(iVar7 + 0x40) + 4 + iVar3);
    iVar7 = *(int *)(iVar2 + 0x44);
    if ((iVar7 <= iVar8) && (iVar7 < iVar8 + 1)) {
      FUN_00fe69e0(iVar8);
    }
    bVar9 = iVar8 >= 2;
    iVar7 = *(int *)((int)this + 0x188);
    local_b4 = (void *)(*(float *)(iVar7 + 0x14) + *(float *)(iVar3 + *(int *)(iVar2 + 0x40)));
    fStack_b0 = *(float *)(iVar7 + 0x18) + fVar10;
    fStack_ac = *(float *)(iVar7 + 0x1c) + fVar11;
    uStack_a8 = 0;
    if (bVar9) {
      fVar11 = *(float *)(iVar7 + 0xa4);
      fVar10 = *(float *)(iVar7 + 0x9c);
    }
    else {
      fVar11 = *(float *)(iVar7 + 0xa0);
      fVar10 = *(float *)(iVar7 + 0x9c);
    }
    AppPhysics_ModifiedBtVehicle_addWheel
              (*(void **)((int)this + 0x2c),(float *)&stack0xffffff2c,(float *)&local_b4,
               (float *)&DAT_01b9a590,(float *)&DAT_01b9a5a0,fVar10,fVar11,&DAT_01b9a560,
               !bVar9 && iVar8 < 2,false,true);
    iVar7 = FUN_00ff6bc0(iVar8);
    *(undefined4 *)(iVar7 + 0xfc) = *(undefined4 *)(*(int *)((int)this + 0x188) + 0x90);
    iVar8 = iVar8 + 1;
    *(undefined4 *)(iVar7 + 0x104) = *(undefined4 *)(*(int *)((int)this + 0x188) + 0x94);
    uVar4 = *(undefined4 *)(*(int *)((int)this + 0x188) + 0x98);
    *(undefined4 *)(iVar7 + 0x110) = 0;
    *(undefined4 *)(iVar7 + 0x100) = uVar4;
    *(undefined4 *)(iVar7 + 0x114) = 0;
    *(undefined4 *)(iVar7 + 0x108) = 0;
    *(undefined4 *)(iVar7 + 0x10c) = 0;
    *(undefined4 *)(iVar7 + 0x128) = *(undefined4 *)(*(int *)((int)this + 0x188) + 0xb0);
    uVar4 = *(undefined4 *)(*(int *)((int)this + 0x188) + 0xac);
    *(undefined4 *)(iVar7 + 0x118) = 0;
    *(undefined4 *)(iVar7 + 0xf4) = uVar4;
    iVar3 = iVar3 + 0xc;
  } while (iVar3 < 0x30);
  iVar3 = *(int *)((int)this + 0x188);
  iVar8 = *(int *)(iVar3 + 0x44);
  if ((iVar8 < 5) && (iVar8 < 5)) {
    FUN_00fe69e0(4);
  }
  iVar8 = *(int *)((int)this + 0x188);
  iVar7 = *(int *)(iVar8 + 0x44);
  fVar11 = *(float *)(*(int *)(iVar3 + 0x40) + 0x38);
  if ((iVar7 < 5) && (iVar7 < 5)) {
    FUN_00fe69e0(4);
  }
  iVar3 = *(int *)((int)this + 0x188);
  fVar10 = *(float *)(*(int *)(iVar8 + 0x40) + 0x34);
  iVar8 = *(int *)(iVar3 + 0x44);
  if ((iVar8 < 5) && (iVar8 < 5)) {
    FUN_00fe69e0(4);
  }
  iVar8 = *(int *)((int)this + 0x188);
  uStack_98 = 0;
  fStack_a4 = *(float *)(iVar8 + 0x14) + *(float *)(*(int *)(iVar3 + 0x40) + 0x30);
  local_a0 = (void *)(*(float *)(iVar8 + 0x18) + fVar10);
  fStack_9c = *(float *)(iVar8 + 0x1c) + fVar11;
  AppPhysics_ModifiedBtVehicle_addWheel
            (*(void **)((int)this + 0x2c),&fStack_a4,&fStack_a4,(float *)&DAT_01b9a590,
             (float *)&DAT_01b9a5a0,*(float *)(iVar8 + 0xa8),_DAT_017e795c,&DAT_01b9a560,false,true,
             false);
  iVar3 = FUN_00ff6bc0(*(int *)(*(int *)((int)this + 0x2c) + 0x11c) + -1);
  *(undefined4 *)(iVar3 + 0xfc) = *(undefined4 *)(*(int *)((int)this + 0x188) + 0x90);
  *(undefined4 *)(iVar3 + 0x104) = *(undefined4 *)(*(int *)((int)this + 0x188) + 0x94);
  *(undefined4 *)(iVar3 + 0x100) = *(undefined4 *)(*(int *)((int)this + 0x188) + 0x98);
  *(undefined4 *)(iVar3 + 0x108) = *(undefined4 *)(*(int *)((int)this + 0x188) + 0x108);
  *(undefined4 *)(iVar3 + 0x10c) = *(undefined4 *)(*(int *)((int)this + 0x188) + 0x10c);
  *(undefined4 *)(iVar3 + 0x110) = *(undefined4 *)(*(int *)((int)this + 0x188) + 0x100);
  *(undefined4 *)(iVar3 + 0x114) = *(undefined4 *)(*(int *)((int)this + 0x188) + 0x104);
  uVar4 = *(undefined4 *)(*(int *)((int)this + 0x188) + 0xb0);
  *(undefined4 *)(iVar3 + 0x118) = 0;
  *(undefined4 *)(iVar3 + 0x128) = uVar4;
  AppPhysics_ModifiedBtVehicle_resetSuspension(*(void **)((int)this + 0x2c));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x5d) = 0;
  *(undefined4 *)((int)this + 0x60) = 4;
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x55) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined1 *)((int)this + 0xa9) = 0;
  *(undefined1 *)((int)this + 0xaa) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  FUN_00ff1c80(transform);
  uVar4 = _DAT_0175b420;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = uVar4;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined1 *)((int)this + 0x140) = 1;
  *(undefined1 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  ExceptionList = pvStack_40;
  return this;
}

