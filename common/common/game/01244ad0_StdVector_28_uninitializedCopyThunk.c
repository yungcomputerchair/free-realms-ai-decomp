// addr: 0x01244ad0
// name: StdVector_28_uninitializedCopyThunk
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector_28_uninitializedCopyThunk(void * this, void * unused, void *
   first, void * unused2, void * last, void * dest) */

void __thiscall
StdVector_28_uninitializedCopyThunk
          (void *this,void *unused,void *first,void *unused2,void *last,void *dest)

{
  undefined4 local_4;
  
                    /* Thunk that forwards a 0x1c-byte element range to the uninitialized
                       copy-construct helper. */
  local_4 = (uint)this & 0xffffff00;
  StdVector_28_copyConstructRange(first,last,dest,this,dest,local_4);
  return;
}

