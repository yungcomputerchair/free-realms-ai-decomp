// addr: 0x013d34d0
// name: InstanceID_dtor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void InstanceID_dtor(void * this) */

void __fastcall InstanceID_dtor(void *this)

{
                    /* Destructor-like vtable teardown for InstanceID back through
                       PersistentComponent and PersistentBase. No additional fields are freed here.
                        */
  *(undefined ***)this = InstanceID::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  return;
}

