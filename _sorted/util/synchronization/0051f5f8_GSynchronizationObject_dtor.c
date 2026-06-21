// addr: 0x0051f5f8
// name: GSynchronizationObject_dtor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GSynchronizationObject_dtor(void * this) */

void __fastcall GSynchronizationObject_dtor(void *this)

{
                    /* Destroys the synchronization object base: installs its vtable,
                       clears/destroys an embedded vector/list via 00508063, restores GInterface
                       vtable, and calls the base destructor. This is the destructor path used by
                       0052503b and 00525057. */
  *(undefined ***)this = &PTR_GSynchronizationObject_deletingDtor_017709b0;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_01770988;
  GSynchronizationObject_removeWaiter(*(void **)((int)this + 0x30),&LAB_0051f5ef,this);
  *(undefined ***)((int)this + 0x2c) = GInterface::vftable;
  FUN_00424edd();
  return;
}

