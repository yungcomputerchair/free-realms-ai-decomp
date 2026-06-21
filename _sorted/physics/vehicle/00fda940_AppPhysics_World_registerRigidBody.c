// addr: 0x00fda940
// name: AppPhysics_World_registerRigidBody
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_World_registerRigidBody(void * this, void * rigidBody) */

void __thiscall AppPhysics_World_registerRigidBody(void *this,void *rigidBody)

{
  uint uStack_10;
  
                    /* Registers a rigid body with the physics world if it is not already
                       registered: adds it to the Bullet world, assigns/increments an AppPhysics
                       object ID, inserts it into the lookup map, and updates the body count. */
  if (*(int *)((int)rigidBody + 8) == 0) {
    uStack_10 = (uint)*(ushort *)((int)rigidBody + 0x18);
    (**(code **)(**(int **)((int)this + 8) + 0x58))
              (*(undefined4 *)((int)rigidBody + 0x100),*(undefined2 *)((int)rigidBody + 0x14));
    *(void **)((int)rigidBody + 8) = this;
    *(int *)((int)this + 0x10a0) = *(int *)((int)this + 0x10a0) + 1;
    uStack_10 = *(uint *)((int)this + 0x10a0);
    *(uint *)((int)rigidBody + 0xc) = uStack_10;
    AppPhysics_CollisionObjectMap_insert
              ((void *)((int)this + 0x80),&uStack_10,(uint *)&stack0xfffffff8);
    *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 1;
  }
  return;
}

