// addr: 0x00dc5d70
// name: Deep_VisibilityCamera_setActiveCamera
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Deep_VisibilityCamera_setActiveCamera(void * this, void * camera) */

void __thiscall Deep_VisibilityCamera_setActiveCamera(void *this,void *camera)

{
  void *pvVar1;
  
                    /* Replaces the active camera pointer at +0x2f8; unregisters the previous
                       associated handle and registers the new camera when non-null. */
  pvVar1 = *(void **)((int)this + 0x2f8);
  if (camera != pvVar1) {
    *(void **)((int)this + 0x2f8) = camera;
    if (pvVar1 != (void *)0x0) {
      FUN_00dcb360(*(undefined4 *)((int)this + 0x300));
    }
    if (*(int *)((int)this + 0x2f8) != 0) {
      FUN_00dcb330();
      return;
    }
  }
  return;
}

