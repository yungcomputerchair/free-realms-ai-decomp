// addr: 0x00fe0c00
// name: AppPhysics_RigidBody_setDamping
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_RigidBody_setDamping(void * rigidBody, float linearDamping_,
   float angularDamping_) */

void AppPhysics_RigidBody_setDamping(void *rigidBody,float linearDamping_,float angularDamping_)

{
                    /* Thin AppPhysics wrapper around Bullet rigid-body damping setup, forwarding
                       the body and damping arguments to btRigidBody::setDamping. */
  FUN_01182d40(rigidBody,linearDamping_);
  return;
}

