// addr: 0x0078e790
// name: SoundControl3d_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SoundControl3d_ctor(void * this, void * arg) */

void * __thiscall SoundControl3d_ctor(void *this,void *arg)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a SoundControl3d object after initializing its base/control data
                       with the supplied argument and installs the SoundControl3d vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155a8d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0078e720(arg);
  *(undefined ***)this = SoundControl3d::vftable;
  ExceptionList = local_c;
  return this;
}

