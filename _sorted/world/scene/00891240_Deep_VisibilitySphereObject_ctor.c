// addr: 0x00891240
// name: Deep_VisibilitySphereObject_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * Deep_VisibilitySphereObject_ctor(void * this) */

void * __fastcall Deep_VisibilitySphereObject_ctor(void *this)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Deep::VisibilitySphereObject, initializes its VisibilityObject
                       base with default arguments, clears center/radius-like fields, and sets
                       default float values. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015792b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Deep_VisibilityObject_ctor(this,DAT_01be46d4,(void *)0x0,(void *)0x0);
  *(undefined ***)this = Deep::VisibilitySphereObject::vftable;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  uVar1 = _DAT_0175b420;
  *(undefined4 *)((int)this + 0x2c) = _DAT_0175b420;
  *(undefined4 *)((int)this + 0x30) = uVar1;
  ExceptionList = local_c;
  return this;
}

