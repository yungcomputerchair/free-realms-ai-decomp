// addr: 0x01482ca0
// name: InstanceSubIDFlags_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InstanceSubIDFlags_ctor(void * this) */

void * __fastcall InstanceSubIDFlags_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs InstanceSubIDFlags, invoking its base constructor as needed,
                       assigning InstanceSubIDFlags::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a0bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  InstanceSubID_ctor(this);
  *(undefined ***)this = InstanceSubIDFlags::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

