// addr: 0x004cb339
// name: GSemaphoreState_copyCtor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GSemaphoreState_copyCtor(void * this, void * other) */

void __thiscall GSemaphoreState_copyCtor(void *this,void *other)

{
                    /* Copies two fields from another embedded state object and installs the
                       semaphore-state vtable. It feeds the GSemaphore copy constructor at 0051f4da.
                        */
  *(undefined ***)this = &PTR_LAB_0175c44c;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)other + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  *(undefined ***)this = &PTR_LAB_0176f8f4;
  return;
}

