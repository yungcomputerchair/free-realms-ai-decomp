// addr: 0x01534410
// name: FUN_01534410
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void OdbRecordVector_pushKeyAndRecord(void * outVector, uint key_) */

void __thiscall OdbRecordVector_pushKeyAndRecord(void *this,void *outVector,uint key_)

{
  void *element;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a temporary ODB record/helper, stores a key, pushes it into the
                       vector, and destroys the temporary. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016bba58;
  local_c = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  FUN_0042c155(&outVector);
  StdVector28_pushBack((void *)((int)this + 0x28),(void *)key_,element);
  FUN_0042c155(&stack0x0000000c);
  FUN_0042c155(&stack0x00000010);
  FUN_0042c155(&stack0x00000014);
  FUN_0042c155(&stack0x00000018);
  FUN_0042c155(&stack0x0000001c);
  FUN_005258fb();
  local_4 = 0;
  FUN_015340f0(local_18);
  local_4 = 0xffffffff;
  FUN_00521a9c();
  ExceptionList = local_c;
  return;
}

