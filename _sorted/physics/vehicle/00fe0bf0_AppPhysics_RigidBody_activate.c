// addr: 0x00fe0bf0
// name: AppPhysics_RigidBody_activate
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_RigidBody_activate(void * rigidBody) */

void __cdecl AppPhysics_RigidBody_activate(void *rigidBody)

{
                    /* Thin wrapper that sets a Bullet collision object's activation state to 2,
                       likely waking or activating a body from AppPhysics code. */
  FUN_011271b0(2);
  return;
}

