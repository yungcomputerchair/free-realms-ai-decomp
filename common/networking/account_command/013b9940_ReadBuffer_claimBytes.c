// addr: 0x013b9940
// name: ReadBuffer_claimBytes
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ReadBuffer_claimBytes(void * reader, void ** out_ptr, int byte_count) */

int __thiscall ReadBuffer_claimBytes(void *this,void *reader,void **out_ptr,int byte_count)

{
  uint uVar1;
  
                    /* Checks that byte_count bytes remain in a read buffer, returns a pointer to
                       the current cursor, and advances the cursor offset. */
  uVar1 = *(uint *)((int)this + 0xc);
  if (*(int *)((int)this + 4) < (int)(uVar1 + (int)out_ptr)) {
    return uVar1 & 0xffffff00;
  }
  *(uint *)reader = *(int *)this + uVar1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + (int)out_ptr;
  return CONCAT31((int3)((uint)reader >> 8),1);
}

