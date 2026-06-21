// addr: 0x013c1a70
// name: Engine_PageFilter_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_PageFilter_dtor(void * this) */

void __fastcall Engine_PageFilter_dtor(void *this)

{
                    /* Destructor/reset thunk for Engine::PageFilter that restores the class vtable.
                       Evidence is the sole assignment to Engine::PageFilter::vftable and calls from
                       destructor thunk addresses. */
  *(undefined ***)this = Engine::PageFilter::vftable;
  return;
}

