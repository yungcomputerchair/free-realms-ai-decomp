// addr: 0x012b12c0
// name: PropertyArray_copy16ByteRecords
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyArray_copy16ByteRecords(void * begin, void * end, void * dest)
    */

void * __cdecl PropertyArray_copy16ByteRecords(void *begin,void *end,void *dest)

{
  int iVar1;
  int iVar2;
  
                    /* Copies a contiguous range of 16-byte records to the destination and returns
                       the end of the copied destination range. Evidence is the loop copying four
                       dwords per element and advancing by 0x10 bytes. */
  iVar1 = (int)end - (int)begin;
  if (begin != end) {
    iVar2 = (int)dest - (int)begin;
    do {
      *(undefined4 *)(iVar2 + (int)begin) = *(undefined4 *)begin;
      *(undefined4 *)(iVar2 + 4 + (int)begin) = *(undefined4 *)((int)begin + 4);
      *(undefined4 *)(iVar2 + 8 + (int)begin) = *(undefined4 *)((int)begin + 8);
      *(undefined4 *)(iVar2 + 0xc + (int)begin) = *(undefined4 *)((int)begin + 0xc);
      begin = (void *)((int)begin + 0x10);
    } while (begin != end);
  }
  return (void *)((iVar1 >> 4) * 0x10 + (int)dest);
}

