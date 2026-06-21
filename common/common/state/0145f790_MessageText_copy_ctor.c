// addr: 0x0145f790
// name: MessageText_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageText_copy_ctor(void * this, void * other) */

void * __thiscall MessageText_copy_ctor(void *this,void *other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a MessageText object, installing
                       PersistentBase/PersistentComponent/MessageText vtables, copying two scalar
                       fields, and copying the embedded text payload. */
  puStack_8 = &LAB_0169d14b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  local_4 = 1;
  *(undefined ***)this = MessageText::vftable;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)other + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  FUN_012cedd0((int)other + 0xc);
  ExceptionList = local_c;
  return this;
}

