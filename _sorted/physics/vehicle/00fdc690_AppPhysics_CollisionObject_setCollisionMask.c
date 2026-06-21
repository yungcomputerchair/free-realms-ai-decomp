// addr: 0x00fdc690
// name: AppPhysics_CollisionObject_setCollisionMask
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_CollisionObject_setCollisionMask(void * this, ushort mask_) */

void __thiscall AppPhysics_CollisionObject_setCollisionMask(void *this,ushort mask_)

{
  int iVar1;
  undefined2 in_stack_00000006;
  
                    /* Stores a collision filter mask at offset 0x18 and mirrors it to the Bullet
                       broadphase proxy field at +6 when a proxy exists. */
  *(undefined4 *)((int)this + 0x18) = _mask_;
  if ((*(int *)((int)this + 0xb4) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0xb4) + 200), iVar1 != 0)) {
    *(ushort *)(iVar1 + 6) = mask_;
  }
  return;
}

