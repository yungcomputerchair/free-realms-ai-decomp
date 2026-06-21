// addr: 0x0135a370
// name: VectorBuffer8_scalarDeletingDtor_A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VectorBuffer8_scalarDeletingDtor_A(void * this, char flags) */

void * __thiscall VectorBuffer8_scalarDeletingDtor_A(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor that invokes the vector-like destructor 01357cd0
                       and frees this if requested by the deleting-destructor flag. It belongs to an
                       unidentified wrapper type. */
  puStack_8 = &LAB_0167dfcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_01357cd0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

