// addr: 0x0107bae0
// name: AppPhysics_Attachment_setWorldTransform
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_Attachment_setWorldTransform(void * this, float * transform)
    */

void __thiscall AppPhysics_Attachment_setWorldTransform(void *this,float *transform)

{
                    /* If the attachment has a physics world/body pointer, forwards the supplied
                       transform to the AppPhysics rigid-body transform-and-notify path. */
  if (*(void **)((int)this + 0x48) != (void *)0x0) {
    AppPhysics_RigidBody_setWorldTransformAndNotify(*(void **)((int)this + 0x48),transform);
  }
  return;
}

