// addr: 0x0088c8a0
// name: Deep_VisibilityCameraLite_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_VisibilityCameraLite_ctor(void * this, void * scene) */

void * __thiscall Deep_VisibilityCameraLite_ctor(void *this,void *scene)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Deep::VisibilityCameraLite over the VisibilityCameraInterface
                       base, initializes security/check helpers, stores the scene pointer, and
                       clears camera state fields. */
  puStack_8 = &LAB_01578cb8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = Deep::VisibilityCameraInterface::vftable;
  local_4 = 0;
  *(undefined ***)this = Deep::VisibilityCameraLite::vftable;
  FUN_0073b3c0(uVar1);
  FUN_0073b3c0();
  *(void **)((int)this + 0x2b8) = scene;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  ExceptionList = local_c;
  return this;
}

