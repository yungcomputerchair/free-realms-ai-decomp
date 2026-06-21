// addr: 0x00fdc660
// name: AppPhysics_CollisionObject_setCollisionGroup
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_CollisionObject_setCollisionGroup(void * this, ushort group_)
    */

void __thiscall AppPhysics_CollisionObject_setCollisionGroup(void *this,ushort group_)

{
  int iVar1;
  undefined2 in_stack_00000006;
  
                    /* Stores a collision filter group at offset 0x14 and mirrors it to the Bullet
                       broadphase proxy field at +4 when a proxy exists. */
  *(undefined4 *)((int)this + 0x14) = _group_;
  if ((*(int *)((int)this + 0xb4) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0xb4) + 200), iVar1 != 0)) {
    *(ushort *)(iVar1 + 4) = group_;
  }
  return;
}

