// addr: 0x0051f48d
// name: GMutex_copyCtor
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GMutex_copyCtor(void * this, void * other) */

void * __thiscall GMutex_copyCtor(void *this,void *other)

{
                    /* Copies a mutex-like synchronization object by copying the common base,
                       embedded state object, vtables, and a field at offset 0x3c. This is the
                       intermediate waitable copied by GEvent and GSemaphore copy constructors. */
  GInterface_copyCtor(this,other);
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_0176f434;
  GMutexState_copyCtor
            ((undefined4 *)((int)this + 0x30),
             (void *)(-(uint)(other != (void *)0x0) & (int)other + 0x30U));
  *(undefined ***)this = &PTR_FUN_017707f8;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_017707d0;
  *(undefined4 *)((int)this + 0x30) = &PTR_LAB_017707cc;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)other + 0x3c);
  return this;
}

