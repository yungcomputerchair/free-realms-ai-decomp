// addr: 0x013c2330
// name: PacketBuffer_getDataAndSize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PacketBuffer_getDataAndSize(void * buffer, void ** outData, int *
   outSize) */

bool __thiscall PacketBuffer_getDataAndSize(void *this,void *buffer,void **outData,int *outSize)

{
                    /* If the buffer has a data pointer, writes data and size to the output
                       parameters and returns true; otherwise writes zero outputs and returns false.
                       Evidence is the test of field 0 and copy of fields 0 and 1. */
  if (*(int *)this != 0) {
    *(int *)buffer = *(int *)this;
    *outData = *(void **)((int)this + 4);
    return true;
  }
  *(undefined4 *)buffer = 0;
  *outData = (void *)0x0;
  return false;
}

