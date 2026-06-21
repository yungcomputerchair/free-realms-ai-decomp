// addr: 0x013ee160
// name: NetworkError_setCode
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkError_setCode(void * this, int code_) */

void __thiscall NetworkError_setCode(void *this,int code_)

{
                    /* Stores an error/status code at offset 4. Evidence: called around
                       NetworkService error paths with literal 0x9f3 and by error-code helpers. */
  *(int *)((int)this + 4) = code_;
  return;
}

