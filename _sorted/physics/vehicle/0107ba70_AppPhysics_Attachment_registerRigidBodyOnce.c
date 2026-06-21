// addr: 0x0107ba70
// name: AppPhysics_Attachment_registerRigidBodyOnce
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_Attachment_registerRigidBodyOnce(void * this) */

void __fastcall AppPhysics_Attachment_registerRigidBodyOnce(void *this)

{
                    /* One-shot registration helper: if not already registered and a physics world
                       pointer exists, registers the contained rigid body and marks the object as
                       registered. */
  if (*(char *)((int)this + 0x70) == '\0') {
    if (*(void **)((int)this + 0x48) != (void *)0x0) {
      AppPhysics_World_registerRigidBody(*(void **)((int)this + 0x44),*(void **)((int)this + 0x48));
    }
    *(undefined1 *)((int)this + 0x70) = 1;
  }
  return;
}

