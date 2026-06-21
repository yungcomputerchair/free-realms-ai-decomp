// addr: 0x0051f545
// name: GSynchronizationObject_ctor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GSynchronizationObject_ctor(void * this) */

void * __fastcall GSynchronizationObject_ctor(void *this)

{
                    /* Constructs the common synchronization object base by initializing the
                       GInterface base, zeroing two fields, and installing synchronization vtables.
                       GEvent/GSemaphore constructors build on this base. */
  FUN_0051d932();
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_0176f434;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined ***)this = &PTR_GSynchronizationObject_deletingDtor_017709b0;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_01770988;
  return this;
}

