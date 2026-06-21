// addr: 0x015344e0
// name: FUN_015344e0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void OdbRecordVector_pushConstructed(void * outVector) */

void __thiscall OdbRecordVector_pushConstructed(void *this,void *outVector)

{
  void *element;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a temporary ODB record/helper object and pushes it into the
                       supplied vector, then destroys the temporary. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016bba88;
  local_c = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  FUN_005258fb();
  local_4 = 0;
  FUN_015340f0(local_18);
  StdVector28_pushBack((void *)((int)this + 0x28),outVector,element);
  local_4 = 0xffffffff;
  FUN_00521a9c();
  ExceptionList = local_c;
  return;
}

