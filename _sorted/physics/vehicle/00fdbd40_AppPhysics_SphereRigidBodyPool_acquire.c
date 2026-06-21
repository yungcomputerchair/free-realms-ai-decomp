// addr: 0x00fdbd40
// name: AppPhysics_SphereRigidBodyPool_acquire
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AppPhysics_SphereRigidBodyPool_acquire(void * world, float * transform,
   int flags_, float radius_, int collisionGroup_, int collisionMask_, int poolKey_) */

void * __thiscall
AppPhysics_SphereRigidBodyPool_acquire
          (void *this,void *world,float *transform,int flags_,float radius_,int collisionGroup_,
          int collisionMask_,int poolKey_)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  char *pcVar4;
  void *this_00;
  float local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = collisionMask_;
                    /* Finds or creates a reusable sphere rigid-body pool bucket, reuses an inactive
                       item when possible, otherwise allocates a sphere shape/body, applies
                       collision filters and transform, marks it active, registers it with the
                       world, and returns the body wrapper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162fa61;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (void *)0x0;
  for (piVar2 = *(int **)((int)this + 0x1094); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[5]) {
    if (*piVar2 == collisionMask_) goto LAB_00fdbd95;
  }
  piVar2 = AppPhysics_SphereRigidBodyPool_allocateList((void *)((int)this + 0x1090));
  *piVar2 = iVar1;
LAB_00fdbd95:
  pcVar4 = (char *)piVar2[2];
  do {
    if (pcVar4 == (char *)0x0) {
      collisionMask_ = (int)Mem_Alloc(0x170);
      local_4 = 0;
      if ((void *)collisionMask_ != (void *)0x0) {
        this_00 = (void *)RigidBody_ctor(&DAT_0175b400,radius_,collisionGroup_,0,0xffffffff,0);
      }
      local_4 = 0xffffffff;
      collisionGroup_ = (int)this_00;
      radius_ = (float)Mem_Alloc(0x10);
      local_4 = 1;
      if ((void *)radius_ == (void *)0x0) {
        radius_ = 0.0;
      }
      else {
        collisionMask_ = (int)Mem_Alloc(0xc);
        local_4._0_1_ = 2;
        if ((void *)collisionMask_ == (void *)0x0) {
          local_4 = CONCAT31(local_4._1_3_,1);
          radius_ = (float)CollisionData_sub_00fdebc0(0,1);
        }
        else {
          pvVar3 = AppPhysics_SphereData_ctor((void *)collisionMask_,(float)flags_);
          local_4 = CONCAT31(local_4._1_3_,1);
          radius_ = (float)CollisionData_sub_00fdebc0(pvVar3,1);
        }
      }
      local_4 = 0xffffffff;
      local_18[0] = 0.0;
      local_18[1] = 0.0;
      local_18[2] = 0.0;
      AppPhysics_RigidBody_create(this_00,(void *)radius_,world,0,(float)transform,local_18);
      pcVar4 = (char *)FUN_00fd7790(&collisionGroup_,&radius_);
LAB_00fdbed6:
      *pcVar4 = '\x01';
      AppPhysics_World_registerRigidBody(this,*(void **)(pcVar4 + 4));
      ExceptionList = local_c;
      return *(void **)(pcVar4 + 4);
    }
    if (*pcVar4 == '\0') {
      AppPhysics_CollisionObject_setCollisionGroup(*(void **)(pcVar4 + 4),SUB42(radius_,0));
      AppPhysics_CollisionObject_setCollisionMask(*(void **)(pcVar4 + 4),(ushort)collisionGroup_);
      AppPhysics_RigidBody_setWorldTransformAndNotify(*(void **)(pcVar4 + 4),world);
      goto LAB_00fdbed6;
    }
    pcVar4 = *(char **)(pcVar4 + 0xc);
  } while( true );
}

