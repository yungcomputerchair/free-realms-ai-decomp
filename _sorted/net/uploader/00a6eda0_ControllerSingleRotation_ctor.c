// addr: 0x00a6eda0
// name: ControllerSingleRotation_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ControllerSingleRotation_ctor(void * this, undefined4 arg1_, undefined4
   arg2_, undefined4 arg3_, int timeoutMs_, undefined4 arg5_, undefined4 arg6_) */

void * __thiscall
ControllerSingleRotation_ctor
          (void *this,undefined4 arg1_,undefined4 arg2_,undefined4 arg3_,int timeoutMs_,
          undefined4 arg5_,undefined4 arg6_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ControllerSingleRotation object, installs the vftable, stores
                       rotation/control parameters, and defaults a non-positive timeout to 15000 ms.
                       Evidence is the ControllerSingleRotation::vftable assignment and field
                       initialization. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b9ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0094f6c0(arg1_,arg2_,arg3_);
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = arg5_;
  *(undefined ***)this = ControllerSingleRotation::vftable;
  *(undefined4 *)((int)this + 0xe8) = arg6_;
  *(int *)((int)this + 0xec) = timeoutMs_;
  if (timeoutMs_ < 1) {
    *(undefined4 *)((int)this + 0xec) = 15000;
  }
  ExceptionList = local_c;
  return this;
}

