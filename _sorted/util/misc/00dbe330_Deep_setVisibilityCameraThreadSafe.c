// addr: 0x00dbe330
// name: Deep_setVisibilityCameraThreadSafe
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Deep_setVisibilityCameraThreadSafe(void * camera) */

void Deep_setVisibilityCameraThreadSafe(void *camera)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Sets or registers a visibility camera, using a global lock/critical section
                       path when initialized and falling back to a direct helper otherwise. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161af08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01bf3db4 == 0) {
    FUN_00dda4f0(camera);
    ExceptionList = local_c;
    return;
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  uStack_4 = 0;
  Deep_VisibilityCamera_setActiveCamera(*(void **)(in_ECX + 0x10),camera);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  ExceptionList = local_c;
  return;
}

