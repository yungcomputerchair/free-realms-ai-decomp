// addr: 0x00f62920
// name: Uram_UploaderLogHandlerAdapter_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Uram_UploaderLogHandlerAdapter_create(void * out) */

void * __fastcall Uram_UploaderLogHandlerAdapter_create(void *out)

{
  void *this;
  undefined4 extraout_EAX;
  
                    /* Allocates a Uram_UploaderLogHandlerAdapter, constructs it, and stores the
                       pointer in the output slot, or stores null on allocation failure. */
  this = Mem_Alloc(0x74);
  if (this != (void *)0x0) {
    Uram_UploaderLogHandlerAdapter_ctor(this);
    *(undefined4 *)out = extraout_EAX;
    return out;
  }
  *(undefined4 *)out = 0;
  return out;
}

