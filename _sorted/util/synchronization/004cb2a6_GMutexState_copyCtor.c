// addr: 0x004cb2a6
// name: GMutexState_copyCtor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GMutexState_copyCtor(void * this, void * other) */

void __thiscall GMutexState_copyCtor(void *this,void *other)

{
                    /* Copies two fields from another embedded synchronization state object and
                       installs the vtable used by the mutex/waitable base copy path. It is the
                       state subobject copied by 0051f48d. */
  *(undefined ***)this = &PTR_LAB_0175c44c;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)other + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  *(undefined ***)this = &PTR_LAB_0176f8f0;
  return;
}

