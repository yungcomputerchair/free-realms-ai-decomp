// addr: 0x0107c2e0
// name: AppPhysics_SphereAttachment_rebuildRigidBody
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_SphereAttachment_rebuildRigidBody(void * this, float *
   transform, float radius_, void * arg4, float mass_, void * rigidBody, float linearDamping_, float
   angularDamping_, int userData_) */

void __thiscall
AppPhysics_SphereAttachment_rebuildRigidBody
          (void *this,float *transform,float radius_,void *arg4,float mass_,void *rigidBody,
          float linearDamping_,float angularDamping_,int userData_)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  float angularDamping__00;
  void *pvVar5;
  undefined4 uVar6;
  float afStack_6c [19];
  void *pvStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Releases any existing rigid body/shape, creates a new sphere shape and rigid
                       body at the supplied transform, activates/configures damping, stores user
                       data, and invokes a virtual post-create hook. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_016400b1;
  local_1c = ExceptionList;
  angularDamping__00 = (float)(DAT_01b839d8 ^ (uint)&stack0xffffff80);
  ExceptionList = &local_1c;
  if (*(int *)((int)this + 0x48) != 0) {
    if (*(char *)((int)this + 0x70) != '\0') {
      (**(code **)(*(int *)this + 0x10))();
    }
    piVar2 = *(int **)((int)this + 0x48);
    piVar1 = piVar2 + 1;
    LOCK();
    iVar4 = *piVar1 + -1;
    *piVar1 = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  if (*(undefined4 **)((int)this + 0x4c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x4c))(1);
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  *(float *)((int)this + 0xa0) = *transform;
  *(float *)((int)this + 0xa4) = transform[1];
  *(float *)((int)this + 0xa8) = transform[2];
  *(float *)((int)this + 0xac) = transform[3];
  FUN_00738c30(&DAT_01bc2660,&DAT_01bc2670,&DAT_01bc2680,transform);
  pvVar5 = Mem_Alloc(0x170);
  uStack_14 = 0;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = RigidBody_ctor(&DAT_0175b400,0x200,0xec7,0,0xffffffff,0);
  }
  uStack_14 = 0xffffffff;
  *(undefined4 *)((int)this + 0x48) = uVar6;
  pvVar5 = Mem_Alloc(0x10);
  uStack_14 = 1;
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = Mem_Alloc(0xc);
    uStack_14._0_1_ = 2;
    if (pvVar5 == (void *)0x0) {
      uStack_14 = CONCAT31(uStack_14._1_3_,1);
      pvVar5 = (void *)CollisionData_sub_00fdebc0(0,1);
    }
    else {
      pvVar5 = AppPhysics_SphereData_ctor(pvVar5,radius_);
      uStack_14 = CONCAT31(uStack_14._1_3_,1);
      pvVar5 = (void *)CollisionData_sub_00fdebc0(pvVar5,1);
    }
  }
  uStack_14 = 0xffffffff;
  *(void **)((int)this + 0x4c) = pvVar5;
  afStack_6c[0] = 0.0;
  afStack_6c[1] = 0.0;
  afStack_6c[2] = 0.0;
  AppPhysics_RigidBody_create
            (*(void **)((int)this + 0x48),pvVar5,afStack_6c + 3,(int)mass_,(float)arg4,afStack_6c);
  FUN_00fe0bb0(1);
  AppPhysics_RigidBody_setDamping(rigidBody,linearDamping_,angularDamping__00);
  pcVar3 = *(code **)(*(int *)this + 0x2c);
  *(void **)((int)this + 0x34) = rigidBody;
  *(int *)((int)this + 0x38) = userData_;
  (*pcVar3)(angularDamping_);
  ExceptionList = pvStack_20;
  return;
}

