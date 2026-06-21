// addr: 0x012a9e70
// name: FixedRecordVector_insertRecord
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FixedRecordVector_insertRecord(void * vector, void * outSlot, int value,
   int beforeSlot) */

void __thiscall
FixedRecordVector_insertRecord(void *this,void *vector,void *outSlot,int value,int beforeSlot)

{
  undefined4 local_4;
  
                    /* Inserts a 0x1c-byte record into a contiguous vector-like container before the
                       requested slot. It shifts existing records with FUN_012a9a30/FUN_012327d0,
                       updates the end pointer, and writes the new record header fields. */
  local_4 = (uint)this & 0xffffff00;
  FUN_012a9a30(value + 0x1c,*(undefined4 *)((int)this + 8),value,vector,vector,local_4);
  StdStringRange_destroy((void *)((int)*(void **)((int)this + 8) + -0x1c),*(void **)((int)this + 8))
  ;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x1c;
  *(int *)((int)vector + 4) = value;
  *(void **)vector = outSlot;
  return;
}

